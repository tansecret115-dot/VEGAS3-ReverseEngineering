/* Module: rmme3260.dll
   Function: FUN_66202a10
   Address: 66202a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202a10(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x14) == (void *)0x0) {
    return 0x80040007;
  }
  uVar1 = FUN_66216a50(*(void **)(param_1 + 0x14),param_2);
  return uVar1;
}


