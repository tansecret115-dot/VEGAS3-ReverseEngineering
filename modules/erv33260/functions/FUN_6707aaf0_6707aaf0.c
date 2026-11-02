/* Module: erv33260.dll
   Function: FUN_6707aaf0
   Address: 6707aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_6707aaf0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,
            undefined4 param_5,int param_6,int *param_7)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_6707d5b0(this,param_5,param_2);
  *(int *)((int)this + 0x24) = param_3;
  *(undefined ***)this = &PTR_FUN_67090480;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(int *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (param_6 == 0) {
    pvVar1 = (void *)FUN_67072130(8);
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_6707dc40(pvVar1,param_4 * param_3 + 1,param_7);
      goto LAB_6707aba3;
    }
  }
  else {
    pvVar1 = (void *)FUN_67072130(8);
    if (pvVar1 != (void *)0x0) {
      uVar5 = **(undefined4 **)(param_6 + 0x48);
      piVar2 = param_7;
      uVar3 = FUN_6707d660(param_6);
      piVar2 = (int *)FUN_6707dc80(pvVar1,uVar3,uVar5,piVar2);
      goto LAB_6707aba3;
    }
  }
  piVar2 = (int *)0x0;
LAB_6707aba3:
  *(int **)((int)this + 0x48) = piVar2;
  iVar4 = FUN_67072130(param_4 * param_3 * 8);
  *(int *)((int)this + 0x6c) = iVar4;
  if (iVar4 == 0) {
    *param_7 = 2;
  }
  return this;
}


