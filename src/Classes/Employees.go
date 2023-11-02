package Classes

import (
	"fmt"
)

type Employee struct {
	FirstName   string
	LastName    string
	TotalLeaves int
	LeavesTaken int
}

func New(FirstName string, LastName string, TotalLeaves int, LeavesTaken int) Employee {
	e := Employee{FirstName: FirstName, LastName: LastName, TotalLeaves: TotalLeaves, LeavesTaken: LeavesTaken}
	return e
}

func (e Employee) LeavesRemaining() {
	fmt.Printf("%s %s has %d leaves remaining\n", e.FirstName, e.LastName, (e.TotalLeaves - e.LeavesTaken))

}
