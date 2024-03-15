void *ft_memmove(void *dest, const void *src, size_t num)
{
    char *cdest = (char *)dest;
    const char *csrc = (const char *)src;

    // Si src y dest son iguales, no hay nada que copiar
    if (dest == src)
        return dest;

    // Determinar la dirección de la copia
    if (cdest < csrc)
    {
        // Copiar de izquierda a derecha
        for (size_t i = 0; i < num; i++)
        {
            cdest[i] = csrc[i];
        }
    }
    else
    {
        // Copiar de derecha a izquierda
        for (size_t i = num; i > 0; i--)
        {
            cdest[i - 1] = csrc[i - 1];
        }
    }

    return dest;
}
