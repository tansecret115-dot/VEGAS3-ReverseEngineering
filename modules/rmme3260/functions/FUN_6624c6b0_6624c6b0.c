/* Module: rmme3260.dll
   Function: FUN_6624c6b0
   Address: 6624c6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624c6b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_662352f0(*(int *)(param_1 + 0x40));
  if (iVar1 == 0) {
    return 0x80040009;
  }
  FUN_66235300(*(void **)(param_1 + 0x40),(undefined4 *)0x0);
  return 0;
}


