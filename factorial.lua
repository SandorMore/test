local function fact(n)
    if n <= 1 then
        return 1
    else
        return n * fact(n-1)
    end
end
local memo = {}
local function FiboNum(n)
    if memo[n] then
        return memo[n]
    end
    if n <= 2 then
        return 1
    end
    local ans = FiboNum(n - 1) + FiboNum(n - 2)
    memo[n] = ans
    return ans
end
