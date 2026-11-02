/* Module: pncrt.dll
   Function: islower
   Address: 78016da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl islower(int _C)

{
  int iVar1;
  
                    /* 0x16da0  640  islower */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,2);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 2;
}


