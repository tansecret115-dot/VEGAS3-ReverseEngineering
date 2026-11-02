/* Module: pncrt.dll
   Function: isprint
   Address: 78016ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isprint(int _C)

{
  int iVar1;
  
                    /* 0x16ec0  641  isprint */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x157);
    return iVar1;
  }
  return *(ushort *)(_pctype + _C * 2) & 0x157;
}


