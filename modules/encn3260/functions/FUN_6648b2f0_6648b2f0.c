/* Module: encn3260.dll
   Function: FUN_6648b2f0
   Address: 6648b2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6648b2f0(void *this,int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int *param_6)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 uVar3;
  undefined2 extraout_var_00;
  int *local_c;
  int *local_8;
  
  *(int **)((int)this + 0x24) = param_5;
  FUN_6648bbf0(this,param_2);
  *(int **)((int)this + 0x20) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  param_5 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_664dcb00,&local_c);
  if (iVar2 != 0) {
    iVar2 = -0x7ff8ffa9;
    goto LAB_6648b44d;
  }
  iVar2 = (**(code **)*param_1)(param_1,&DAT_664dc710,(undefined4 *)((int)this + 0x38));
  if (iVar2 != 0) {
    iVar2 = -0x7ff8fff2;
    goto LAB_6648b44d;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    piVar1 = *(int **)((int)this + 0x38);
    (**(code **)(*piVar1 + 0xc))(piVar1,&param_5);
  }
  else {
    *(undefined2 *)((int)this + 0x68) = param_6._0_2_;
    iVar2 = (**(code **)*param_1)(param_1,&DAT_664dd900,&local_8);
    if (iVar2 != 0) {
      iVar2 = -0x7ff8fff2;
      goto LAB_6648b44d;
    }
    (**(code **)(*local_8 + 0xc))(local_8,&param_5);
    if (param_5 == (int *)0x0) {
      iVar2 = -0x7ff8fff2;
      goto LAB_6648b44d;
    }
    uVar3 = 0;
    if (*(int *)(param_2 + 0x15e) != 0) {
      param_6 = (int *)0x0;
      iVar2 = (**(code **)*param_5)(param_5,&DAT_664dd910,&param_6);
      if (iVar2 == 0) {
        uVar3 = 0;
        if (param_6 == (int *)0x0) goto LAB_6648b3fe;
        (**(code **)(*param_6 + 0xc))
                  (param_6,*(undefined4 *)(param_2 + 0xd8),
                   CONCAT22(extraout_var_00,*(undefined2 *)(param_2 + 0xe4)));
      }
      uVar3 = 0;
      if (param_6 != (int *)0x0) {
        (**(code **)(*param_6 + 8))(param_6);
        uVar3 = extraout_var;
      }
    }
LAB_6648b3fe:
    param_3 = *(undefined4 *)(param_2 + 0xcc);
    if (*(short *)((int)this + 0x68) != 0) {
      param_4 = CONCAT22(uVar3,*(short *)((int)this + 0x68));
    }
  }
  iVar2 = (**(code **)(*param_5 + 0xc))(param_5,this);
  if (iVar2 == 0) {
    *(int **)((int)this + 0x3c) = param_5;
    *(int *)((int)this + 0x6a) = param_2;
    iVar2 = (**(code **)(*param_5 + 0x18))(param_5,param_3,param_4);
  }
LAB_6648b44d:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return iVar2;
}


