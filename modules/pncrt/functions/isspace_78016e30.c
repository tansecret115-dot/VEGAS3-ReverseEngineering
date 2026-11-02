/* Module: pncrt.dll
   Function: isspace
   Address: 78016e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isspace(int _C)

{
  int iVar1;
  
                    /* 0x16e30  643  isspace */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,8);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 8;
}


