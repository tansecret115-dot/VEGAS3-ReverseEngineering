/* Module: erv23260.dll
   Function: FUN_637fa190
   Address: 637fa190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_637fa190(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,int *param_8)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_637fd1c0(this,param_6,param_3);
  iVar4 = param_5 * param_4;
  FUN_637ff990((undefined4 *)((int)this + 0x18),param_3,iVar4,param_2,param_8);
  *(undefined4 *)((int)this + 0x18) = &PTR_LAB_638293ec;
  *(undefined4 *)((int)this + 0x5c) = param_1;
  *(undefined ***)this = &PTR_FUN_638293e0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x60) = 1;
  *(int *)((int)this + 0x6c) = param_4;
  *(int *)((int)this + 0x70) = param_5;
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
  if (*param_8 != 0) {
    return this;
  }
  if (param_7 == 0) {
    pvVar1 = (void *)FUN_637f2000(8);
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_637ff820(pvVar1,iVar4 + 1,param_8);
      goto LAB_637fa299;
    }
  }
  else {
    pvVar1 = (void *)FUN_637f2000(8);
    if (pvVar1 != (void *)0x0) {
      uVar5 = **(undefined4 **)(param_7 + 0x94);
      piVar2 = param_8;
      uVar3 = FUN_637fd270(param_7);
      piVar2 = (int *)FUN_637ff860(pvVar1,uVar3,uVar5,piVar2);
      goto LAB_637fa299;
    }
  }
  piVar2 = (int *)0x0;
LAB_637fa299:
  *(int **)((int)this + 0x94) = piVar2;
  iVar4 = FUN_637f2000(iVar4 * 8);
  *(int *)((int)this + 0xb8) = iVar4;
  if (iVar4 == 0) {
    *param_8 = 2;
  }
  return this;
}


