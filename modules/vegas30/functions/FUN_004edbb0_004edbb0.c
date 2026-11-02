/* Module: vegas30.exe
   Function: FUN_004edbb0
   Address: 004edbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004edbb0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = Transport_IsPreviewPlaying();
    if (iVar1 != 0) {
      FUN_005fd4c0(1);
    }
    FUN_004e3c80(param_1,param_2);
  }
  return;
}


