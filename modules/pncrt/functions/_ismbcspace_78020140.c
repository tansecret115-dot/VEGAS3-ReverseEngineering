/* Module: pncrt.dll
   Function: _ismbcspace
   Address: 78020140
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbcspace(uint _Ch)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_4;
  
                    /* 0x20140  312  _ismbcspace */
  if (_Ch < 0x100) {
    if (1 < __mb_cur_max) {
      iVar2 = _isctype(_Ch,8);
      return iVar2;
    }
    return (byte)_pctype[_Ch * 2] & 8;
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
  if ((local_4._2_2_ == 0) && ((local_4 & 8) != 0)) {
    return 1;
  }
  return 0;
}


