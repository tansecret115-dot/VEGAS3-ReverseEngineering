/* Module: encn3260.dll
   Function: FUN_664c87b0
   Address: 664c87b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_664c87b0(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3,uint param_4,
            int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 local_14;
  void *local_10;
  int *local_c;
  undefined4 local_8;
  
  iVar4 = 0;
  *(int *)((int)this + 0x94) = param_5;
  if (*(int *)((int)this + 0x2e) == 0) {
    puVar1 = FUN_664cb220(param_5,1);
    *(undefined4 **)((int)this + 0x2e) = puVar1;
  }
  pvVar3 = *(void **)((int)this + 0x2e);
  if (pvVar3 == (void *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)pvVar3 + 4);
    FUN_664cb670(pvVar3,this);
  }
  if (*(undefined4 **)((int)this + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0xc0))(1);
    *(undefined4 *)((int)this + 0xc0) = 0;
  }
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_664ba900(puVar1);
  }
  *(undefined4 *)((int)this + 0xc0) = uVar2;
  if (iVar4 == 0) {
    pvVar3 = operator_new(0x2e);
    if (pvVar3 == (void *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c = FUN_664c9e00(pvVar3,this,9);
    }
    *(undefined4 *)((int)local_c + 0x1a) = param_1;
    *(undefined2 *)((int)local_c + 0x1e) = param_2;
    *(undefined2 *)(local_c + 10) = param_3;
    *(uint *)((int)local_c + 0x16) = param_4 & 0xffff;
    local_c[8] = param_5;
    (**(code **)(*local_c + 4))(local_c);
    local_14 = 0x464;
    local_8 = 0;
    local_10 = this;
    iVar4 = (**(code **)(**(int **)((int)this + 0x3c) + 0x24))(&local_14,0);
    if (-1 < iVar4) {
      (**(code **)(**(int **)((int)this + 0x54) + 0x10))(0xffffffff);
      iVar4 = (-(uint)(*(int *)((int)this + 0xbc) != 0) & 0x7fffbffb) + 0x80004005;
    }
  }
  return iVar4;
}


