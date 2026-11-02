/* Module: pncrt.dll
   Function: __iscsym
   Address: 78016fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl __iscsym(int _C)

{
  uint uVar1;
  
                    /* 0x16fc0  104  __iscsym */
  if (__mb_cur_max < 2) {
    uVar1 = *(ushort *)(_pctype + _C * 2) & 0x107;
  }
  else {
    uVar1 = _isctype(_C,0x107);
  }
  if ((uVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}


