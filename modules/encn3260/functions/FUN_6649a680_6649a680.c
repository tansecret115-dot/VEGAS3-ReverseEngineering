/* Module: encn3260.dll
   Function: FUN_6649a680
   Address: 6649a680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649a680(int param_1,int *param_2)

{
  if (((*(byte *)(param_1 + 0x6c) & 8) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    *param_2 = *(int *)(param_1 + 0x30);
    return 0;
  }
  return 0x80004005;
}


