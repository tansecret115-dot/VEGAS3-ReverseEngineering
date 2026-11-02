/* Module: pncrt.dll
   Function: _ismbclower
   Address: 7801ff80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbclower(uint _Ch)

{
  BOOL BVar1;
  undefined4 local_4;
  
                    /* 0x1ff80  309  _ismbclower */
  if (_Ch < 0x100) {
    return (uint)((*(byte *)((int)&_mbctype + _Ch + 1) & 0x20) == 0x20);
  }
  local_4 = 0;
  _Ch = CONCAT31(CONCAT21(_Ch._2_2_,(char)_Ch),(char)(_Ch >> 8));
  if (DAT_78042400 == 0) {
    return 0;
  }
  BVar1 = FUN_7800db00(1,(LPCSTR)&_Ch,2,(LPWORD)&local_4,DAT_78042400,DAT_78042404,1);
  if (BVar1 == 0) {
    return 0;
  }
  if ((local_4._2_2_ == 0) && ((local_4 & 2) != 0)) {
    return 1;
  }
  return 0;
}


