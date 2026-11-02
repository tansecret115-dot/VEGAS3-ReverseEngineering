/* Module: vegas30.exe
   Function: FUN_005a6ca0
   Address: 005a6ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005a6ca0(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  if (*(int *)(param_1 + 0x8c) != 0) {
    return 0;
  }
  do {
    if (*(int *)(param_1 + 0x10) == 3) {
      _SfVideoPlugin_ApplyTransition_120
                (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x48),
                 *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x60),
                 *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                 *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x80),
                 *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),0,3);
    }
    SetEvent(*(HANDLE *)(param_1 + 8));
    WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  } while (*(int *)(param_1 + 0x8c) == 0);
  return 0;
}


