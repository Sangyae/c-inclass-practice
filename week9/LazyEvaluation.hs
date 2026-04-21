expr1 :: Int
expr1 = (2 * 3) + 1

expr2 :: Int
expr2 = (2 + 4) * (3 + 5)

expr3 :: Int
expr3 = fst (2 + 1, 3 * 3)

expr4 :: Int
expr4 = product [1, 2 + 1, 3 * 2]


outermostExample :: Int
outermostExample = fst (1 + 2, 2 + 3)


takeFive :: [Int]
takeFive = take 5 [1..]


myList :: [Int]
myList = [1, 2, 3, undefined, 5]

takeThree :: [Int] -> [Int]
takeThree (x:y:z:_) = [x, y, z]

result4 :: [Int]
result4 = takeThree myList


f :: Int -> Int -> Int
f x y = if x > 0 then x else y

test5 :: Int
test5 = f 10 undefined


naturals :: [Int]
naturals = [1..]

firstEven :: [Int] -> Int
firstEven (x:xs)
  | even x    = x
  | otherwise = firstEven xs

result6 :: Int
result6 = firstEven naturals


naturalsWithUndefined :: [Int]
naturalsWithUndefined = [1, undefined, 3] ++ [4..]


result6b :: Int
result6b = firstEven naturalsWithUndefined