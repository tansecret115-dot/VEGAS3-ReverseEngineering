/* Module: vegas30.exe
   Function: FUN_0055c190
   Address: 0055c190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055c190(HWND param_1,int param_2,undefined4 param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  int iVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  iVar4 = 0x470;
  pHVar1 = GetParent(param_1);
  pHVar1 = GetDlgItem(pHVar1,iVar4);
  LVar2 = SendMessageA(pHVar1,Msg,wParam,lParam);
  if (LVar2 == -1) {
    return 0x8000ffff;
  }
  iVar4 = *(int *)(param_2 + 0xc + LVar2 * 4);
  if (-1 < iVar4) {
    uVar3 = (**(code **)(*DAT_0064b510 + 0x30))(DAT_0064b510,param_3,iVar4);
    return uVar3;
  }
  return 0x80004002;
}


