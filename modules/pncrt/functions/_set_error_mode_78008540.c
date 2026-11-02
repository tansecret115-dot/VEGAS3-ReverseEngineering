/* Module: pncrt.dll
   Function: _set_error_mode
   Address: 78008540
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _set_error_mode(int _Mode)

{
  int iVar1;
  
                    /* 0x8540  430  _set_error_mode */
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_78041e34;
      DAT_78041e34 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_78041e34;
    }
  }
  return -1;
}


