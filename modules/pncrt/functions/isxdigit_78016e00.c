/* Module: pncrt.dll
   Function: isxdigit
   Address: 78016e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isxdigit(int _C)

{
  int iVar1;
  
                    /* 0x16e00  658  isxdigit */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x80);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 0x80;
}


