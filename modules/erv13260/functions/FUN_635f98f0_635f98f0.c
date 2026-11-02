/* Module: erv13260.dll
   Function: FUN_635f98f0
   Address: 635f98f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f98f0(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int *param_7,
            int param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_408 [8];
  int local_3e8 [120];
  int local_208 [8];
  int local_1e8 [120];
  int *local_8;
  
  local_8 = (int *)(((int)(param_4 + (param_4 >> 0x1f & 0xfU)) >> 4) +
                   ((int)(param_5 + (param_5 >> 0x1f & 0xfU)) >> 4) * 0x2a);
  piVar3 = *(int **)(param_6 + 0xac + (int)local_8 * 4);
  if ((*(int *)(param_8 + 0x1ce4) == 0) || (piVar3[6] != 0)) {
    if ((piVar3[5] != 0) && (piVar3[5] != 1)) goto LAB_635f9c61;
    FUN_635f9c80(param_4,param_5,piVar3,param_2,param_3,0x10,0,param_8);
    uVar5 = piVar3[2] + *piVar3 * 2;
    uVar7 = piVar3[3] + piVar3[1] * 2;
    uVar8 = (int)uVar5 >> 0x1f;
    if (((uVar5 ^ uVar8) - uVar8 & 3 ^ uVar8) != uVar8) {
      uVar5 = uVar5 | 2;
    }
    uVar8 = (int)uVar7 >> 0x1f;
    uVar5 = (int)uVar5 >> 1;
    if (((uVar7 ^ uVar8) - uVar8 & 3 ^ uVar8) != uVar8) goto LAB_635f9c44;
LAB_635f9c47:
    uVar7 = (int)uVar7 >> 1;
  }
  else {
    iVar6 = piVar3[5];
    if ((iVar6 == 0) || (iVar6 == 1)) {
      FUN_635f8b10(param_4,param_5,param_6,param_2,local_408,0,param_8);
      FUN_635f8b10(param_4,param_5,param_6,param_2,local_3e8,1,param_8);
      FUN_635f8b10(param_4,param_5,param_6,param_2,local_208,2,param_8);
      FUN_635f8b10(param_4,param_5,param_6,param_2,local_1e8,3,param_8);
      param_2 = 0x10;
      piVar4 = param_3;
      do {
        iVar6 = 0x10;
        do {
          *piVar4 = *piVar4 + *(int *)((int)piVar4 + ((int)local_408 - (int)param_3));
          piVar4 = piVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      uVar5 = piVar3[2] + *piVar3 * 2;
      uVar7 = piVar3[3] + piVar3[1] * 2;
      uVar8 = (int)uVar5 >> 0x1f;
      if (((uVar5 ^ uVar8) - uVar8 & 3 ^ uVar8) != uVar8) {
        uVar5 = uVar5 | 2;
      }
      uVar8 = (int)uVar7 >> 0x1f;
      uVar5 = (int)uVar5 >> 1;
      if (((uVar7 ^ uVar8) - uVar8 & 3 ^ uVar8) != uVar8) {
LAB_635f9c44:
        uVar7 = uVar7 | 2;
      }
      goto LAB_635f9c47;
    }
    if (iVar6 != 2) goto LAB_635f9c61;
    FUN_635f8b10(param_4,param_5,param_6,param_2,local_408,0,param_8);
    FUN_635f8b10(param_4,param_5,param_6,param_2,local_3e8,1,param_8);
    FUN_635f8b10(param_4,param_5,param_6,param_2,local_208,2,param_8);
    FUN_635f8b10(param_4,param_5,param_6,param_2,local_1e8,3,param_8);
    param_2 = 0x10;
    piVar3 = param_3;
    do {
      iVar6 = 0x10;
      do {
        *piVar3 = *piVar3 + *(int *)(((int)local_408 - (int)param_3) + (int)piVar3);
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    piVar3 = *(int **)(param_6 + 0x1504 + (int)local_8 * 4);
    piVar4 = *(int **)(param_6 + 0x295c + (int)local_8 * 4);
    piVar1 = *(int **)(param_6 + 0x3db4 + (int)local_8 * 4);
    piVar2 = *(int **)(param_6 + 0x520c + (int)local_8 * 4);
    uVar5 = piVar4[2] + (*piVar2 + *piVar3 + *piVar1 + *piVar4) * 2 + piVar1[2] + piVar3[2] +
            piVar2[2];
    uVar8 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    uVar7 = (int)uVar8 >> 0x1f;
    uVar5 = (*(int *)(&DAT_63606628 + (((uVar8 ^ uVar7) - uVar7 & 0xf ^ uVar7) - uVar7) * 4) +
            ((int)(uVar8 + (uVar7 & 0xf)) >> 4) * 2) * (((-1 < (int)uVar5) - 1 & 0xfffffffe) + 1);
    uVar7 = piVar4[3] + (piVar2[1] + piVar4[1] + piVar1[1] + piVar3[1]) * 2 + piVar1[3] + piVar3[3]
            + piVar2[3];
    uVar9 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
    uVar8 = (int)uVar9 >> 0x1f;
    uVar7 = (*(int *)(&DAT_63606628 + (((uVar9 ^ uVar8) - uVar8 & 0xf ^ uVar8) - uVar8) * 4) +
            ((int)(uVar9 + (uVar8 & 0xf)) >> 4) * 2) * (((-1 < (int)uVar7) - 1 & 0xfffffffe) + 1);
    local_8 = piVar1;
  }
  FUN_635f9e40(param_4,param_5,uVar5,uVar7,param_1,(int)param_3,param_8);
LAB_635f9c61:
  for (iVar6 = 0x180; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_7 = *param_3;
    param_3 = param_3 + 1;
    param_7 = param_7 + 1;
  }
  return;
}


