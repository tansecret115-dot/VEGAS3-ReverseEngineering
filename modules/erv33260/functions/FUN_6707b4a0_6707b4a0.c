/* Module: erv33260.dll
   Function: FUN_6707b4a0
   Address: 6707b4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_6707b4a0(void *this,int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)((int)this + 0x18) = param_4;
  uVar4 = param_2 + 0xf & 0xfffffff0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(uint *)((int)this + 0x1c) = (param_3 + 0xfU & 0xfffffff0) + 0xf >> 4;
  *(uint *)((int)this + 0x20) = uVar4 + 0xf >> 4;
  *param_5 = 0;
  puVar1 = FUN_67071030(*(int *)((int)this + 0x1c) * *(int *)((int)this + 0x20),1);
  *(undefined4 **)((int)this + 0x24) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_5 = 2;
    return this;
  }
  if (param_2 < 0xe1) {
    iVar5 = *(int *)((int)this + 0x20) * 0x10 + 0x1828;
    *(undefined4 *)((int)this + 0x10) = 0x180;
    iVar3 = 0x3010;
    iVar2 = (*(int *)((int)this + 0x1c) + 4) * 0x10;
    param_2 = (*(int *)((int)this + 0x1c) + 2) * 0xc00 + iVar5;
  }
  else {
    iVar5 = CONCAT31((int3)(uVar4 + 0x9f >> 8),0x80);
    *(int *)((int)this + 0x10) = iVar5;
    iVar2 = (*(int *)((int)this + 0x1c) + 3) * 0x18;
    iVar3 = iVar5 * 0x20 + 0x10;
    iVar5 = ((*(int *)((int)this + 0x1c) + 1) * 0x10 + 8) * iVar5 + 8 + iVar3;
    param_2 = iVar5 + 0x10 + *(int *)((int)this + 0x20) * 8;
  }
  puVar1 = FUN_67071030(iVar2 * *(int *)((int)this + 0x10) + 0xfff + param_1,1);
  *(undefined4 **)this = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_5 = 2;
    return this;
  }
  iVar2 = ((int)puVar1 + 0xfffU & 0xfffff000) + param_1;
  *(int *)((int)this + 4) = iVar2 + iVar3;
  *(int *)((int)this + 8) = iVar2 + iVar5;
  *(uint *)((int)this + 0xc) = iVar2 + param_2;
  return this;
}


