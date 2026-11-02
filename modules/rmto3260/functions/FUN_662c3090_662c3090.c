/* Module: rmto3260.dll
   Function: FUN_662c3090
   Address: 662c3090
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c3090(int *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_14 [3];
  uint local_8;
  
  uVar1 = *(uint *)(param_2 + 4);
  iVar7 = 0;
  local_8 = uVar1;
  param_2 = operator_new(uVar1);
  if (param_2 == (byte *)0x0) {
    iVar7 = -0x7ff8fff2;
  }
  if ((-1 < iVar7) &&
     (uVar2 = (**(code **)(*(int *)param_1[6] + 0x28))(param_2,uVar1), uVar2 != uVar1)) {
    iVar7 = -0x7ffbff7f;
  }
  piVar6 = (int *)0x0;
  if (-1 < iVar7) {
    piVar6 = FUN_662e19e0(param_2,uVar1);
    if (piVar6 == (int *)0x0) {
      iVar7 = -0x7ffbff7f;
    }
    if (-1 < iVar7) {
      FUN_662dedc0(piVar6,local_14);
      iVar3 = FUN_662ef820(local_14,s_logical__6630a12c);
      piVar5 = param_1;
      if (iVar3 == 0) {
        FUN_662ed8a0((void *)param_1[0xe],piVar6);
        puVar4 = operator_new(0x62);
        if (puVar4 == (undefined4 *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = FUN_662e03d0(puVar4);
        }
        if (piVar5 == (int *)0x0) {
          iVar7 = -0x7ff8fff2;
        }
        if (-1 < iVar7) {
          iVar7 = (**(code **)(*piVar5 + 0x1c))(param_2,local_8);
        }
        iVar3 = FUN_662ef820(local_14,s_logical_fileinfo_6630a118);
        if (iVar3 == 0) {
          param_1[8] = (int)piVar6;
          if (-1 < iVar7) {
            puVar4 = (undefined4 *)((int)param_1 + 0x66);
            piVar6 = *(int **)((int)param_1 + 0x66);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 8))(piVar6);
              *puVar4 = 0;
            }
            iVar7 = (**(code **)(*piVar5 + 0x38))(puVar4);
          }
        }
        else {
          iVar7 = (**(code **)(*param_1 + 0x90))(param_1,piVar5);
        }
        if (piVar5 != (int *)0x0) {
          (**(code **)*piVar5)(1);
          FUN_662ef0f0(local_14);
          goto LAB_662c31ff;
        }
      }
      else {
        FUN_662ed8a0((void *)param_1[0xd],piVar6);
        FUN_662decd0(piVar6,&param_1,&local_8);
        if ((int *)piVar5[0xf] < param_1) {
          piVar5[0xf] = (int)param_1 + 10;
        }
      }
      FUN_662ef0f0(local_14);
      goto LAB_662c31ff;
    }
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)*piVar6)(1);
  }
LAB_662c31ff:
  if (param_2 != (byte *)0x0) {
    operator_delete(param_2);
  }
  return iVar7;
}


