/* Module: vegas30.exe
   Function: FUN_005fd4c0
   Address: 005fd4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fd4c0(int param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = 0xa0000000;
  iVar1 = Transport_IsRecMonitoring();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = Transport_IsPlaying();
    if (iVar1 == 0) {
      uVar2 = 0xb0800000;
      iVar3 = param_1;
    }
  }
  Transport_StopPreview(uVar2,iVar3);
  return;
}


