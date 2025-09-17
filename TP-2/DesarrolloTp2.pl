% 1) a-

progenitor(homer,bart).
progenitor(homer,lisa).
progenitor(homer,maggie).

progenitor(marge,bart).
progenitor(marge,lisa).
progenitor(marge,maggie).

progenitor(mona,homer).

progenitor(abraham,homer).
progenitor(abraham,herb).

progenitor(clancy,marge).
progenitor(clancy,selma).
progenitor(clancy,patty).

progenitor(jackie,marge).
progenitor(jackie,selma).
progenitor(jackie,patty).

progenitor(selma,ling).

/*  
1) b-
    progenitor(homer,X). 
        Muestra los hijos de homer [bart, lisa, maggie]. En el orden que se especificaron
    progenitor(X,homer). 
        Muestra los padres de homer [mona, abraham]. En el orden que se especificaron
    progenitor(jackie,X), progenitor(X,maggie).
        Muestra el atomo que tiene una relacion con el atomo jackie tal que este mismo tenga tambien una relacion
        donde el mismo sea progenitor de maggie. [marge]  
    progenitor(X,homer), progenitor(X,herb).    
        Muestra el progenitor conjuntos entre los atomos homer y herb. [abraham]
*/

/*
1) c-
    - ¿Quién es el progenitor de Patty?
        progenitor(X,patty).
    - ¿Tiene Clancy algún hijo?
        progenitor(clancy,X).
    - ¿Quiénes son los abuelos de Lisa?
        encontrar_abuelo(X,Z):- progenitor(X,Y), progenitor(Y,Z).
        encontra_abuelo(X, lisa).
*/

%1) d-

femenino(jackie).
femenino(mona).
femenino(marge).
femenino(patty).
femenino(selma).
femenino(lisa).
femenino(maggie).
femenino(ling).

masculino(abraham).
masculino(clancy).
masculino(herb).
masculino(homer).
masculino(bart).

% 1) e-

padreDe(Y, X) :- progenitor(Y, X), masculino(Y).
madreDe(Y, X) :- progenitor(Y, X), femenino(Y).

hijoDe(X,Y) :- progenitor(X,Y), masculino(Y).
hijaDe(X,Y) :- progenitor(X,Y), femenino(Y).

encontrar_abuelo(X,Y):- progenitor(X,Z), progenitor(Z,Y).

abueloDe(X,Y):- encontrar_abuelo(X,Y), masculino(X).
abuelaDe(X,Y):- encontrar_abuelo(X,Y), femenino(X).

hermanos(X,Y):- (padreDe(Z,X)); (madreDe(Z,X), madreDe(Z,Y)), X \= Y.