/* Module: encn3260.dll
   Function: FUN_6648d220
   Address: 6648d220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648d220(int param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_664bbeb0(*(void **)(param_1 + 0x14),(int *)(param_1 + 0x10),(int *)(param_1 + 0x1c),
                 (int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x18);
}


