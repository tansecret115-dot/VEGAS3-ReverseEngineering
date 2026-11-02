/* Module: rmme3260.dll
   Function: FUN_66202bc0
   Address: 66202bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202bc0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0xc) == (void *)0x0) {
    return 0x80040007;
  }
  uVar1 = FUN_66216a80(*(void **)(param_1 + 0xc),param_2);
  return uVar1;
}


