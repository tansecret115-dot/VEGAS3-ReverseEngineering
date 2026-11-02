/* Module: rmbe3260.dll
   Function: FUN_6601ce80
   Address: 6601ce80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6601ce80(void *this,int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int local_88 [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  code *local_64;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c [3];
  int local_40 [3];
  int local_34 [3];
  int local_28 [3];
  int local_1c [3];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == (int *)0x0) {
    FUN_6605b770(&param_2);
    return -0x7fffbffd;
  }
  if (*(int *)((int)this + 0x74) == 0) {
    FUN_6605b770(&param_2);
    return -0x7ffbfff9;
  }
  if (*(int *)(param_2 + -8) == 0) {
    FUN_6605b770(&param_2);
    return -0x7ff8ffa9;
  }
  FUN_6605b650(local_40);
  FUN_6605b650(local_28);
  FUN_6605b650(local_4c);
  FUN_6605b650(local_1c);
  FUN_6605b650(local_34);
  pcVar1 = (char *)FUN_6605bc10(local_34,0x101);
  (**(code **)(**(int **)((int)this + 0x78) + 0x2c))(*(int **)((int)this + 0x78),pcVar1,0x100);
  FUN_6605b970(local_40,pcVar1);
  (**(code **)(**(int **)((int)this + 0x78) + 0x34))(*(int **)((int)this + 0x78),pcVar1,0x100);
  FUN_6605b970(local_28,pcVar1);
  (**(code **)(**(int **)((int)this + 0x78) + 0x3c))(*(int **)((int)this + 0x78),pcVar1,0x100);
  FUN_6605b970(local_4c,pcVar1);
  (**(code **)(**(int **)((int)this + 0x78) + 0x44))(*(int **)((int)this + 0x78),pcVar1,0xff);
  FUN_6605b970(local_1c,pcVar1);
  (**(code **)(**(int **)((int)this + 0x78) + 0x4c))(*(int **)((int)this + 0x78),&local_8);
  (**(code **)(**(int **)((int)this + 0x78) + 0x54))(*(int **)((int)this + 0x78),&local_10);
  (**(code **)(**(int **)((int)this + 0x78) + 0x5c))(*(int **)((int)this + 0x78),&local_c);
  piVar3 = local_88;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_88[0] = 0x3c;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = local_40[0];
  local_78 = local_28[0];
  local_74 = local_4c[0];
  local_70 = local_1c[0];
  local_5c = local_c;
  local_50 = *(undefined4 *)((int)this + 0x1f6);
  local_54 = local_10;
  local_58 = local_8;
  if (*(int *)((int)this + 0xc4) != 0) {
    local_6c = param_2;
  }
  if (*(int *)((int)this + 200) == 0) {
    local_64 = (code *)0x0;
    local_60 = (void *)0x0;
  }
  else {
    local_64 = FUN_6601f2a0;
    local_60 = this;
  }
  if (*param_1 != 0) {
    FUN_6601d0f0(param_1);
  }
  iVar2 = FUN_6603bee0(param_1,(int)local_88);
  if ((iVar2 == 0) || (*param_1 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_660157a0(iVar2);
  }
  if (-1 < iVar2) {
    if (*(int *)((int)this + 0x1c2) != 0) {
      iVar2 = FUN_6603c0d0((void *)*param_1,*(int *)((int)this + 0x1c2));
      iVar2 = FUN_660157a0(iVar2);
    }
    if (-1 < iVar2) {
      iVar2 = FUN_6603c110((void *)*param_1,*(int **)((int)this + 0x1d6));
      iVar2 = FUN_660157a0(iVar2);
    }
  }
  FUN_6605bc90(local_34,-1);
  FUN_6605b770(local_34);
  FUN_6605b770(local_1c);
  FUN_6605b770(local_4c);
  FUN_6605b770(local_28);
  FUN_6605b770(local_40);
  FUN_6605b770(&param_2);
  return iVar2;
}


