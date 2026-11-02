/* Module: vegas30k.dll
   Function: FUN_011bf490
   Address: 011bf490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011bf490(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x38))(*(int **)(param_1 + 0x18),param_2);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0xa0) = param_2;
  }
  return;
}


