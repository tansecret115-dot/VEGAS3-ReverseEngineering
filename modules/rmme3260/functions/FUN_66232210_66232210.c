/* Module: rmme3260.dll
   Function: FUN_66232210
   Address: 66232210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66232210(int param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 0x65) & 0x80) == 0) {
    (**(code **)(**(int **)(param_1 + 0x89) + 4))();
    if ((*(byte *)(param_1 + 0x65) & 0x80) == 0) {
      pvVar1 = (void *)(param_1 + -8);
      FUN_66230fe0((int)pvVar1);
      FUN_66231130(pvVar1);
      FUN_66230df0((int)pvVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x89) + 8))();
  }
  return 0;
}


