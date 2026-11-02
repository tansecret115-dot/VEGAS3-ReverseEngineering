/* Module: vidcap30.exe
   Function: FUN_0052ac00
   Address: 0052ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ac00(undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((int)param_1 + 2) = 0;
  return;
}


