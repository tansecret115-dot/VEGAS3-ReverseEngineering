/* Module: vegas30k.dll
   Function: FUN_011bcc80
   Address: 011bcc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011bcc80(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x218) + 0x34))(*(int **)(param_1 + 0x218));
  if (-1 < iVar1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  }
  return;
}


