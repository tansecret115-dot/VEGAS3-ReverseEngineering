/* Module: rmto3260.dll
   Function: FUN_662f8680
   Address: 662f8680
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662f8680(void *this,int *param_1,int *param_2,uint *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_662f7e40(this,param_2,param_3,param_5);
  if (iVar1 == 0) {
    iVar2 = *(int *)((int)this + 0x2a);
    if (*(int *)((int)this + 0x1c) == 0) {
      *(int *)((int)this + 0x4bd) = iVar2;
      *(int *)((int)this + 0x4b9) = iVar2;
    }
    else {
      iVar2 = FUN_662fcf90(*(int *)((int)this + 0x10),*(int *)((int)this + 0x16),iVar2);
      *(int *)((int)this + 0x4bd) = iVar2;
      iVar2 = FUN_662fd010(*(int *)((int)this + 0x10),(uint)*(ushort *)((int)this + 0x14),
                           *(int *)((int)this + 0x16),(uint)*(ushort *)((int)this + 0x1a),iVar2,
                           (int *)((int)this + 0x4c1));
      iVar3 = FUN_662fda20(*(int *)((int)this + 0x2a),*(int *)((int)this + 0x4c1));
      *(int *)((int)this + 0x4b9) = iVar3;
      pvVar4 = operator_new(iVar2 * (uint)*(ushort *)((int)this + 0x1a) * 2);
      *(void **)((int)this + 0x4c5) = pvVar4;
    }
    param_3 = (uint *)0x1;
    param_5 = (int *)((uint)param_5 & 0xffffff);
    *(uint *)((int)this + 0x4b5) =
         *(int *)((int)this + 0x4b9) * (uint)*(ushort *)((int)this + 0x14) * 2;
    *param_1 = *(int *)((int)this + 0x4bd) * (uint)*(ushort *)((int)this + 0x14) * 2;
    FUN_662f8650(this,&param_3,&local_8,(int)&param_5 + 3);
    if (*(int *)((int)this + 0x34) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = (uint)param_3 & 0xffff;
    }
    *(uint *)((int)this + 0x4ed) = uVar6;
    uVar5 = ((uint)local_8 & 0xffff) / *(uint *)((int)this + 0x2e);
    *(uint *)((int)this + 0x4f5) = uVar5;
    if (uVar5 == 0) {
      *(undefined4 *)((int)this + 0x4f5) = 1;
    }
    iVar2 = *(int *)((int)this + 0x4f5) * uVar6;
    *(int *)((int)this + 0x4f9) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x4f9) = 1;
    }
    *param_4 = *(int *)((int)this + 0x4f5);
  }
  return iVar1;
}


