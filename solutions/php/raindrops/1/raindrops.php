<?php

function raindrops($num1): string
{
	$myString = '';

	if (( $num1 % 3) == 0) {
		$myString = 'Pling';
	}
	if (( $num1 % 5) == 0) {
		$myString .='Plang'; 
	}
	if (( $num1 % 7) == 0) {
		$myString .='Plong'; 
	}

	if ($myString == '') {
		return strval ( $num1 );
	}
	else 
		return $myString;
}
