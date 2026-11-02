/* Module: erv23260.dll
   Function: FUN_637f4300
   Address: 637f4300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f4300(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = param_2 + 0xfU & 0xfffffff0;
  uVar8 = param_1 + 0xfU & 0xfffffff0;
  uVar3 = uVar5 * uVar8 >> 8;
  if ((*(int *)((int)this + 8) == 0x15) || (*(int *)((int)this + 8) == 0x16)) {
    iVar7 = uVar3 * 0x18;
    iVar6 = (uVar5 >> 1) * (uVar8 >> 1) * 0x18;
  }
  else {
    iVar6 = (uVar5 >> 1) * (uVar8 >> 1) * 0x30;
    iVar7 = uVar3 * 0x30;
  }
  uVar3 = iVar7 + 0x120 + uVar8 * 8 + iVar6 + 8 + (param_1 + 0xfU >> 4) * 0x40;
  if ((*(uint *)((int)this + 0x370) != uVar8) || (*(uint *)((int)this + 0x374) != uVar5)) {
    *(uint *)((int)this + 0x374) = uVar5;
    *(uint *)((int)this + 0x370) = uVar8;
    if (*(uint *)((int)this + 0x36c) < uVar3) {
      if (*(void **)((int)this + 0x364) != (void *)0x0) {
        FUN_637f1080(*(void **)((int)this + 0x364));
        *(undefined4 *)((int)this + 0x368) = 0;
        *(undefined4 *)((int)this + 0x364) = 0;
      }
      puVar4 = FUN_637f1030(uVar3,0);
      *(undefined4 **)((int)this + 0x364) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        return 2;
      }
      *(uint *)((int)this + 0x368) = (int)puVar4 + 0x1fU & 0xffffffe0;
      *(uint *)((int)this + 0x36c) = uVar3;
    }
    iVar2 = *(int *)((int)this + 0x368);
    iVar1 = uVar8 * 8 + 0x100;
    *(int *)((int)this + 0x378) = iVar2;
    iVar6 = iVar1 + iVar6 + 8;
    *(int *)((int)this + 0x37c) = iVar1 + iVar2;
    *(int *)((int)this + 0x380) = iVar6 + iVar2;
    *(int *)((int)this + 900) = iVar7 + iVar6 + iVar2;
  }
  return 0;
}


