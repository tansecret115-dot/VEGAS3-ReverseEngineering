/* Module: rmme3260.dll
   Function: FUN_66202330
   Address: 66202330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202330(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x10) == (void *)0x0) {
    return 0x80040007;
  }
  uVar1 = FUN_662121b0(*(void **)(param_1 + 0x10),param_2);
  return uVar1;
}


