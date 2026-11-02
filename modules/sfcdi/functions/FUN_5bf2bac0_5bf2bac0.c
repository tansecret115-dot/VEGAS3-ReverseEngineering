/* Module: sfcdi.dll
   Function: FUN_5bf2bac0
   Address: 5bf2bac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bac0(int param_1)

{
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (((*(uint *)(param_1 + 8) & 4) != 0) && (*(int *)(param_1 + 0xc) == 1)) {
    *(undefined4 *)(param_1 + 0x48) = 0x800;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0x930;
  return 0;
}


