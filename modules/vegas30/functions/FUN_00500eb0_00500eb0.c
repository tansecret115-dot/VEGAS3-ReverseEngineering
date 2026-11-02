/* Module: vegas30.exe
   Function: FUN_00500eb0
   Address: 00500eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00500eb0(uint param_1,undefined4 param_2,int *param_3)

{
  HWND pHVar1;
  int iVar2;
  CHAR *lpString;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_200 [256];
  CHAR local_100 [256];
  
  iVar2 = *param_3;
  if (((param_1 & 0xffff) == 9) || ((param_1 & 0xffff) == 8)) {
    lpString = local_100;
    iVar3 = 0x100;
    pHVar1 = GetDlgItem((HWND)param_3[6],0x469);
    iVar3 = GetWindowTextA(pHVar1,lpString,iVar3);
    if (iVar3 != 0) {
      iVar2 = _SfTextToLongToken_8(local_100,0);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      else if (DAT_00649430 < iVar2) {
        iVar2 = DAT_00649430;
      }
      SfPrintF(local_200,&DAT_0061052c,iVar2);
      puVar4 = local_200;
      pHVar1 = GetDlgItem((HWND)param_3[6],0x469);
      SfSetWindowText(pHVar1,puVar4);
    }
  }
  iVar2 = _Spinner_DefScrollProc_24(0x115,param_1,param_2,1,2,iVar2);
  if (iVar2 != *param_3) {
    *param_3 = iVar2;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (DAT_00649430 < iVar2) {
      iVar2 = DAT_00649430;
    }
    *param_3 = iVar2;
    SfPrintF(local_200,&DAT_0061052c,iVar2);
    puVar4 = local_200;
    pHVar1 = GetDlgItem((HWND)param_3[6],0x469);
    SfSetWindowText(pHVar1,puVar4);
  }
  return 1;
}


