/* Module: mp3plug.dll
   Function: FUN_5f7158d0
   Address: 5f7158d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f715a0d) */

undefined4 __thiscall FUN_5f7158d0(void *this,uint param_1)

{
  *(uint *)((int)this + 4) = param_1 >> 0x15;
  *(uint *)((int)this + 0x10) = 4 - (param_1 >> 0x11 & 3);
  *(uint *)((int)this + 0x14) = (uint)((param_1 >> 0x10 & 1) == 0);
  *(uint *)((int)this + 0x18) = param_1 >> 0xc & 0xf;
  *(uint *)((int)this + 0x1c) = param_1 >> 10 & 3;
  *(uint *)((int)this + 0x20) = param_1 >> 9 & 1;
  *(uint *)((int)this + 0x24) = param_1 >> 8 & 1;
  *(uint *)((int)this + 0x38) = param_1 & 3;
  *(uint *)((int)this + 0x28) = param_1 >> 6 & 3;
  *(uint *)((int)this + 0x2c) = param_1 >> 4 & 3;
  *(uint *)((int)this + 0x30) = param_1 >> 3 & 1;
  *(uint *)((int)this + 0x34) = param_1 >> 2 & 1;
  *(uint *)((int)this + 8) = param_1 >> 0x14 & 1;
  *(uint *)((int)this + 0xc) = param_1 >> 0x13 & 1;
  if ((((param_1 >> 0x15 == 0x7ff) && (*(int *)((int)this + 0x10) == 3)) &&
      (*(int *)((int)this + 0x18) != 0xf)) &&
     (((*(int *)((int)this + 0x18) != 0 && (*(int *)((int)this + 0x1c) != 3)) &&
      ((*(int *)((int)this + 8) != 0 || (*(int *)((int)this + 0xc) != 1)))))) {
    *(undefined4 *)((int)this + 0x3c) = 1;
    FUN_5f715ae4((int)this);
  }
  else {
    *(undefined4 *)((int)this + 0x3c) = 0;
    FUN_5f715a94((int)this);
  }
  return *(undefined4 *)((int)this + 0x3c);
}


