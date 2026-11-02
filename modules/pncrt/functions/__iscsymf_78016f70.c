/* Module: pncrt.dll
   Function: __iscsymf
   Address: 78016f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl __iscsymf(int _C)

{
  uint uVar1;
  
                    /* 0x16f70  105  __iscsymf */
  if (__mb_cur_max < 2) {
    uVar1 = *(ushort *)(_pctype + _C * 2) & 0x103;
  }
  else {
    uVar1 = _isctype(_C,0x103);
  }
  if ((uVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}


