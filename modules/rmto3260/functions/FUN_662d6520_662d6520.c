/* Module: rmto3260.dll
   Function: FUN_662d6520
   Address: 662d6520
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d6520(void *this,int *param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar4;
  char *pcVar5;
  char local_88 [64];
  char local_48 [64];
  int local_8;
  
  piVar1 = param_1;
  uVar2 = *param_3;
  param_3 = (uint *)((int)param_3 + 2);
  FUN_662f2bd0((void *)CONCAT22((short)((uint)this >> 0x10),(ushort)uVar2),(ushort)uVar2);
  uVar2 = *param_3;
  param_3 = (uint *)((int)param_3 + 2);
  local_8 = FUN_662f2bd0((void *)CONCAT22(extraout_var,(ushort)uVar2),(ushort)uVar2);
  uVar2 = *param_3;
  param_3 = param_3 + 1;
  uVar2 = FUN_662f2c20(uVar2);
  FUN_662d6460(uVar2,local_48);
  uVar2 = *param_3;
  param_3 = param_3 + 1;
  uVar2 = FUN_662f2c20(uVar2);
  FUN_662d6460(uVar2,local_88);
  uVar2 = *param_3;
  param_3 = (uint *)((int)param_3 + 2);
  FUN_662f2bd0((void *)CONCAT22(extraout_var_00,(ushort)uVar2),(ushort)uVar2);
  uVar2 = *param_3;
  param_3 = (uint *)((int)param_3 + 2);
  FUN_662f2bd0((void *)CONCAT22(extraout_var_01,(ushort)uVar2),(ushort)uVar2);
  uVar2 = *param_3;
  param_3 = (uint *)((int)param_3 + 2);
  FUN_662f2bd0((void *)CONCAT22(extraout_var_02,(ushort)uVar2),(ushort)uVar2);
  uVar2 = *param_3;
  param_3 = (uint *)((int)param_3 + 2);
  FUN_662f2bd0((void *)CONCAT22(extraout_var_03,(ushort)uVar2),(ushort)uVar2);
  iVar3 = FUN_662f0810((int *)param_1[1],s_<MAP_START__s_END__s_COORDS__hu,_6630ad04);
  param_1 = (int *)0x0;
  if ((ushort)local_8 != 0) {
    do {
      if (iVar3 < 0) {
        return iVar3;
      }
      FUN_662f0810((int *)piVar1[1],s_<AREA_6630acfc);
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      uVar2 = FUN_662f2c20(uVar2);
      if (uVar2 == 0xffffffff) {
        uVar2 = 0;
      }
      if (uVar2 != 0) {
        FUN_662d6460(uVar2,local_48);
        iVar3 = FUN_662f0810((int *)piVar1[1],s_START__s_6630acf0);
      }
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      uVar2 = FUN_662f2c20(uVar2);
      if (uVar2 == 0xffffffff) {
        uVar2 = 0;
      }
      uVar4 = extraout_var_04;
      if (uVar2 != 0) {
        FUN_662d6460(uVar2,local_88);
        FUN_662f0810((int *)piVar1[1],s_END__s_6630ace8);
        uVar4 = extraout_var_05;
      }
      uVar2 = *param_3;
      param_3 = (uint *)((int)param_3 + 2);
      uVar2 = FUN_662f2bd0((void *)CONCAT22(uVar4,(ushort)uVar2),(ushort)uVar2);
      FUN_662f0810((int *)piVar1[1],s_SHAPE__6630ace0);
      uVar2 = uVar2 & 0xffff;
      if (uVar2 == 1) {
        pcVar5 = s_RECTANGLE_6630acc0;
      }
      else if (uVar2 == 2) {
        pcVar5 = s_CIRCLE_6630accc;
      }
      else {
        if (uVar2 != 3) {
          FUN_662f0810((int *)piVar1[1],s____UNKNOWN____6630aca4);
          return iVar3;
        }
        pcVar5 = s_POLYGON_6630acd4;
      }
      FUN_662f0810((int *)piVar1[1],pcVar5);
      iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,&param_3);
      param_1 = (int *)((int)param_1 + 1);
    } while ((ushort)param_1 < (ushort)local_8);
  }
  if (-1 < iVar3) {
    iVar3 = FUN_662f0810((int *)piVar1[1],s_<_MAP>_6630acb4);
  }
  return iVar3;
}


