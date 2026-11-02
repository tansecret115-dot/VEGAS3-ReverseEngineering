/* Module: mp3plug.dll
   Function: FUN_5f696d10
   Address: 5f696d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f696d10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0x202; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return 0;
}


