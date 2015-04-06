-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Data.List

isPrime :: Int -> [Int] -> Bool
isPrime p primes = and $ map (/=0) (map (\x -> p `mod` x) primes)

--获取一个数某个因子的次数
getOne :: Int -> Int -> Int
getOne x p 
    | x `mod` p /= 0 = 0
    | otherwise = 1 + (getOne (x `div` p) p)

--获取所有数某个因子的次数和
getSum :: Int -> [Int] -> Int
getSum p a = sum (map (\x -> getOne x p) a)

--获取质数
getPrimes :: Int -> [Int]
getPrimes n 
    | n < 2 = []
    | n == 2 = [2]
    |otherwise = 
       let
        primes = getPrimes $ n-1
       in
        if isPrime n primes then primes ++ [n] else primes 

--将大数变成[(pi,ai)]这样的格式
changeData :: [Int] -> [(Int, Int)]
changeData a = 
    [ (p, getSum p a) | p <- primes ]
   where
    primes = getPrimes 10000

getAnswer :: [(Int,Int)] -> [(Int,Int)] -> [(Int,Int)]
getAnswer [] [] = []
getAnswer [] _ = []
getAnswer _ [] = []
getAnswer ((x,xp):xs) ((y,yp):ys) 
     = (x, min xp yp) : getAnswer xs ys

expMod :: Int -> Int -> Int -> Int
expMod a n p 
    | n == 0 = 1
    | otherwise = if n `mod` 2 == 0 then k else (k * a) `mod` p
   where
    s = expMod a (n `div` 2) p
    k = (s * s) `mod` p

getAns :: [(Int, Int)] -> Int
getAns xs = foldl (\a b -> (a * b) `mod` 1000000007) 1 xss
   where
    xss = map (\(a, b) -> expMod a b 1000000007) xs
    
toInt =  (read :: String -> Int)

main :: IO()
main = do
    input <- getContents
    --print. lines $ input
    let line = lines $ input
        sp = map (\b -> map toInt (words b)) ([line!!x | x <- [1,3]])
        ks = map changeData sp
        an = getAnswer (ks!!0)  (ks!!1)
        ans = getAns an
    print ans
