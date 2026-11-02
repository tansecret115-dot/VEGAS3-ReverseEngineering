/* Module: vidcap30.exe
   Function: FUN_0044cb00
   Address: 0044cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044cb00(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0x10e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


