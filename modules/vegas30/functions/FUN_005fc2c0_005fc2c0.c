/* Module: vegas30.exe
   Function: FUN_005fc2c0
   Address: 005fc2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005fc2c0(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  __int64 _Var4;
  
  uVar3 = 0;
  if (DAT_00646e38 != 0) goto LAB_005fc410;
  uVar2 = Transport_IsPlaying();
  DAT_00646ea0 = DAT_00646ea0 ^ (uVar2 ^ DAT_00646ea0) & 1;
  uVar2 = Transport_IsPreviewPlaying();
  DAT_00646ea0 = (uVar2 & 1) << 1 | DAT_00646ea0 & 0xfffffffd;
  uVar2 = Transport_IsRecording();
  DAT_00646ea0 = (uVar2 & 1) << 2 | DAT_00646ea0 & 0xfffffffb;
  uVar2 = Transport_IsRecMonitoring();
  DAT_00646ea0 = ((DAT_0064b150 & 1) << 1 | uVar2 & 1) << 3 | DAT_00646ea0 & 0xffffffe7;
  uVar2 = FUN_005fc5f0();
  DAT_00646ea0 = (uVar2 & 1) << 5 | DAT_00646ea0 & 0xffffffdf;
  _Var4 = Transport_GetPos();
  DAT_00646e44 = (undefined4)((ulonglong)_Var4 >> 0x20);
  DAT_00646e40 = (undefined4)_Var4;
  _Var4 = Transport_GetPreviewPos();
  *(int *)(PTR_DAT_00646e70 + 8) = (int)_Var4;
  *(int *)(PTR_DAT_00646e70 + 0xc) = (int)((ulonglong)_Var4 >> 0x20);
  _DAT_00646e68 = Transport_GetRate();
  _DAT_00646e98 = _DAT_00646e68;
  if ((DAT_00646ea0 & 4) == 0) {
    if ((DAT_00646ea0 & 1) != 0) {
      uVar3 = FUN_005fb390(DAT_0065e528,DAT_00646e40,DAT_00646e44);
    }
    bVar1 = (byte)DAT_00646ea0;
    if (((byte)DAT_00646ea0 & 2) != 0) {
      uVar3 = FUN_005fd4c0(1);
      bVar1 = (byte)DAT_00646ea0;
    }
    if ((bVar1 & 8) != 0) {
      uVar3 = FUN_005fb710(0xffffffff);
      goto LAB_005fc3f7;
    }
  }
  else {
    uVar3 = FUN_005fb660(DAT_0065e528,1,0,0xffffffff,0xffffffff);
LAB_005fc3f7:
    bVar1 = (byte)DAT_00646ea0;
  }
  if (((bVar1 & 0x10) != 0) && ((bVar1 & 0x20) == 0)) {
    FUN_005fc6f0();
  }
  FUN_00429480();
LAB_005fc410:
  DAT_00646e38 = DAT_00646e38 + 1;
  return uVar3;
}


