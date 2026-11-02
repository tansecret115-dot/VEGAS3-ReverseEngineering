/* Module: vegas30.exe
   Function: FUN_005aa8f0
   Address: 005aa8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005aa8f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x240)) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
    do {
      *puVar1 = 0xffffffff;
      puVar1[1] = 0x7fffffff;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x240));
    return 0;
  }
  return 0;
}


