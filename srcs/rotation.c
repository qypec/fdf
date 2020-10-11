#include "../fdf.h"

void	rotate_x(t_coord *d, t_cam *camera)
{
	int previous_y;
    int previous_z;

    previous_y = d->y;
	previous_z = d->z;
    d->y = previous_y * cos(ft_radian(camera->alpha)) + previous_z * sin(ft_radian(camera->alpha));
}

void	rotate_figure(int key, t_mlx *mlx)
{
	int i;

	i = 0;
	while (i < mlx->img->grid_square)
	{
		if (key == 123)
		{
			mlx->camera->alpha -= 0.01;
            if (fabs(mlx->camera->alpha) >= 360.0)
                mlx->camera->alpha = 0.0;
            check_image_front(mlx->camera);
            if (mlx->camera->front == FALSE && mlx->img->dot[i].z > 0)
                mlx->img->dot[i].z *= (-1);
            else if (mlx->camera->front == TRUE && mlx->img->dot[i].z < 0)
                mlx->img->dot[i].z *= (-1);
			rotate_x(&(mlx->img->dot[i]), mlx->camera);
		}
		else if (key == 124)
		{
			mlx->camera->alpha += 0.01;
            if (fabs(mlx->camera->alpha) >= 360.0)
                mlx->camera->alpha = 0.0;
            check_image_front(mlx->camera);
            if (mlx->camera->front == FALSE && mlx->img->dot[i].z > 0)
                mlx->img->dot[i].z *= (-1);
            else if (mlx->camera->front == TRUE && mlx->img->dot[i].z < 0)
                mlx->img->dot[i].z *= (-1);
			rotate_x(&(mlx->img->dot[i]), mlx->camera);
		}
		i++;
	}
}