/* Module: vegas30.exe
   Function: FUN_00555640
   Address: 00555640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00555640(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  CHAR local_28 [40];
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  pHVar2 = GetDlgItem(param_1,0x4cf);
  LVar3 = SendMessageA(pHVar2,Msg,wParam,lParam);
  if ((LVar3 != -1) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + LVar3 * 4), *(int *)(iVar1 + 0x70) != 0
     )) {
    local_28[0] = '\0';
    pHVar2 = GetDlgItem(param_1,0x4ca);
    GetWindowTextA(pHVar2,local_28,0x28);
    uVar4 = _SfTextToLongTokenEx_20(local_28,*(undefined4 *)(iVar1 + 0x68),8,0x800,0);
    *(undefined4 *)(iVar1 + 0x68) = uVar4;
    SfSetWindowText(pHVar2,&DAT_0061052c,uVar4);
    *(undefined4 *)(iVar1 + 0x70) = 0;
  }
  return;
}


