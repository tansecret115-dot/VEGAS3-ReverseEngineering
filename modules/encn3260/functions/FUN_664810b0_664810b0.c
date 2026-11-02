/* Module: encn3260.dll
   Function: FUN_664810b0
   Address: 664810b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664810b0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *this_00;
  void *pvVar3;
  int *piVar4;
  ushort uVar5;
  int *local_8;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_FUN_664dc3b8;
  local_8 = this;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  puVar1 = *(undefined4 **)((int)this + 0xc);
  param_1 = (int *)0x0;
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_664dc6c0,&param_1), iVar2 != 0)) {
    pvVar3 = operator_new(0x5c);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_66496750(pvVar3,this);
    }
    *(int **)((int)this + 4) = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
    FUN_66496ff0(*(void **)((int)this + 4));
  }
  else if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (int *)0x0;
  }
  puVar1 = *(undefined4 **)((int)this + 0xc);
  local_8 = (int *)0x0;
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_664dd880,&local_8), iVar2 == 0)) {
    if (local_8 == (int *)0x0) {
      return this;
    }
    (**(code **)(*local_8 + 8))(local_8);
    return this;
  }
  uVar5 = 1;
  this_00 = FUN_66481080();
  iVar2 = FUN_664cbdc0(this_00,uVar5);
  if (iVar2 != 0) {
    pvVar3 = operator_new(0x5c);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_664cc050(pvVar3,(char *)0x0);
    }
    *(int **)((int)this + 0x1c) = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
    iVar2 = FUN_664ccc20(*(void **)((int)this + 0x1c),this);
    if (iVar2 == 0) {
      FUN_664ccca0(*(void **)((int)this + 0x1c));
    }
  }
  return this;
}


