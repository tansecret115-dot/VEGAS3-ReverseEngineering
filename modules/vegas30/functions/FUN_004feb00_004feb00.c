/* Module: vegas30.exe
   Function: FUN_004feb00
   Address: 004feb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004feb00(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    FUN_004febc0(*(int *)(param_1 + 0x178));
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x178),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x178));
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  FUN_004febd0(param_1);
  if (*(int *)(param_1 + 0x188) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 0x188),0);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 0x18c),0);
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 400),0);
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_004fa200(*(int *)(param_1 + 0x194));
  }
  *(undefined4 *)(param_1 + 0x194) = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 0x1a8),0);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return 0;
}


