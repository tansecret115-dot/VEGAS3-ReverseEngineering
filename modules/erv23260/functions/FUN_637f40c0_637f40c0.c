/* Module: erv23260.dll
   Function: FUN_637f40c0
   Address: 637f40c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f40c0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2fc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x300) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  if (*(int *)((int)this + 0x2fc) != 0) {
    return 1;
  }
  *(undefined4 *)((int)this + 0x464) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x460) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x30c) = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)((int)this + 0x464) == 7) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined4 *)((int)this + 0x464) = *(undefined4 *)(param_1 + 0x2c);
    }
    *(undefined4 *)((int)this + 0x304) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((int)this + 0x308) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((int)this + 0x310) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)((int)this + 0x314) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((int)this + 0x318) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)((int)this + 0x31c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((int)this + 800) = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)((int)this + 0x314) != 0) {
      return 1;
    }
    if (*(int *)((int)this + 0x318) != 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x324) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((int)this + 0x328) = *(undefined4 *)(param_1 + 0x74);
  }
  else {
    *(undefined4 *)((int)this + 0x304) = 0;
    *(undefined4 *)((int)this + 0x308) = 0;
    *(undefined4 *)((int)this + 0x310) = 0;
    *(undefined4 *)((int)this + 0x314) = 0;
    *(undefined4 *)((int)this + 0x318) = 0;
    *(undefined4 *)((int)this + 0x31c) = 0;
    *(undefined4 *)((int)this + 800) = 0;
    *(undefined4 *)((int)this + 0x328) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)((int)this + 0x334) = 1;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    *(undefined4 *)((int)this + 0x32c) = 1;
    *(undefined4 *)((int)this + 0x2f8) = 0;
    *(undefined4 *)((int)this + 0x300) = 0;
    *(undefined4 *)((int)this + 0x31c) = 0;
    break;
  case 2:
    *(undefined4 *)((int)this + 0x330) = 1;
    *(undefined4 *)((int)this + 0x334) = 1;
    break;
  case 3:
    *(undefined4 *)((int)this + 0x338) = 1;
    *(undefined4 *)((int)this + 0x2fc) = 0;
    *(undefined4 *)((int)this + 0x308) = 0;
    *(undefined4 *)((int)this + 0x300) = 0;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x2f8) = 0;
    *(undefined4 *)((int)this + 0x2fc) = 0;
    *(undefined4 *)((int)this + 0x300) = 0;
    *(undefined4 *)((int)this + 0x31c) = 0;
    break;
  case 5:
    *(undefined4 *)((int)this + 0x2fc) = 0;
    *(undefined4 *)((int)this + 0x300) = 0;
  }
  *(uint *)((int)this + 0x440) = (uint)*(byte *)(param_1 + 0x90);
  if (*(int *)((int)this + 0x334) != 0) {
    *(uint *)((int)this + 0x448) = (uint)*(byte *)(param_1 + 0x93);
    return 0;
  }
  *(undefined4 *)((int)this + 0x448) = 0xffffffff;
  return 0;
}


