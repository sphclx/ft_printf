t_printf    *parse_flags(t_printf *str)
{
    size_t i;

    i = 0;
    while ()
    {

        i++;
    }
    return (str);
}

int         parser(t_printf *str)
{
    size_t i;

    if (ft_strcmp(str->copy, "%") == 0)
		return (0);
    i = 0;
    while (str->copy[i] != '\0')
    {
        if (stsr->copy == '%')
        {
            parse_flags(str);
            parse_width(str);
            parse_precision(str);
            parse_lenght(str);
            parse_type(str);
            choose_type(str);
        }
        else
        {
            write(1, &str->copy[i], 1);
            str->return_value++;
        }
        i++;
    }
    return (return_value)
}