/* Module: pncrt.dll
   Function: _ismbcdigit
   Address: 7801fcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbcdigit(uint _Ch)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_4;
  
                    /* 0x1fcc0  301  _ismbcdigit */
  if (_Ch < 0x100) {
    if (1 < __mb_cur_max) {
      iVar2 = _isctype(_Ch,4);
      return iVar2;
    }
    return (byte)_pctype[_Ch * 2] & 4;
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
  if ((local_4._2_2_ == 0) && ((local_4 & 4) != 0)) {
    return 1;
  }
  return 0;
}


