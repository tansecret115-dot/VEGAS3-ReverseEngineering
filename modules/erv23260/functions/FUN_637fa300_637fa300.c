/* Module: erv23260.dll
   Function: FUN_637fa300
   Address: 637fa300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_637fa300(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,
            undefined4 param_5,int param_6,int *param_7)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_637fd1c0(this,param_5,param_2);
  FUN_637ff920((undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = &PTR_LAB_638293ec;
  *(int *)((int)this + 0x6c) = param_3;
  *(undefined ***)this = &PTR_FUN_638293e0;
  *(undefined4 *)((int)this + 0x5c) = param_1;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(int *)((int)this + 0x70) = param_4;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  if (param_6 == 0) {
    pvVar1 = (void *)FUN_637f2000(8);
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_637ff820(pvVar1,param_4 * param_3 + 1,param_7);
      goto LAB_637fa3ea;
    }
  }
  else {
    pvVar1 = (void *)FUN_637f2000(8);
    if (pvVar1 != (void *)0x0) {
      uVar5 = **(undefined4 **)(param_6 + 0x94);
      piVar2 = param_7;
      uVar3 = FUN_637fd270(param_6);
      piVar2 = (int *)FUN_637ff860(pvVar1,uVar3,uVar5,piVar2);
      goto LAB_637fa3ea;
    }
  }
  piVar2 = (int *)0x0;
LAB_637fa3ea:
  *(int **)((int)this + 0x94) = piVar2;
  iVar4 = FUN_637f2000(param_4 * param_3 * 8);
  *(int *)((int)this + 0xb8) = iVar4;
  if (iVar4 == 0) {
    *param_7 = 2;
  }
  return this;
}


