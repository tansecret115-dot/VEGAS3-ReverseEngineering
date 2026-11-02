/* Module: vegas30k.dll
   Function: _SfWindowPlacement@16
   Address: 010b54b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfWindowPlacement_16(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  BOOL BVar2;
  WINDOWPLACEMENT local_2c;
  
                    /* 0xb54b0  1303  _SfWindowPlacement@16 */
  iVar1 = -0x7fffbffb;
  if (param_4 == 0) {
    local_2c.length = 0x2c;
    GetWindowPlacement(param_1,&local_2c);
    iVar1 = _SfSetMetricBinary_16(param_2,param_3,&local_2c,0x2c);
    return iVar1;
  }
  if (param_4 == 1) {
    iVar1 = _SfLoadWindowPlacement_16(param_2,param_3,1,&local_2c);
    if (iVar1 == 0) {
      _SfFixWindowPlacement_4(&local_2c);
      BVar2 = SetWindowPlacement(param_1,&local_2c);
      if (BVar2 == 0) {
        return -0x7fffbffb;
      }
    }
  }
  else if (param_4 == 2) {
    iVar1 = _SfLoadWindowPlacement_16(param_2,param_3,2,&local_2c);
    _SfFixWindowPlacement_4(&local_2c);
    BVar2 = SetWindowPlacement(param_1,&local_2c);
    if (BVar2 == 0) {
      return -0x7fffbffb;
    }
  }
  return iVar1;
}


