<?php

/*
This is only a SKELETON file for the "Hamming" exercise. It's been provided as a
convenience to get you started writing code faster.

Remove this comment before submitting your exercise.
*/

function distance(string $strandA, string $strandB): int
{
	$sizeA = strlen($strandA); 
	$sizeB = strlen($strandB); 
	$count = 0;

    if ($sizeA != $sizeB) {
        throw new InvalidArgumentException('DNA strands must be of equal length.');
    }


                for ($x = 0; $x < $sizeA; $x++) {
    				if($strandA[$x] != $strandB[$x]) {
    					$count++;
					}
				}
				return $count;

}
