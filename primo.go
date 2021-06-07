package main

import (
	"fmt"
	"math"
)

func main() {
	primos := []int{}

	for n := 2; true; n++ {
		add := true

		for i := 0; i < len(primos); i++ {
			if primos[i] > int(math.Sqrt(float64(n))) {
				break
			}

			if n%primos[i] == 0 {
				add = false
				break
			}
		}

		if add {
			primos = append(primos, n)
			fmt.Println(n)
		}
	}
}
