#!/bin/ruby

require 'json'
require 'stringio'

# Complete the repeatedString function below.
def repeatedString(s, n)
        count_a_tot=s.count('a')*(n/s.length)+s.slice(0...n%s.length).count('a')
end