/* Module: mp3plug.dll
   Function: FUN_5f7163a0
   Address: 5f7163a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f7163a0(void *this,void *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_5f71e000((void *)((int)this + 0xc),param_1);
  uVar2 = *(uint *)((int)this + 0x10) & 0xf;
  uVar3 = (int)*(uint *)((int)this + 0x10) >> 4 & 0xf;
  if (uVar3 != 0) {
    uVar1 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
    *(uint *)((int)this + 0x20) = uVar1;
    if (uVar1 == 1) {
      uVar3 = -uVar3;
    }
  }
  if (uVar2 != 0) {
    uVar1 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
    *(uint *)((int)this + 0x20) = uVar1;
    if (uVar1 == 1) {
      uVar2 = -uVar2;
    }
  }
  *param_2 = uVar3;
  param_2[1] = uVar2;
  return 1;
}


