/* Module: vegas30k.dll
   Function: FUN_0102ade0
   Address: 0102ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0102ade0(HWND param_1,int param_2)

{
  int iVar1;
  int iVar2;
  tagRECT local_10;
  
  if (param_2 == 2) {
    return 1;
  }
  if (param_2 != 0x110) {
    return 0;
  }
  _SfSetEditCtrlFont_8(param_1,0);
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  GetWindowRect(param_1,&local_10);
  SetWindowPos(param_1,(HWND)0xffffffff,((local_10.left - local_10.right) + iVar1) / 2,
               ((local_10.left - local_10.right) + iVar2) / 3,0,0,0x41);
  DAT_012099f0 = param_1;
  SfPlugIn_MiniProg_UpdateMiniProgress("");
  return 1;
}


