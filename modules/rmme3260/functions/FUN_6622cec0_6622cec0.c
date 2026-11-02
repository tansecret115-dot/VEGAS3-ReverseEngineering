/* Module: rmme3260.dll
   Function: FUN_6622cec0
   Address: 6622cec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622cec0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_6622b150(*(void **)(param_1 + 8),param_2);
  return uVar1;
}


