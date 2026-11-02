/* Module: rmme3260.dll
   Function: FUN_66202270
   Address: 66202270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202270(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x18) == (void *)0x0) {
    return 0x80040007;
  }
  uVar1 = FUN_66211a30(*(void **)(param_1 + 0x18),param_2);
  return uVar1;
}


