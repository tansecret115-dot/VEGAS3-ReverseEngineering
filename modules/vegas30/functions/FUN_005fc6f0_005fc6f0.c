/* Module: vegas30.exe
   Function: FUN_005fc6f0
   Address: 005fc6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005fc6f0(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = Transport_IsPlaying();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = Transport_IsRecording();
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = Transport_GetStatus();
  iVar1 = FUN_005fc660(1,0);
  if (iVar1 == 0) {
    bVar4 = (uVar2 & 0x70000) == 0;
    iVar3 = FUN_005fc690(bVar4,1);
    if (-1 < iVar3) {
      if (bVar4) {
        DAT_0065e528 = DAT_0064b138;
        _DAT_0065e52c = DAT_00647630;
        Transport_SetRate(1.0,0);
        Transport_SetLength(0xfffffffffffffff);
        _DAT_0064b15c = DAT_0065e528;
        Mixer_SetContext(&DAT_0064b15c);
        DAT_0064b150 = 1;
        InterlockedIncrement(&DAT_0065e144);
        if (DAT_0064768c != &DAT_005fdae0) {
          FUN_00404750(0);
          FUN_004046b0(&DAT_005fdae0,DAT_006476e8,&DAT_0065e528);
          FUN_00439930();
          return 0;
        }
      }
      else {
        iVar1 = Transport_IsAnyOpen();
        if ((iVar1 == 0) && (DAT_0064768c == &DAT_005fdae0)) {
          FUN_004046b0(0,0,0);
          FUN_00404750(1);
        }
        DAT_0064b150 = 0;
        InterlockedDecrement(&DAT_0065e144);
      }
      FUN_00439930();
      return 0;
    }
  }
  else if (iVar1 == 0x4e005) {
    FUN_004f8900(0,&DAT_006476a0,5);
    iVar1 = FUN_005fc660(1,0);
    if (iVar1 == 0) {
      iVar1 = FUN_005fc6f0();
    }
  }
  return iVar1;
}


