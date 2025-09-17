-- 1)
-- Esta funcion nos retorna la siguiente operacion: 3^n
tresElevadoA n
 | n == 0 = 1
 | n == 1 = 3
 | otherwise = 9 * tresElevadoA (n - 2)

-- Esta funcion nos retorna la multiplicacion entre todos los digitos del numero ingresado
multiplarDigitos 0 = 1
multiplarDigitos n = (mod n 10) * multiplarDigitos (div n 10)

--2)
-- a-
productoPorSumasSucesivas a b
    | a == 0 = 0
    | b == 0 = 0
    | otherwise = a + productoPorSumasSucesivas a (b-1)
-- b-
sumaDigitosPares n
    | n < 10 && mod n 2 /= 0 = 0
    | n < 10 && mod n 2 == 0 = n
    | n >= 10 && mod n 2 == 0 = (mod n 10) + sumaDigitosPares (div n 10)
    | n >= 10 && mod n 2 /= 0 = sumaDigitosPares (div n 10)

-- c-
--  i-
contarMenoresG xs
    | null xs = 0
    | head xs < 10 = 1 + contarMenoresG (tail xs)
    | otherwise = contarMenoresG (tail xs)
--  ii-
contarMenoresPM [] = 0
contarMenoresPM (x:xs) = if (x < 10) then 1 + contarMenoresPM xs else contarMenoresPM xs
--  iii-
contarMenoresLC xs = length [x | x <- xs, x < 10]

-- d-
--  i-
eliminarIgualesXG a xs
    | null xs = xs
    | head xs == a = eliminarIgualesXG a (tail xs)
    | otherwise = head xs : eliminarIgualesXG a (tail xs)
--  ii-
eliminarIgualesXPM a [] = []
eliminarIgualesXPM a (x:xs) = if (x == a) then eliminarIgualesXPM a xs else x:eliminarIgualesXPM a xs
--  iii-
eliminarIgualesXLC a xs = [x | x <- xs, x /= a]

-- e-  [elemento x perteneciente a xs, tal que x no sea un elemento de ys]
diferencia xs ys = [x | x <- xs, elem x ys]

-- f-
subLista1 xs a
    | a == 0 = xs
    | a /= 0 = subLista1 (tail xs) (a - 1)

-- g-
f x = 2*x
transformar f xs = [f x| x <- xs]

-- h-
tablaDePares n = [x | x <- [0..n], mod x 2 == 0]

-- i-
paresOrdenados z = [(x,y) | x <- tablaDePares 5, y <- [0..5], odd y, x + y > z]

-- j-
-- Predicado de prueba
pred1 x = x < 10
--  -i
verificarG p xs
    | null xs = True
    | otherwise = p (head xs) && verificarG p (tail xs)
--  -ii
verificarPM p [] = True
verificarPM p (x:xs) = p x && verificarPM p xs
--  -iii
verificarLC p xs = null [x | x <- xs, not(p x)]

-- -k
-- Funcion de prueba
func x y = x > y
--  -i
combinarConG :: (a -> b -> c) -> [a] -> [b] -> [c]
combinarConG f xs ys
    | null xs || null ys = []
    | otherwise = [ f (head xs) y | y <- ys] ++ combinarConG f (tail xs) ys
--  -ii
-- combinarConPM :: (a -> b -> c) -> [a] -> [b] -> [c]
-- combinarConPM f [] _ = []
-- combinarConPM f _ [] = []
-- combinarConPM f (x:xs) (y:ys) = 
--  -iii
combinarConLC :: (a -> b -> c) -> [a] -> [b] -> [c]
combinarConLC f xs ys = [f x y | x <- xs, y <- ys]

-- -l
--  -i
filtrarListaG :: (a -> Bool) -> [a] -> [a]
filtrarListaG p xs
    | null xs = []
    | p (head xs) = head xs : filtrarListaG p (tail xs)
    | otherwise = filtrarListaG p (tail xs)
--  -ii
filtrarListaLC :: (a -> Bool) -> [a] -> [a]
filtrarListaLC p xs = [x | x <- xs , p x]

-- -m
subLista2 [] _ _ = []
subLista2 ys _ 0 = ys
subLista2 (y:ys) x n = if(y > x)then subLista2 ys x (n-1) else subLista2 ys x n

-- -n
insertarLista xs ys n 
    | null xs || null ys = xs
    | otherwise = xs ++ drop n ys

--3)
-- Funcion foldl
-- Forma: foldl f n xs 
-- f una funcion a aplicar
-- n el valor iniciar a aplicar con la funcion (acumulador)
-- xs lista para la concatenacion de operaciones
-- foldl se encarga de realizar una sucesion de operaciones (realizadas por la funcion)
-- con el valor inicial y los de la lista
-- Ej paso a paso:
--    foldl (+) 0 [1,2,3]
-- P1        foldl 1 [2,3]  (Ocurre 0 + 1)
-- P2        foldl 3 [3]    (Ocurre 1 + 2)
-- P3        foldl 6 []     (Ocurre 3 + 3)
--           output: 6           
-- Implementacion propia de foldl (Intentando olvidar la ya leida)
foldlP f n [] = n
foldlP f n (x:xs) = foldlP f (f n x) xs
-- Explicacion con f = (+) | (+) n x = n + x             
-- Caso base de lista vacia, retornar el acumulador
-- Caso recursivo: llamar a la funcion tal que el acumulador sea
-- si mismo sumado ( o verbo Aplicable a la funcion en cuestion) con la
-- head de la lista, pasando el tail de lista en su llamado recursivo