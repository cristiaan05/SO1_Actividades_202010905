# Actividad 3
## Crear Script
En la carpeta del usuario en home:
```
sudo vim actividad3.sh
```
Escribir el script
```
#!/bin/bash
while true; do
    echo "¡Hola! La fecha es: $(date +%Y-%m-%d)"
    sleep 1
done

```
Presionar ESC para salir, y ":wq" para guardar

Modificar permisos del Script
```
sudo chmod +x actividad3.sh
```

## Crear servicio
Navegar a la siguiente carpeta
```
cd /etc/systemd/system
```
Crear el servicio
```
sudo vim actividad3.service
```
Escribir el script
```
[Unit]
Description=Print Hello and Date
[Service]
ExecStart=/home/cristian05/actividad3.sh
Type=simple
Restart=always
RestartSec=1
[Install]
WantedBy=multi-user.target

```
Presionar ESC para salir, y ":wq" para guardar

Cambiar los permisos del servicio con el comando: 
```
sudo chmod 777 actividad3.service
```
Habilitar el servicio con el  comando:
```
systemctl enable actividad3.service
```
Iniciar el servicio con el  comando:
```
systemctl start actividad3.service
```
Verificar el estado del servicio con el  comando:
```
sudo systemctl status actividad3.service
```
