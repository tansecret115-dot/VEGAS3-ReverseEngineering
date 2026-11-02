/* Module: vegas30.exe
   Function: FUN_00452710
   Address: 00452710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00452710(HWND param_1,int param_2)

{
  LONG LVar1;
  HWND pHVar2;
  CHAR *lpString;
  CHAR local_20 [20];
  undefined4 local_c;
  int local_8;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (LVar1 == 0) {
    return 1;
  }
  local_8 = *(int *)(LVar1 + 8);
  *(int *)(LVar1 + 4) = param_2;
  if (local_8 == 0) {
    local_8 = 1;
  }
  local_c = 100;
  SfPrintF(local_20,"%d %%",(int)(((longlong)param_2 * 100) / (longlong)local_8));
  pHVar2 = GetDlgItem(param_1,0x49f);
  SendMessageA(pHVar2,0x60c,1,*(LPARAM *)(LVar1 + 4));
  SetWindowTextA(pHVar2,local_20);
  if (*(int *)(LVar1 + 0x10) != 0) {
    SfPrintF(local_20,&DAT_00612804,*(int *)(LVar1 + 8) - *(int *)(LVar1 + 4));
    lpString = local_20;
    pHVar2 = GetDlgItem(param_1,0x4a2);
    SetWindowTextA(pHVar2,lpString);
  }
  return *(undefined4 *)(LVar1 + 0xc);
}


