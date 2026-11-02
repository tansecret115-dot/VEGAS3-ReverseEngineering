/* Module: vegas30.exe
   Function: FUN_005f71b0
   Address: 005f71b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_005f71b0(int *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_EDI;
  int *piVar7;
  double dVar8;
  int *piVar9;
  int *piStack_44;
  undefined1 auStack_34 [8];
  int *local_2c;
  
  piStack_44 = param_1 + 8;
  local_2c = param_1;
  piVar1 = (int *)(**(code **)(*param_2 + 0x1c))();
  if ((int)piVar1 < 0) {
    return piVar1;
  }
  piVar9 = &DAT_0060ef78;
  piVar1 = (int *)(**(code **)*param_2)(param_2,&DAT_0060ef78,&stack0xffffffc4);
  if ((int)piVar1 < 0) {
    return piVar1;
  }
  piVar2 = (int *)(**(code **)(*param_2 + 0x34))(param_2,param_1 + 0x20);
  piVar1 = piVar9;
  if (-1 < (int)piVar2) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0xc] = (int)(param_1 + 0x26);
    uVar5 = *(uint *)(param_3 + 0xc);
    piVar1 = (int *)*param_4;
    piVar7 = param_1 + 0x26;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar7 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar7 = piVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar7 = (char)*piVar1;
      piVar1 = (int *)((int)piVar1 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    }
    if ((*(byte *)(param_1 + 0x23) & 0x80) == 0) {
      (**(code **)(*piVar9 + 0x30))(piVar9,param_1 + 0x12);
      piVar1 = piVar9;
    }
    else {
      piVar2 = (int *)(**(code **)(*piVar9 + 0x30))(piVar9,&stack0xffffffc4);
      piVar1 = piVar9;
      if ((int)piVar2 < 0) goto LAB_005f742c;
      piVar1 = *(int **)(param_3 + 0x10);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 0x40)) {
        piVar1 = param_1 + 0xe;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar1 = 0;
          piVar1 = piVar1 + 1;
        }
        param_1[0x14] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x16] = 0;
        param_1[0xe] = 0x40;
        param_1[0xf] = -1;
        param_1[0x10] = 0;
        param_1[0x11] = -1;
        param_1[0x15] = 0x3ff00000;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
      }
      else {
        piVar7 = param_1 + 0xe;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = *piVar1;
          piVar1 = piVar1 + 1;
          piVar7 = piVar7 + 1;
        }
        param_1[0xe] = 0x40;
      }
      piVar7 = param_1 + 0xe;
      iVar6 = (**(code **)(*piVar9 + 0xc))(piVar9,&piStack_44);
      param_1 = param_2;
      piVar1 = piVar9;
      if (-1 < iVar6) {
        iVar6 = (**(code **)(*piStack_44 + 0x18))(piStack_44,auStack_34);
        piVar1 = piVar9;
        if (-1 < iVar6) {
          iVar6 = piVar9[0xc];
          FUN_005f9300(piVar7,&stack0xffffffc4,0,*(undefined4 *)(iVar6 + 4),
                       *(undefined4 *)(iVar6 + 8),piStack_44,unaff_EDI,*(undefined2 *)(iVar6 + 0xe))
          ;
          if (piVar9[0x11] == -1) {
            piVar9[0x11] = 0;
          }
        }
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
    if (-1 < (int)piVar2) {
      if ((*(uint *)(param_1[2] + 0x134) & 0x200) == 0) {
        iVar6 = param_1[0x13];
        piStack_44 = (int *)param_1[0x12];
        dVar8 = floor(*(double *)(param_1 + 0x12));
        if (dVar8 == (double)CONCAT44(iVar6,piStack_44)) {
          uVar3 = 7;
          if (_DAT_0061a6e8 != (double)CONCAT44(iVar6,piStack_44)) {
            uVar3 = 3;
          }
          *(undefined4 *)(param_1[2] + 0x108) = uVar3;
        }
        else if (_DAT_00612af8 <= ABS((double)CONCAT44(iVar6,piStack_44) - _DAT_0061a478)) {
          *(undefined4 *)(param_1[2] + 0x108) = 1;
        }
        else {
          *(undefined4 *)(param_1[2] + 0x108) = 8;
        }
      }
      param_1[0x23] = param_1[0x23] & 0xfffffffc;
      if (param_1[0x22] == 0) {
        param_1[0x22] = (int)param_2;
        (**(code **)(*param_2 + 4))(param_2);
      }
    }
  }
LAB_005f742c:
  (**(code **)(*piVar1 + 8))(piVar1);
  return piVar1;
}


