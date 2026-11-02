/* Module: Setup.exe
   Function: _SfWindowPlacement@16
   Address: 0041b7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfWindowPlacement_16(HWND param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  undefined3 extraout_var_00;
  WINDOWPLACEMENT local_2c;
  
                    /* 0x1b7c0  361  _SfWindowPlacement@16 */
  uVar2 = 0x80004005;
  if (param_4 == 0) {
    local_2c.length = 0x2c;
    GetWindowPlacement(param_1,&local_2c);
    uVar2 = _SfSetMetricBinary_16(param_2,param_3,(BYTE *)&local_2c,0x2c);
    return uVar2;
  }
  if (param_4 == 1) {
    bVar1 = _SfLoadWindowPlacement_16(param_2,param_3,1,(LPBYTE)&local_2c);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (uVar2 == 0) {
      _SfFixWindowPlacement_4((int)&local_2c);
      BVar3 = SetWindowPlacement(param_1,&local_2c);
      if (BVar3 == 0) {
        return 0x80004005;
      }
    }
  }
  else if (param_4 == 2) {
    bVar1 = _SfLoadWindowPlacement_16(param_2,param_3,2,(LPBYTE)&local_2c);
    uVar2 = CONCAT31(extraout_var,bVar1);
    _SfFixWindowPlacement_4((int)&local_2c);
    BVar3 = SetWindowPlacement(param_1,&local_2c);
    if (BVar3 == 0) {
      return 0x80004005;
    }
  }
  return uVar2;
}


