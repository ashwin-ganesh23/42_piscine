cat $1 | grep -i "bomber" | awk '{print $(NF-1) " " $(NF -2)}' | tr -d "BomberNicolas"