/* Module: mp3plug.dll
   Function: FUN_5f6e4df0
   Address: 5f6e4df0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f6e4df0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)((int)this + 0x4bc) = param_1;
  uVar1 = *(uint *)((int)this + 0x4c0) / *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 0x4c0) % *(uint *)((int)this + 4) == 0) {
    iVar2 = *(int *)this;
    *(int *)this = iVar2 + 1;
    *(uint *)((int)this + iVar2 * 4 + 8) = param_1;
    uVar1 = *(uint *)this;
    if (uVar1 == 200) {
      uVar1 = *(int *)((int)this + 4) * 2;
      *(uint *)((int)this + 4) = uVar1;
    }
    else if (uVar1 == 300) {
      iVar2 = -100;
      do {
        *(undefined4 *)((int)this + iVar2 * 4 + 0x198) =
             *(undefined4 *)((int)this + iVar2 * 8 + 0x328);
        *(undefined4 *)((int)this + iVar2 * 4 + 0x19c) =
             *(undefined4 *)((int)this + iVar2 * 8 + 0x330);
        iVar2 = iVar2 + 2;
      } while (iVar2 != 0);
      iVar2 = (int)this + 400;
      iVar3 = (((int)this + 800) - iVar2 & 0xfffffff8U) + iVar2;
      for (; iVar2 < iVar3; iVar2 = iVar2 + 8) {
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x19c);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0x198);
      }
      for (; iVar2 < (int)this + 800; iVar2 = iVar2 + 4) {
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0x198);
      }
      *(undefined4 *)this = 200;
      uVar1 = *(int *)((int)this + 4) * 2;
      *(uint *)((int)this + 4) = uVar1;
    }
  }
  *(int *)((int)this + 0x4c0) = *(int *)((int)this + 0x4c0) + 1;
  return uVar1;
}


