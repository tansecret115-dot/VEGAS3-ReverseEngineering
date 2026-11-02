/* Module: encn3260.dll
   Function: FUN_664a3420
   Address: 664a3420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664a3420(void *this,int *param_1,HANDLE param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_14 = 0x80004005;
  iVar2 = FUN_664a3360((char *)param_1,&local_10,&local_c,&local_8);
  if ((iVar2 == 0) && (*(int *)((int)this + 0x10d) != 0)) {
    iVar2 = GetSystemMetrics(0);
    iVar3 = GetSystemMetrics(1);
    this_00 = operator_new(0x11d);
    if (this_00 == (void *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = FUN_6649eeb0(this_00,*(int **)((int)this + 0x28),0);
    }
    piVar1 = param_1 + 1;
    (**(code **)(param_1[1] + 4))(piVar1);
    piVar6 = param_1 + 2;
    (**(code **)(param_1[2] + 0x14))(piVar6,0,0x86000000);
    (**(code **)(*piVar1 + 0x28))(piVar1,0,0);
    (**(code **)(*piVar1 + 0x30))(piVar1,iVar2,iVar3);
    (**(code **)(param_1[5] + 0x10))(param_1 + 5,1);
    if (*(int **)((int)this + 0x10d) != (int *)0x0) {
      iVar2 = **(int **)((int)this + 0x10d);
      puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))(piVar6,0x11);
      (**(code **)(iVar2 + 0x50))(*(undefined4 *)((int)this + 0x10d),*puVar4);
    }
    iVar2 = GetSystemMetrics(0);
    iVar3 = GetSystemMetrics(1);
    (**(code **)(*piVar1 + 0x30))(piVar1,iVar2,iVar3);
    iVar2 = (**(code **)(**(int **)((int)this + 0x10d) + 0x54))
                      (*(int **)((int)this + 0x10d),local_10,local_c,local_8);
    if (iVar2 == 0) {
      uVar5 = FUN_664a39e0(this,(int)param_1,param_2);
      if (uVar5 != 0) {
        FUN_664a35f0(this,local_10,local_c,local_8,uVar5,(uint)(0x1e < (int)uVar5),1);
      }
      local_14 = 0;
    }
    if (*(int **)((int)this + 0x10d) != (int *)0x0) {
      iVar2 = **(int **)((int)this + 0x10d);
      puVar4 = (undefined4 *)(**(code **)(param_1[2] + 0x1c))(param_1 + 2,8);
      (**(code **)(iVar2 + 0x50))(*(undefined4 *)((int)this + 0x10d),*puVar4);
      (**(code **)(**(int **)((int)this + 0x10d) + 0x4c))(*(int **)((int)this + 0x10d));
    }
    (**(code **)(param_1[2] + 0x18))(param_1 + 2);
    if (param_1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return local_14;
}


