/* Module: vegas30.exe
   Function: FUN_004d5e70
   Address: 004d5e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d5e70(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((param_3 != 0) || (param_4 != 0)) && (param_2 != 1)) {
    param_1[10] = param_3;
    param_1[0xb] = param_4;
    local_10 = 0;
    local_c = 0;
    local_8 = param_3;
    local_4 = param_4;
    piVar6 = param_1 + 0xe;
    iVar7 = 3;
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(param_1,&local_10);
        piVar1[4] = piVar1[6] + piVar1[2];
        piVar1[5] = piVar1[7] + piVar1[3];
      }
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if ((int *)param_1[0xd] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xd] + 4))(param_1,&local_10);
      iVar7 = param_1[0xd];
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 8);
      iVar7 = param_1[0xd];
      *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0xc);
    }
    param_1[0x83] = local_10;
    param_1[0x84] = local_c;
    param_1[0x85] = local_8;
    iVar7 = local_8 - local_10;
    param_1[0x86] = local_4;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    param_1[0x87] = iVar7;
    iVar5 = local_4 - local_c;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    param_1[0x88] = iVar5;
    param_1[2] = local_10;
    param_1[3] = local_c;
    param_1[4] = local_8;
    param_1[6] = param_1[0x87];
    param_1[5] = local_4;
    iVar2 = param_1[0x91];
    param_1[7] = iVar5;
    iVar3 = param_1[0x8c];
    iVar7 = iVar7 - param_1[0x8d];
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar5 = iVar5 - param_1[0x92];
    param_1[0x8c] = iVar7;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    param_1[0x91] = iVar5;
    if ((iVar3 != 0) && (iVar7 != iVar3)) {
      uVar8 = 1;
      uVar4 = ftol(1);
      FUN_004d56c0(param_1[0x89],uVar4,uVar8);
      iVar7 = (**(code **)(*param_1 + 0x3c))(param_1[0x8a]);
      param_1[0x52] = iVar7;
    }
    if ((iVar2 != 0) && (param_1[0x91] != iVar2)) {
      uVar8 = 1;
      uVar4 = ftol(1);
      FUN_004d5850(param_1[0x8e],uVar4,uVar8);
      iVar7 = (**(code **)(*param_1 + 0x48))(param_1[0x8f]);
      param_1[0x6b] = iVar7;
    }
    GetFocus();
  }
  return;
}


