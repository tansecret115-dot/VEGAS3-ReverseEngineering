/* Module: sfpaplug.dll
   Function: FUN_0040ebb0
   Address: 0040ebb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040ebb0(void *this,uint param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar5 = CARRY4(*(uint *)((int)this + 0x28),param_1);
      param_1 = *(uint *)((int)this + 0x28) + param_1;
      param_2 = *(int *)((int)this + 0x2c) + param_2 + (uint)bVar5;
    }
    else {
      if (param_3 != 2) {
        return 0x80070057;
      }
      bVar5 = *(uint *)((int)this + 0x30) < param_1;
      param_1 = *(uint *)((int)this + 0x30) - param_1;
      param_2 = (*(int *)((int)this + 0x34) - param_2) - (uint)bVar5;
    }
  }
  if ((param_1 == *(uint *)((int)this + 0x28)) && (param_2 == *(int *)((int)this + 0x2c)))
  goto LAB_0040eca8;
  if (*(int *)((int)this + 0xdc) == 0) {
LAB_0040ec4b:
    psVar3 = *(short **)((int)this + 0x50);
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x2c) = param_2;
    if (psVar3 != (short *)0x0) {
      if (*psVar3 == 1) {
        lVar6 = __allmul((uint)(ushort)psVar3[6],0,param_1,param_2);
        *(longlong *)((int)this + 0x48) = lVar6;
      }
      else {
        FUN_0040e2e0(this,param_1,param_2);
      }
    }
  }
  else {
    uVar1 = *(uint *)((int)this + 0xe8);
    iVar2 = *(int *)((int)this + 0xec);
    iVar4 = iVar2 + (uint)CARRY4(*(uint *)((int)this + 0xe0),uVar1);
    if (((iVar4 < param_2) ||
        (((iVar4 <= param_2 && (*(uint *)((int)this + 0xe0) + uVar1 < param_1)) || (param_2 < iVar2)
         ))) || ((param_2 <= iVar2 && (param_1 < uVar1)))) goto LAB_0040ec4b;
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x2c) = param_2;
  }
  if (*(int *)((int)this + 0x50) != 0) {
    uVar7 = __alldiv(*(uint *)((int)this + 0x48),*(uint *)((int)this + 0x4c),
                     (uint)*(ushort *)(*(int *)((int)this + 0x50) + 0xc),0);
    *(int *)((int)this + 0xf0) = (int)uVar7;
  }
LAB_0040eca8:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)((int)this + 0x28);
    param_4[1] = *(undefined4 *)((int)this + 0x2c);
  }
  return 0;
}


