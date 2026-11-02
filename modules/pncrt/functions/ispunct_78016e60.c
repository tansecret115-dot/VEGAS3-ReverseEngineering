/* Module: pncrt.dll
   Function: ispunct
   Address: 78016e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl ispunct(int _C)

{
  int iVar1;
  
                    /* 0x16e60  642  ispunct */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x10);
    return iVar1;
  }
  return (byte)_pctype[_C * 2] & 0x10;
}


