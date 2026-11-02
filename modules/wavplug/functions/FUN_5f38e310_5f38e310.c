/* Module: wavplug.dll
   Function: FUN_5f38e310
   Address: 5f38e310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f38e310(void *this,uint param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar2 = CARRY4(*(uint *)((int)this + 8),param_1);
      param_1 = *(uint *)((int)this + 8) + param_1;
      param_2 = *(int *)((int)this + 0xc) + param_2 + (uint)bVar2;
    }
    else {
      if (param_3 != 2) {
        return 0x80070057;
      }
      bVar2 = *(uint *)((int)this + 0x10) < param_1;
      param_1 = *(uint *)((int)this + 0x10) - param_1;
      param_2 = (*(int *)((int)this + 0x14) - param_2) - (uint)bVar2;
    }
  }
  if ((param_1 != *(uint *)((int)this + 8)) || (param_2 != *(int *)((int)this + 0xc))) {
    *(uint *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = param_2;
    if (*(int *)((int)this + 0xd0) != 0) {
      iVar1 = FUN_5f38dcc0((int)this);
      if (iVar1 == 0) {
        lVar3 = __allmul((uint)*(ushort *)(*(int *)((int)this + 0xd0) + 0xc),0,
                         *(uint *)((int)this + 8),*(int *)((int)this + 0xc));
        *(longlong *)((int)this + 0x28) = lVar3;
      }
      else {
        FUN_5f3959c0(this,param_1,param_2);
      }
    }
    if (*(int *)((int)this + 0xd0) != 0) {
      uVar4 = __alldiv(*(uint *)((int)this + 0x28),*(uint *)((int)this + 0x2c),
                       (uint)*(ushort *)(*(int *)((int)this + 0xd0) + 0xc),0);
      *(int *)((int)this + 0x100) = (int)uVar4;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)((int)this + 8);
    param_4[1] = *(undefined4 *)((int)this + 0xc);
  }
  return 0;
}


