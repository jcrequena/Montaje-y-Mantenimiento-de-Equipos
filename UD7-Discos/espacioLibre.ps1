Get-WMIObject  -Class Win32_LogicalDisk | Where-Object {$_.DriveType -eq 3}  `
    | Select-Object @{n="Unidad";e={($_.Name)}}, 
                    @{n="Etiqueta";e={($_.VolumeName)}}, 
                    @{n='Tamaño (GB)';e={"{0:n2}" -f ($_.size/1gb)}}, 
                    @{n='Libre (GB)';e={"{0:n2}" -f ($_.freespace/1gb)}}, 
                    @{n='% Libre';e={"{0:n2}" -f ($_.freespace/$_.size*100)}}
