/* Module: vegas30.exe
   Function: FUN_004e8800
   Address: 004e8800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e8800(void)

{
  DWORD DVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_564 [288];
  int local_444;
  int local_440;
  
  iVar2 = DAT_0064b138;
  if (DAT_0064b138 == 0) {
    return;
  }
  DVar1 = GetTickCount();
  if ((DVar1 < DAT_0063eea4) || (5000 < DVar1 - DAT_0063eea4)) {
    FUN_005d26e0(iVar2,local_564);
    iVar2 = _SfGetDiskFreeSpace_8(iVar2 + 0x480,((local_440 * local_444 & 0x7fffffffU) >> 2) * 5);
    DAT_0064db28 = (iVar2 * 5) / 0xe10;
    iVar2 = (iVar2 * 5) % 0xe10;
    DAT_0064db2c = iVar2 / 0x3c;
    DAT_0064db30 = iVar2 % 0x3c;
  }
  uVar3 = Transport_GetStatus();
  uVar5 = 0;
  uVar6 = 0;
  if ((DAT_0064db28 == 0) && ((uVar3 & 0x30) != 0)) {
    if (DAT_0064db2c < 0x1e) {
      uVar5 = 100;
      uVar6 = 0xffff;
    }
    if (DAT_0064db2c < 0xf) {
      uVar5 = 100;
      uVar6 = 0xff;
    }
  }
  FUN_004e85b0(0,uVar5,uVar6,DAT_0064cfe4,DAT_0064db28,DAT_0064db2c,DAT_0064db30);
  if (DAT_0064cff0 == 0) {
    DAT_0063eea4 = DVar1;
    return;
  }
  iVar2 = FUN_004e86e0();
  iVar4 = FUN_004e8680();
  uVar5 = 0;
  uVar6 = 0;
  if (iVar2 + 10 < iVar4) {
    if (iVar4 < iVar2 + 0x10) {
      uVar5 = 100;
      uVar6 = 0xffff;
    }
  }
  else {
    uVar5 = 100;
    uVar6 = 0xff;
  }
  FUN_004e85b0(1,uVar5,uVar6,DAT_0064cfec,iVar2,iVar4);
  iVar2 = FUN_004584c0(DAT_00647630);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar5 = 0xff00;
    goto LAB_004e89b6;
  }
  iVar2 = FUN_004e86f0();
  if (iVar2 < 100) {
    iVar2 = FUN_004e86f0();
    if (iVar2 < 0x46) {
      uVar5 = 0xff00;
      goto LAB_004e89b6;
    }
    uVar5 = 0xffff;
    if (iVar2 < 0x55) goto LAB_004e89b6;
  }
  else {
    iVar2 = 99;
  }
  uVar5 = 0xff;
LAB_004e89b6:
  FUN_004e85b0(2,iVar2,uVar5,DAT_0064cfe8,iVar2);
  DAT_0063eea4 = DVar1;
  return;
}


