/* Module: pncrt.dll
   Function: isalpha
   Address: 78016d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isalpha(int _C)

{
  int iVar1;
  
                    /* 0x16d40  635  isalpha */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x103);
    return iVar1;
  }
  return *(ushort *)(_pctype + _C * 2) & 0x103;
}


