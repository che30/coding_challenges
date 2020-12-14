#!/bin/ruby

require 'json'
require 'stringio'

# Complete the anagram function below.
def anagram(s)
    if s.length%2!=0
        return -1
    else
        f=s.slice(0...s.size/2).split('')
        se=s.slice(s.size/2...s.size).split('')
        f.map do |e1|
            se.each_with_index do |e2,i|
                if e1==e2
                    se.delete_at(i)
                    break
                end
            end
        end
    se.size
    end
end
