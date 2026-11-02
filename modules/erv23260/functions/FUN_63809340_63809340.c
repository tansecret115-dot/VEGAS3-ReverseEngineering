/* Module: erv23260.dll
   Function: FUN_63809340
   Address: 63809340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_63809340(void *this,int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = param_2 + 0xf & 0xfffffff0;
  uVar4 = uVar3 + 0xf >> 4;
  uVar6 = (param_3 + 0xfU & 0xfffffff0) + 0xf >> 4;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *param_5 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  puVar1 = FUN_637f1030(uVar4 * uVar6,1);
  *(undefined4 **)((int)this + 0x1c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_5 = 2;
    return this;
  }
  if (param_2 < 0xe1) {
    iVar5 = uVar4 * 0x10 + 0x1828;
    iVar2 = (uVar6 + 4) * 0x10;
    *(undefined4 *)((int)this + 0x10) = 0x180;
    param_2 = 0x3010;
    iVar7 = (uVar6 + 2) * 0xc00 + iVar5;
  }
  else {
    iVar5 = CONCAT31((int3)(uVar3 + 0x9f >> 8),0x80);
    *(int *)((int)this + 0x10) = iVar5;
    iVar2 = (uVar6 + 3) * 0x18;
    param_2 = iVar5 * 0x20 + 0x10;
    iVar5 = ((uVar6 + 1) * 0x10 + 8) * iVar5 + 8 + param_2;
    iVar7 = iVar5 + 0x10 + uVar4 * 8;
  }
  puVar1 = FUN_637f1030(iVar2 * *(int *)((int)this + 0x10) + 0xfff + param_1,1);
  *(undefined4 **)this = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_5 = 2;
    return this;
  }
  iVar2 = ((int)puVar1 + 0xfffU & 0xfffff000) + param_1;
  *(uint *)((int)this + 4) = iVar2 + param_2;
  *(int *)((int)this + 0xc) = iVar2 + iVar7;
  *(int *)((int)this + 8) = iVar2 + iVar5;
  return this;
}


