/* Module: vegas30.exe
   Function: FUN_004365a0
   Address: 004365a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004365a0(undefined4 *param_1)

{
  HCURSOR pHVar1;
  int iVar2;
  
  FUN_005b83b0(param_1,1);
  pHVar1 = (HCURSOR)_SfGetUICursor_4(0x7f02);
  pHVar1 = SetCursor(pHVar1);
  FUN_005ec620();
  iVar2 = FUN_005ebc10();
  SetCursor(pHVar1);
  if (param_1 != (undefined4 *)0x0) {
    if (iVar2 == 0x4e002) {
      FUN_005b84d0(param_1,1);
      _SfErrorHandler_DetailsInit_0();
      iVar2 = FUN_00432f40(param_1);
      if ((iVar2 < 0) || (iVar2 = _SfErrorHandler_GetLastError_0(), iVar2 != 0)) {
        _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,4,iVar2,0,-1 < iVar2);
      }
      FUN_005b83b0(param_1,1);
    }
    FUN_005ef940(param_1);
    DAT_0064767c = DAT_0064767c | 0x100;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x1000;
  }
  FUN_005b84d0(param_1,1);
  DAT_0064767c = DAT_0064767c | 0x1208;
  return;
}


