/* Module: rmme3260.dll
   Function: FUN_6623c970
   Address: 6623c970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c970(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = FUN_662404e0(*(int *)(param_1 + 100));
  }
  *(int *)(param_1 + 0xd8) = iVar1 + 1;
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    FUN_66240340(*(void **)(param_1 + 0x68),1,0);
  }
  return 0x80004001;
}


