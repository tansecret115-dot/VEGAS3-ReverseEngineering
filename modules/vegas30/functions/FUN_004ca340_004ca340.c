/* Module: vegas30.exe
   Function: FUN_004ca340
   Address: 004ca340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ca340(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Transport_IsRecording();
  if (iVar1 == 0) {
    iVar1 = Transport_IsPlaying();
    if (iVar1 == 0) {
      uVar2 = *(uint *)(param_2 + 0x10) >> 7 & 1;
      if (uVar2 != 0) {
        FUN_004c7de0(param_1,param_2,0);
      }
      *(undefined4 *)(param_2 + 0x3c) = param_3;
      InvalidateRect(*(HWND *)(param_1 + 4),
                     (RECT *)(*(int *)(*(int *)(param_2 + 0x69c) + 0x54) + 0x84),0);
      if (uVar2 != 0) {
        FUN_004c7de0(param_1,param_2,1);
      }
    }
  }
  return;
}


