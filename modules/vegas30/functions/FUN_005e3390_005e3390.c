/* Module: vegas30.exe
   Function: FUN_005e3390
   Address: 005e3390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e3390(undefined4 param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(param_4);
  if (iVar1 == 0x45c) {
    FUN_005e3120(param_1,param_2,param_3,param_4);
  }
  return;
}


