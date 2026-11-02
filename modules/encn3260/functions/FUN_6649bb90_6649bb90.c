/* Module: encn3260.dll
   Function: FUN_6649bb90
   Address: 6649bb90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649bb90(int param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 0x65) & 0x80) == 0) {
    (**(code **)(**(int **)(param_1 + 0x89) + 4))();
    if ((*(byte *)(param_1 + 0x65) & 0x80) == 0) {
      pvVar1 = (void *)(param_1 + -8);
      FUN_6649a960((int)pvVar1);
      FUN_6649aab0(pvVar1);
      FUN_6649a770((int)pvVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x89) + 8))();
  }
  return 0;
}


