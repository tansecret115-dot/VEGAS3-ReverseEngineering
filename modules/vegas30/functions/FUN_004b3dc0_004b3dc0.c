/* Module: vegas30.exe
   Function: FUN_004b3dc0
   Address: 004b3dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b3dc0(HWND param_1,uint param_2,undefined4 param_3,int *param_4)

{
  HWND pHVar1;
  int iVar2;
  CHAR *lpString;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_200 [256];
  CHAR local_100 [256];
  
  iVar2 = 0;
  if (((param_2 & 0xffff) == 9) || ((param_2 & 0xffff) == 8)) {
    lpString = local_100;
    iVar3 = 0x100;
    pHVar1 = GetDlgItem(param_1,0x462);
    iVar3 = GetWindowTextA(pHVar1,lpString,iVar3);
    if (iVar3 != 0) {
      iVar2 = _SfTextToLongToken_8(local_100,0);
      if (iVar2 < -0x10) {
        iVar2 = -0x10;
      }
      else if (0x10 < iVar2) {
        iVar2 = 0x10;
      }
      SfPrintF(local_200,&DAT_0061052c,iVar2);
      puVar4 = local_200;
      pHVar1 = GetDlgItem(param_1,0x462);
      SfSetWindowText(pHVar1,puVar4);
    }
  }
  iVar2 = _Spinner_DefScrollProc_24(0x115,param_2,param_3,1,4,iVar2);
  if (iVar2 != *(int *)(*param_4 + 0x2080)) {
    *(int *)(*param_4 + 0x2080) = iVar2;
    SfPrintF(local_200,&DAT_0061052c,*(undefined4 *)(*param_4 + 0x2080));
    puVar4 = local_200;
    pHVar1 = GetDlgItem(param_1,0x462);
    SfSetWindowText(pHVar1,puVar4);
    param_4[2] = 1;
    param_4[0x1d] = 1;
  }
  FUN_004b33c0(param_1,param_4);
  param_4[2] = 1;
  return 1;
}


