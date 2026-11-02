/* Module: aviplug.dll
   Function: FUN_5f95c8f0
   Address: 5f95c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f95c8f0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) &&
     ((((iVar1 = *(int *)(param_1 + 4), iVar1 == 0x6e76645f || (iVar1 == 0x6e766477)) ||
       (iVar1 == 0x7076645f)) || ((iVar1 == 0x70766477 || (iVar1 == 0x64737664)))))) {
    return 1;
  }
  return 0;
}


