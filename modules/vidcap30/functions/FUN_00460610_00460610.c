/* Module: vidcap30.exe
   Function: FUN_00460610
   Address: 00460610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460610(HWND param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  CHAR local_20 [32];
  
  local_20[0] = '\0';
  FUN_004606b0(param_1,param_2);
  GetDlgItemTextA(param_1,0x9c44,local_20,0x1e);
  uVar1 = FUN_0045ae30(local_20,*(undefined4 *)(param_2 + 3),*(undefined4 *)((int)param_2 + 0x1c));
  *param_2 = uVar1;
  return;
}


