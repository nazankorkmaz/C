#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

    typedef struct s_map
{
	int			wid;
	int			hei;
	char		**_map;
	char		**temp_map;
	int			p_count;
	int			c_count;
	int			e_count;
	int			x_count;
}	t_map;

typedef struct s_chr
{
	void	*chr_r;
	void	*chr_l;
	void	*chr_up;
	void	*chr_down;
	int		move_count;
	int		size;
	int		x;
	int		y;
}	t_chr;

typedef struct s_win
{
	t_map	*map;
	t_chr	*chr;
	void	*mlx;
	void	*win;
	void	*bg;
	void	*wall;
	void	*exit;
	void	*coin;
	void	*enemy;
}	t_win;

int main()
{
    char a[]="korkmaz";
    printf("%d",strlen("nazan"));
    printf("%d",strncmp("nazan","an",2));
    printf("/n %d",strncmp(&a[strlen(a)-4],"kmaz",5)); //dizi alacağı için adres işareti konur
   
    printf("\n%d",strncmp(&a[strlen(a)-4],"naz",6));

    printf("\n ----STRUCT SİZE----\n");
    
  
    printf("%d",sizeof(t_map));
    
    printf("\n%d",sizeof(t_chr));
    printf("\n%d",sizeof(t_win));

   

}