/* Module: encn3260.dll
   Function: FUN_664d9d70
   Address: 664d9d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d9d70(void *this,undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_2 = param_1;
  iVar1 = *(int *)((int)this + 2) + (uint)*(ushort *)this;
  *(int *)((int)param_2 + 9) = iVar1;
  iVar2 = (iVar1 - *(int *)((int)this + 6)) + 1;
  *(int *)((int)param_2 + 5) = iVar2 - *(int *)((int)this + 0xe);
  iVar1 = *(int *)((int)this + 0x12);
  *(int *)((int)this + 0x12) = iVar2;
  uVar3 = iVar2 - iVar1;
  iVar1 = *(int *)((int)this + 0x16);
  *(int *)((int)this + 0x16) = *(int *)((int)this + 0xe);
  iVar1 = (uVar3 + iVar1) - *(int *)((int)this + 0xe);
  if ((uVar3 == 0) || (iVar1 < 1)) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    *(char *)(param_2 + 1) = (char)((uint)(iVar1 * 0x100) / uVar3);
  }
  *(uint *)((int)param_2 + 0xd) = *(uint *)((int)this + 0x26) >> 4;
  *(undefined4 *)((int)param_2 + 0x11) = *(undefined4 *)((int)this + 0x1a);
  uVar3 = *(uint *)((int)this + 0x1e);
  if (uVar3 != 0) {
    if (uVar3 <= param_3) {
      *(uint *)((int)param_2 + 0x15) = (param_3 - uVar3) * 0x42;
      return;
    }
    *(uint *)((int)param_2 + 0x15) = ((param_3 - uVar3) + -1) * 0x42;
    return;
  }
  *(undefined4 *)((int)param_2 + 0x15) = 0;
  return;
}


