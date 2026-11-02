/* Module: sfppack1.dll
   Function: FUN_5cdbc8c0
   Address: 5cdbc8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cdbc8c0(void *this,int param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *(short **)((int)this + 0x70);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*psVar2 != 1) {
      if (psVar2[7] == 0x20) {
        *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf370;
        *(undefined1 **)((int)this + 0x330) = &LAB_5cdbf3c0;
        return 0;
      }
      if (psVar2[7] != 0x40) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf4d0;
      *(code **)((int)this + 0x330) = FUN_5cdbf520;
      return 0;
    }
    sVar1 = psVar2[7];
    if (sVar1 == 8) {
      *(undefined1 **)((int)this + 0x334) = &LAB_5cdbede0;
      *(undefined1 **)((int)this + 0x330) = &LAB_5cdbee80;
      return 0;
    }
    if (sVar1 != 0x10) {
      if (sVar1 != 0x20) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf180;
      *(undefined1 **)((int)this + 0x330) = &LAB_5cdbf250;
      return 0;
    }
    *(undefined1 **)((int)this + 0x334) = &LAB_5cdbefb0;
    *(undefined1 **)((int)this + 0x330) = &LAB_5cdbf050;
    return 0;
  }
  if (*psVar2 != 1) {
    if (psVar2[7] == 0x20) {
      *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf370;
      *(undefined1 **)((int)this + 0x330) = &LAB_5cdbf3c0;
      *(undefined1 **)((int)this + 0x33c) = &LAB_5cdc18c0;
      *(undefined1 **)((int)this + 0x338) = &LAB_5cdc1840;
      return 0;
    }
    if (psVar2[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf4d0;
    *(code **)((int)this + 0x330) = FUN_5cdbf520;
    *(undefined1 **)((int)this + 0x33c) = &LAB_5cdc2270;
    *(undefined1 **)((int)this + 0x338) = &LAB_5cdc21f0;
    return 0;
  }
  sVar1 = psVar2[7];
  if (sVar1 == 8) {
    *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf370;
    *(undefined1 **)((int)this + 0x330) = &LAB_5cdbee80;
    *(undefined1 **)((int)this + 0x33c) = &LAB_5cdc1510;
    *(undefined1 **)((int)this + 0x338) = &LAB_5cdc1840;
    return 0;
  }
  if (sVar1 != 0x10) {
    if (sVar1 != 0x20) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf4d0;
    *(undefined1 **)((int)this + 0x330) = &LAB_5cdbf250;
    *(undefined1 **)((int)this + 0x33c) = &LAB_5cdc2080;
    *(undefined1 **)((int)this + 0x338) = &LAB_5cdc21f0;
    return 0;
  }
  *(undefined1 **)((int)this + 0x334) = &LAB_5cdbf370;
  *(undefined1 **)((int)this + 0x330) = &LAB_5cdbf050;
  *(undefined1 **)((int)this + 0x33c) = &LAB_5cdc1710;
  *(undefined1 **)((int)this + 0x338) = &LAB_5cdc1840;
  return 0;
}


