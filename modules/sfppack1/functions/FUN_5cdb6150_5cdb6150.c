/* Module: sfppack1.dll
   Function: FUN_5cdb6150
   Address: 5cdb6150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cdb6150(void *this,short *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  *(short **)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 100) = param_2;
  if (*param_1 != 1) {
    if (param_1[7] == 0x20) {
      *(undefined1 **)((int)this + 0x10c) = &LAB_5cdb7ac0;
      *(undefined1 **)((int)this + 0x108) = &LAB_5cdb7980;
      uVar2 = FUN_5cdb6230(this);
      return uVar2;
    }
    if (param_1[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x10c) = &LAB_5cdb8560;
    *(undefined1 **)((int)this + 0x108) = &LAB_5cdb84e0;
    uVar2 = FUN_5cdb6230(this);
    return uVar2;
  }
  sVar1 = param_1[7];
  if (sVar1 == 8) {
    *(undefined1 **)((int)this + 0x10c) = &LAB_5cdb7650;
    *(undefined1 **)((int)this + 0x108) = &LAB_5cdb7560;
    uVar2 = FUN_5cdb6230(this);
    return uVar2;
  }
  if (sVar1 != 0x10) {
    if (sVar1 != 0x20) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x10c) = &LAB_5cdb8370;
    *(undefined1 **)((int)this + 0x108) = &LAB_5cdb82b0;
    uVar2 = FUN_5cdb6230(this);
    return uVar2;
  }
  *(undefined1 **)((int)this + 0x10c) = &LAB_5cdb7850;
  *(undefined1 **)((int)this + 0x108) = &LAB_5cdb7770;
  uVar2 = FUN_5cdb6230(this);
  return uVar2;
}


