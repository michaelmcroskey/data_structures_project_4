#!/bin/bash
# Michael McRoskey
# November 4 2016

printf "| BACKEND              | NITEMS     | INSERT     | SEARCH     |\n"
printf "|----------------------|------------|------------|------------|\n"
for (( NITEMS=10; NITEMS<=10000000; NITEMS*=10 ))
do  
	for BACKEND in unsorted sorted bst rbtree treap chained open
	do
		if [ "$BACKEND" = "chained" ]
		then
			for LOAD_FACTOR in 0.500 0.750 1.000 5.000 10.00 100.0
			do
				# APPEND LOAD_FACTOR --------------------------
				SAVED="$BACKEND"
				BACKEND="$BACKEND-$LOAD_FACTOR"
				
				# PERFORM TIME TESTS --------------------------
				map_bench=$(./timeout.sh -t 60 ./map_bench -b $BACKEND -n $NITEMS)
				a=($map_bench)
				
				if [ ${a[0]} = "Terminated: 15" ]
				then
					insert="inf"
					search="inf"
				else
					insert=$(printf "%.4f" ${a[1]})
					search=$(printf "%.4f" ${a[4]})
				fi

				# PRINT ROW IN TABLE ---------------------------
				printf "| \t %13s | %10s | %10s | %10s |\n" $BACKEND $NITEMS $insert $search
				
				# restore BACKEND
				BACKEND="$SAVED"
			done
			# no need to print a standard row
			continue
		fi
		
		if [ "$BACKEND" = "open" ]
		then
			for LOAD_FACTOR in 0.5 0.6 0.7 0.8 0.9 1.0
			do
				# APPEND LOAD_FACTOR --------------------------
				SAVED="$BACKEND"
				BACKEND="$BACKEND-$LOAD_FACTOR"
				
				# PERFORM TIME TESTS --------------------------
				map_bench=$(./timeout.sh -t 60 ./map_bench -b $BACKEND -n $NITEMS)
				a=($map_bench)
				
				if [ ${a[0]} = "Terminated: 15" ]
				then
					insert="inf"
					search="inf"
				else
					insert=$(printf "%.4f" ${a[1]})
					search=$(printf "%.4f" ${a[4]})
				fi
				
				# PRINT ROW IN TABLE ---------------------------
				printf "| \t %13s | %10s | %10s | %10s |\n" $BACKEND $NITEMS $insert $search
				
				# restore BACKEND
				BACKEND="$SAVED"
			done
			# no need to print a standard row
			continue
		fi
		
		# PERFORM TIME TESTS -----------------------------------
		map_bench=$(./timeout.sh -t 60 ./map_bench -b $BACKEND -n $NITEMS)
		a=($map_bench)
		
		if [ ${a[0]} = "Terminated: 15" ]
		then
			insert="inf"
			search="inf"
		else
			insert=$(printf "%.4f" ${a[1]})
			search=$(printf "%.4f" ${a[4]})
		fi
		
		# PRINT ROW IN TABLE -----------------------------------
		printf "| \t %13s | %10s | %10s | %10s |\n" $BACKEND $NITEMS $insert $search
		
	done
	
done
