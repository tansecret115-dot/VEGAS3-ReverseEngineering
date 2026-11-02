/* Module: sftrans1.dll
   Function: FUN_00546a60
   Address: 00546a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00546a60(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x24) + -8) != 0) {
    FUN_00546dd0(*(int *)(param_1 + 0x24));
    FUN_00545cf0();
  }
  if (*(int *)(*(int *)(param_1 + 0x28) + -8) != 0) {
    FUN_00546dd0(*(int *)(param_1 + 0x28));
    FUN_00545cf0();
  }
  FUN_00547850();
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004ca430(*(int *)(param_1 + 0x10));
    FUN_004c9a40(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0050b3d0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    DrawDibClose(*(int *)(param_1 + 0x30));
  }
  return 0;
}


