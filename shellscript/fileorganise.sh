#!/bin/bash
#To organize file according to extension

echo "Organizing file in current directory..."
for file in *; do
	if [ -f "$file" ] ; then 
	       extension="${file##*.}"
          if [ "$extension" == "$file" ]; then
               continue
          fi
          if [ ! -d "$extension" ]; then
	    mkdir "$extension"
            echo "Created extension: $extension/ "
	  fi
            mv "$file" "$extension/"
            echo "Moved '$file' to '$extension/' "
	fi
done
echo "File organization completed"
