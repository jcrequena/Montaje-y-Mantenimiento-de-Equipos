Básicamente, lo que hace este script es, desde el comando Get-WMIObject, buscar en la clase Win32_LogicalDisk los datos.
En este caso, se seleccionan los objetos (Discos) que son del tipo local: Where-Object {$_.DriveType -eq 3}
