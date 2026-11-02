/* Module: rmme3260.dll
   Function: FUN_6622cf20
   Address: 6622cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622cf20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_6622ad30(*(void **)(param_1 + 8),param_2);
  return uVar1;
}


