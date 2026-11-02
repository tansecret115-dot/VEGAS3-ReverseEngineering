/* Module: vegas30.exe
   Function: FUN_004df4a0
   Address: 004df4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004df4a0(int param_1,LONG param_2,LONG param_3,undefined4 param_4,int param_5)

{
  if (*(int *)(param_1 + 0xcd8) != 0) {
    if (param_5 == 0) {
      ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&param_2);
      FUN_0040c570(DAT_0064762c,*(undefined4 *)(param_1 + 0xcd8),param_2,param_3,param_4);
    }
    else {
      FUN_0040c740(DAT_0064762c);
    }
    if (*(int *)(param_1 + 0xcd8) != 0) {
      FUN_004ec820(*(int *)(param_1 + 0xcd8));
      *(undefined4 *)(param_1 + 0xcd8) = 0;
    }
  }
  return;
}


