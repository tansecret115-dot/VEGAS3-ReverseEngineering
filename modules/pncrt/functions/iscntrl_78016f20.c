/* Module: pncrt.dll
   Function: iscntrl
   Address: 78016f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iscntrl(int _C)

{
  int iVar1;
  
                    /* 0x16f20  636  iscntrl */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x20);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 0x20;
}


