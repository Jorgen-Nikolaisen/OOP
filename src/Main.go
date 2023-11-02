package main

import (
	"fmt"
	"log"
	Classes "main/Classes"
)

func main() {
	log.SetPrefix("Test 1 2")

	e := Classes.New("Sam", "Halyk", 30, 20)
	e.LeavesRemaining()

	a := Classes.NewAccount(32000)
	a.SetInterestRate(3.5)
	fmt.Println(a.ToString())

}
