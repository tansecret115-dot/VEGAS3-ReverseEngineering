/* Module: vegas30.exe
   Function: FUN_005e3120
   Address: 005e3120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e3120(HWND param_1,int param_2,uint param_3,undefined4 param_4)

{
  HWND pHVar1;
  int iVar2;
  uint uVar3;
  UINT Msg;
  LPARAM lParam;
  undefined1 local_200 [256];
  CHAR local_100 [256];
  
  uVar3 = *(uint *)(param_2 + 0x350);
  pHVar1 = GetDlgItem(param_1,0x45b);
  if ((((param_3 & 0xffff) == 9) || ((param_3 & 0xffff) == 8)) && (pHVar1 != (HWND)0x0)) {
    iVar2 = GetWindowTextA(pHVar1,local_100,0x100);
    if (iVar2 != 0) {
      uVar3 = _SfTextToLongToken_8(local_100,0);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      else if (DAT_0064868c < uVar3) {
        uVar3 = DAT_0064868c;
      }
      SfPrintF(local_200,&DAT_00619b24,uVar3);
      SfSetWindowText(pHVar1,local_200);
    }
  }
  uVar3 = _Spinner_DefScrollProc_24(0x115,param_3,param_4,1,2,uVar3);
  if (uVar3 != *(uint *)(param_2 + 0x350)) {
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else if (DAT_0064868c < uVar3) {
      uVar3 = DAT_0064868c;
    }
    *(uint *)(param_2 + 0x350) = uVar3;
    SfPrintF(local_200,&DAT_00619b24,uVar3);
    if (pHVar1 != (HWND)0x0) {
      SfSetWindowText(pHVar1,local_200);
    }
    if (*(int *)(param_2 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      pHVar1 = GetParent(param_1);
      SendMessageA(pHVar1,Msg,(WPARAM)param_1,lParam);
    }
    *(undefined4 *)(param_2 + 0xd4c) = 1;
  }
  return 1;
}


