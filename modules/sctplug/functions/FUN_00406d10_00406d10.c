/* Module: sctplug.dll
   Function: FUN_00406d10
   Address: 00406d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00406d10(void *this,uint param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar4 = CARRY4(*(uint *)((int)this + 0x28),param_1);
      param_1 = *(uint *)((int)this + 0x28) + param_1;
      param_2 = *(int *)((int)this + 0x2c) + param_2 + (uint)bVar4;
    }
    else {
      if (param_3 != 2) {
        return 0x80070057;
      }
      bVar4 = *(uint *)((int)this + 0x30) < param_1;
      param_1 = *(uint *)((int)this + 0x30) - param_1;
      param_2 = (*(int *)((int)this + 0x34) - param_2) - (uint)bVar4;
    }
  }
  if ((param_1 == *(uint *)((int)this + 0x28)) && (param_2 == *(int *)((int)this + 0x2c)))
  goto LAB_00406e16;
  if (*(int *)((int)this + 0xdc) == 0) {
LAB_00406dac:
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x2c) = param_2;
    if (*(int *)((int)this + 0x50) != 0) {
      iVar3 = FUN_00405be0((int)this);
      if (iVar3 == 0) {
        lVar5 = __allmul((uint)*(ushort *)(*(int *)((int)this + 0x50) + 0xc),0,
                         *(uint *)((int)this + 0x28),*(int *)((int)this + 0x2c));
        *(longlong *)((int)this + 0x48) = lVar5;
      }
      else {
        FUN_00406530(this,param_1,param_2);
      }
    }
  }
  else {
    uVar1 = *(uint *)((int)this + 0xe8);
    iVar3 = *(int *)((int)this + 0xec);
    iVar2 = iVar3 + (uint)CARRY4(*(uint *)((int)this + 0xe0),uVar1);
    if (((iVar2 < param_2) ||
        (((iVar2 <= param_2 && (*(uint *)((int)this + 0xe0) + uVar1 < param_1)) || (param_2 < iVar3)
         ))) || ((param_2 <= iVar3 && (param_1 < uVar1)))) goto LAB_00406dac;
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x2c) = param_2;
  }
  if (*(int *)((int)this + 0x50) != 0) {
    uVar6 = __alldiv(*(uint *)((int)this + 0x48),*(uint *)((int)this + 0x4c),
                     (uint)*(ushort *)(*(int *)((int)this + 0x50) + 0xc),0);
    *(int *)((int)this + 0xf0) = (int)uVar6;
  }
LAB_00406e16:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)((int)this + 0x28);
    param_4[1] = *(undefined4 *)((int)this + 0x2c);
  }
  return 0;
}


