package main

import (
  "fmt"
  "time"
)

func main () {
  startTime := time.Now()

  for i := 0; i < 100000; i++{
    fmt.Printf("\n%d", i)
  }

  endTime := time.Now()

  timeTaken := endTime.Sub(startTime)

  fmt.Printf("\n Tie taken %s\n", timeTaken)
}
