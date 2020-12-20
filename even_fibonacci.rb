t = gets.strip.to_i
for a0 in (0..t-1)
    n = gets.strip.to_i
    fib3 = 2;
    fib6 = 0;
    result = 2;
    summed = 0;
    if n<2
        puts 0
    else
        while summed<=n do
            summed += result
            result = 4*fib3 + fib6
            if(result>n)
                result=result-((4*fib3)+fib6)
                break
            end
        fib6 = fib3
        fib3 = result
        end
         puts summed
    end
    
    
end