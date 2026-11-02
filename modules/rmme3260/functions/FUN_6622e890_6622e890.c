/* Module: rmme3260.dll
   Function: FUN_6622e890
   Address: 6622e890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622e890(int param_1,int *param_2)

{
  if (((*(byte *)(param_1 + 0x20) & 2) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *param_2 = *(int *)(param_1 + 0x18);
    return 0;
  }
  return 0x80004005;
}


