#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	if(!str)
		return ;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
void	summer_in_sanfrancisco(int clouds)
{
	int i;
	int x;

	x = 0;
	i = 0;
	if (clouds < 1)
		return ;
	if (clouds == 1)
	{
		ft_putstr(" ~^~^~^~\n~^{CLOUD}^~\n~^{CLOUD}^~\n ~^~^~^~\n / / / /\n/ / / /\n / / /\n");
	}
	if(x < clouds)
	{
		while(i < clouds)
		{
			ft_putstr("  ~^~^~^~  ");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		i = 0;
		while(i < clouds)
		{
			ft_putstr("~^{CLOUD}^~");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		i = 0;
		while(i < clouds)
		{
			ft_putstr("~^{CLOUD}^~");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		i = 0;
		while(i < clouds)
		{
			ft_putstr("  ~^~^~^~  ");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		i = 0;
		while(i < clouds)
		{
			ft_putstr(" / / / /");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		i = 0;
		while (i < clouds)
		{
			ft_putstr("/ / / /");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		i = 0;
		while(i < clouds)
		{
			ft_putstr(" / / /");
				i++;
		}
		if (i == clouds)
			ft_putchar('\n');
		x++;
	}
}

int main()
{
	summer_in_sanfrancisco(4);
	return 0;
}