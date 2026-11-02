/* Module: vegas30.exe
   Function: FUN_005fc8e0
   Address: 005fc8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fc8e0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Transport_IsPlaying();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = Transport_IsRecording();
  if (iVar1 == 0) {
    Transport_GetStatus();
    FUN_005fb030(DAT_0064b138);
    iVar1 = FUN_005fc660(2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_005fc600(2,1);
      iVar1 = FUN_005fc6d0(iVar1 != 0,2);
    }
    else if (iVar1 == 0x4e005) {
      FUN_004f8900(0,&DAT_006476a0,5);
      iVar1 = FUN_005fc660(2,1);
      if (iVar1 == 0) {
        iVar1 = FUN_005fc8e0();
      }
    }
    uVar2 = FUN_004581e0(DAT_00647630);
    FUN_005fb010(uVar2);
    return iVar1;
  }
  return 1;
}


