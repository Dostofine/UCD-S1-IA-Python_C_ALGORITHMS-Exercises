for i in {1..9}; do
    for ext in txt c py; do
        if [ -f exercice$i.$ext ]; then
            mv exercice$i.$ext exercice0$i.$ext
        fi
    done
done
