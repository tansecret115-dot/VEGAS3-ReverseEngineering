/* Module: vegas30.exe
   Function: FUN_0055c2c0
   Address: 0055c2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055c2c0(HWND param_1,int param_2)

{
  HWND pHVar1;
  
  SetWindowLongA(param_1,8,*(LONG *)(param_2 + 0x40));
  FUN_0055c310(param_1);
  pHVar1 = GetDlgItem(param_1,1000);
  FUN_0055dc50(s_MRU_Folders_00645458,pHVar1);
  FUN_0055c200(param_1,*(undefined4 *)(param_2 + 0x40));
  return;
}


