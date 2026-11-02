/* Module: vegas30.exe
   Function: FUN_006097c0
   Address: 006097c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_006097c0(uchar *param_1,int param_2,undefined4 param_3,uchar *param_4)

{
  uchar uVar1;
  uchar *_Source;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *param_1;
  while (_Source = param_1, uVar1 != '\0') {
    uVar1 = *param_1;
    if ((uVar1 == '\n') || (uVar1 == '\r')) {
      _Source = param_1 + 1;
      if ((param_1[1] == '\n') || (param_1[1] == '\r')) {
        _Source = param_1 + 2;
      }
      if (iVar2 != 0) break;
    }
    else {
      if (uVar1 != '\t') {
        *(uchar *)(iVar2 + param_2) = uVar1;
        iVar2 = iVar2 + 1;
      }
      _Source = param_1 + 1;
    }
    param_1 = _Source;
    uVar1 = *_Source;
  }
  *(undefined1 *)(iVar2 + param_2) = 0;
  if (iVar2 == 0) {
    _mbscpy(param_4,"");
    return 0x80004005;
  }
  _mbscpy(param_4,_Source);
  return 0;
}


