/* Module: vegas30k.dll
   Function: FUN_011c0f50
   Address: 011c0f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c0f50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_011b5cc0(param_1,param_2);
  if ((-1 < iVar1) && (*(int **)(param_1 + 0x140) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x140) + 100))(param_2);
  }
  return;
}


