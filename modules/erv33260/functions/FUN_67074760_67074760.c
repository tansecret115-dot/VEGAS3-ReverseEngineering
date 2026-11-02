/* Module: erv33260.dll
   Function: FUN_67074760
   Address: 67074760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67074760(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  uVar1 = param_1[7];
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
  *(uint *)((int)this + 0x20) = uVar1;
  uVar1 = param_1[8];
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
  *(uint *)((int)this + 0x24) = uVar1;
  uVar1 = param_1[9];
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
  *(uint *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x10) = param_1[3];
  uVar1 = param_1[4];
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = param_1[5];
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = param_1[6];
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
  *(uint *)((int)this + 0x1c) = uVar1;
  FUN_670745e0((int)this);
  return;
}


