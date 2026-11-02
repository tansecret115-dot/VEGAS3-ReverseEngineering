/* Module: pncrt.dll
   Function: isdigit
   Address: 78016dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isdigit(int _C)

{
  int iVar1;
  
                    /* 0x16dd0  637  isdigit */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,4);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 4;
}


