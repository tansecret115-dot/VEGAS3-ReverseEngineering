/* Module: pncrt.dll
   Function: isupper
   Address: 78016d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isupper(int _C)

{
  int iVar1;
  
                    /* 0x16d70  644  isupper */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,1);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 1;
}


