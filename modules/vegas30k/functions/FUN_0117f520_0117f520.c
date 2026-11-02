/* Module: vegas30k.dll
   Function: FUN_0117f520
   Address: 0117f520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0117f520(int param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = 0x20000000;
  iVar1 = Transport_IsRecMonitoring();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = Transport_IsPlaying();
    if (iVar1 == 0) {
      uVar2 = 0x30800000;
      iVar3 = param_1;
    }
  }
  Transport_StopPreview(uVar2,iVar3);
  return;
}


