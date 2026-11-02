/* Module: rmme3260.dll
   Function: FUN_6620da60
   Address: 6620da60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620da60(void *this,int *param_1)

{
  void *this_00;
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  undefined4 local_20;
  uint local_1c;
  short local_18;
  uint local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = 0;
  FUN_66208c30(&local_20);
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  bVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  local_20 = (**(code **)(*param_1 + 0x14))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  local_1c = CONCAT22(local_1c._2_2_,uVar2);
  local_c = (int *)(**(code **)(*param_1 + 0x10))(param_1);
  this_00 = *(void **)(*(int *)((int)this + 0xac) + (local_1c & 0xffff) * 4);
  local_14 = bVar1 & 1;
  FUN_6620e440(this_00,local_14,uVar3);
  sVar5 = (short)uVar3;
  if (*(int *)(*(int *)((int)this + 0x14) + (local_1c & 0xffff) * 4) == 0) {
    local_18 = (-(ushort)(sVar5 != 0) & 0xfffe) + 2;
  }
  else if ((sVar5 == 0) || (sVar5 == 2)) {
    local_18 = 2;
  }
  else {
    local_18 = 0;
  }
  if (local_c == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = (**(code **)(*local_c + 0x1c))(local_c);
  }
  if (local_c == (int *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)(**(code **)(*local_c + 0x18))(local_c);
  }
  iVar4 = FUN_6620e400(this_00,uVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_6620e390(this_00,local_14,uVar3);
    if (iVar4 == 0) goto LAB_6620db74;
    FUN_6620e420(this_00,uVar3,1);
  }
  local_10 = (**(code **)(*(int *)this + 0x2c))(&local_20,local_8,param_1);
LAB_6620db74:
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return local_10;
}


