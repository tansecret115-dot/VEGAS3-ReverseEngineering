/* Module: pncrt.dll
   Function: isalnum
   Address: 78016e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isalnum(int _C)

{
  int iVar1;
  
                    /* 0x16e90  634  isalnum */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x107);
    return iVar1;
  }
  return *(ushort *)(_pctype + _C * 2) & 0x107;
}


