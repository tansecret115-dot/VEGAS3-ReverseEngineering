/* Module: vegas30.exe
   Function: FUN_005847a0
   Address: 005847a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005847a0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x24) + -8) != 0) {
    FUN_005829a0(*(int *)(param_1 + 0x24));
    FUN_00580a00();
  }
  if (*(int *)(*(int *)(param_1 + 0x28) + -8) != 0) {
    FUN_005829a0(*(int *)(param_1 + 0x28));
    FUN_00580a00();
  }
  FUN_00581550();
  if (*(int *)(param_1 + 0x10) != 0) {
    _SfLang_DestroyStringTables_4(*(int *)(param_1 + 0x10));
    _SfLang_Close_4(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    _SfMetric_Close_4(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    DrawDibClose(*(int *)(param_1 + 0x30));
  }
  return 0;
}


