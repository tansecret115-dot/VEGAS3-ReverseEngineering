/* Module: rmme3260.dll
   Function: FUN_66207b90
   Address: 66207b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66207b90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int *this;
  char *pcVar8;
  bool bVar9;
  int local_1c [3];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_10 = 0;
  puVar3 = operator_new(0x46);
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = FUN_66217eb0(puVar3);
  }
  this = local_8;
  if (local_8 == (int *)0x0) {
    iVar7 = -0x7ff8fff2;
LAB_66207be7:
    if (iVar7 < 0) goto LAB_66207c9c;
  }
  else {
    iVar7 = (**(code **)(*local_8 + 0x1c))(param_2,param_3);
    if (iVar7 < 0) {
      (**(code **)*this)(1);
      goto LAB_66207be7;
    }
  }
  uVar2 = FUN_662182a0((int)this);
  local_c = (undefined4 *)0x0;
  iVar4 = (**(code **)(*param_1 + 0x58))(param_1,uVar2,&local_c);
  if (iVar4 == 0) {
    iVar7 = (**(code **)*local_c)(local_c,local_8);
    local_10 = 1;
  }
  this = local_8;
  if (-1 < iVar7) {
    local_c = (undefined4 *)0x0;
    iVar4 = (**(code **)(*param_1 + 0x5c))(param_1,uVar2,&local_c);
    this = local_8;
    if (iVar4 == 0) {
      puVar3 = operator_new(0x46);
      if (puVar3 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = FUN_66217eb0(puVar3);
      }
      if (piVar5 == (int *)0x0) {
        iVar7 = -0x7ff8fff2;
        this = local_8;
      }
      else {
        iVar7 = (**(code **)(*piVar5 + 0x1c))(param_2,param_3);
        if (-1 < iVar7) {
          iVar7 = (**(code **)*local_c)(local_c,piVar5);
          local_10 = 1;
          this = local_8;
          if (-1 < iVar7) goto LAB_66207c9c;
        }
        (**(code **)*piVar5)(1);
        this = local_8;
      }
    }
  }
LAB_66207c9c:
  if ((-1 < iVar7) && (local_10 == 0)) {
    puVar3 = FUN_66218240(this,local_1c);
    pbVar6 = (byte *)*puVar3;
    pcVar8 = s_logical_fileinfo_6626f524;
    do {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_66207cdd:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_66207ce2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_66207cdd;
      pbVar6 = pbVar6 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_66207ce2:
    FUN_66250210(local_1c);
    if (iVar4 != 0) {
      iVar7 = -0x7fffbffb;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)*local_8)(1);
    }
  }
  return iVar7;
}


