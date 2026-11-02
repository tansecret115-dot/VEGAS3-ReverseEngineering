/* Module: vegas30.exe
   Function: FUN_005b40e0
   Address: 005b40e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b40e0(int param_1)

{
  if (*(int *)(param_1 + 0x3bc) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3bc));
    *(undefined4 *)(param_1 + 0x3bc) = 0;
  }
  if (*(int *)(param_1 + 0x3c0) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3c0));
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  if (*(int *)(param_1 + 0x3c4) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3c4));
    *(undefined4 *)(param_1 + 0x3c4) = 0;
  }
  if (*(int *)(param_1 + 0x3c8) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3c8));
    *(undefined4 *)(param_1 + 0x3c8) = 0;
  }
  if (*(int *)(param_1 + 0x3cc) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3cc));
    *(undefined4 *)(param_1 + 0x3cc) = 0;
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3d0));
    *(undefined4 *)(param_1 + 0x3d0) = 0;
  }
  if (*(int *)(param_1 + 0x3d4) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3d4));
    *(undefined4 *)(param_1 + 0x3d4) = 0;
  }
  if (*(int *)(param_1 + 0x3d8) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x3d8));
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_005bad50(*(int *)(param_1 + 0x3f0));
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  FUN_005b7c80();
  FUN_005b50d0();
  FUN_005b50d0();
  return;
}


