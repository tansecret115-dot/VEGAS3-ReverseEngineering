/* Module: encn3260.dll
   Function: FUN_66498250
   Address: 66498250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66498250(int param_1,int *param_2)

{
  if (((*(byte *)(param_1 + 0x20) & 2) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *param_2 = *(int *)(param_1 + 0x18);
    return 0;
  }
  return 0x80004005;
}


