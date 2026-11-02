/* Module: vegas30.exe
   Function: FUN_005fc850
   Address: 005fc850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fc850(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = Transport_IsPlaying();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = Transport_IsRecording();
  if (iVar1 == 0) {
    uVar2 = Transport_GetStatus();
    iVar1 = FUN_005fc6b0(1);
    if (iVar1 == 0) {
      iVar1 = FUN_005fc6d0((uVar2 & 0x300000) == 0,1);
    }
    else if (iVar1 == 0x4e005) {
      FUN_004f8900(0,&DAT_006476a0,5);
      iVar1 = FUN_005fc660(1,1);
      if (iVar1 == 0) {
        iVar1 = FUN_005fc850();
      }
    }
    uVar3 = FUN_004581e0(DAT_00647630);
    FUN_005fb010(uVar3);
    return iVar1;
  }
  return 1;
}


