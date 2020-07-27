package main

import "fmt"

func main() {
	primos := []int{}

	for n := 2; true; n++ {
		add := true

		for i := 0; i < len(primos); i++ {
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
