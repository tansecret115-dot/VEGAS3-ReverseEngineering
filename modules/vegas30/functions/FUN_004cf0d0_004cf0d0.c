/* Module: vegas30.exe
   Function: FUN_004cf0d0
   Address: 004cf0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cf0d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x69c);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[0x15];
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 4) == 2) {
        if (*(int *)(iVar2 + 0x324) != 0) {
          _MeterInst_Deinit_4(*(int *)(iVar2 + 0x324));
          *(undefined4 *)(iVar2 + 0x324) = 0;
        }
        if ((*(uint *)(param_1 + 0x10) & 0x80) != 0) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff7f;
          iVar2 = Transport_IsPlaying();
          iVar3 = Transport_IsRecording();
          if ((iVar2 == 0) && (iVar3 == 0)) {
            FUN_005fb710(0xffffffff);
            FUN_005fb6a0(0xffffffff);
          }
          FUN_0058bbd0(param_1);
        }
      }
      free((void *)puVar1[0x15]);
      puVar1[0x15] = 0;
    }
    if ((void *)puVar1[0x16] != (void *)0x0) {
      free((void *)puVar1[0x16]);
      puVar1[0x16] = 0;
    }
    if (DAT_0064762c != 0) {
      if (*(int *)(DAT_0064762c + 0xa0) != 0) {
        FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
      }
      if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
        FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
      }
    }
    puVar1[0x14] = 0;
    *puVar1 = 0;
  }
  return;
}


