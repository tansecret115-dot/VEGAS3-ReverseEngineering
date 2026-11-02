/* Module: rmme3260.dll
   Function: FUN_66230d00
   Address: 66230d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66230d00(int param_1,int *param_2)

{
  if (((*(byte *)(param_1 + 0x6c) & 8) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    *param_2 = *(int *)(param_1 + 0x30);
    return 0;
  }
  return 0x80004005;
}


