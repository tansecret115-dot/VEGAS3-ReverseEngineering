/* Module: sftrans1.dll
   Function: FUN_004ecd80
   Address: 004ecd80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ecd80(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,code *param_5,
                undefined4 param_6,int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_30 [4];
  undefined1 *local_20;
  undefined1 *local_1c;
  code *local_18;
  code *local_14;
  code *local_10;
  undefined1 *local_c;
  code *local_8;
  code *local_4;
  
  iVar4 = param_10;
  iVar7 = param_9;
  iVar3 = param_7;
  local_30[0] = &LAB_004eabe0;
  local_30[1] = &LAB_004eae90;
  local_30[2] = &LAB_004eb080;
  local_30[3] = &LAB_004eb1f0;
  local_20 = &LAB_004eb3f0;
  local_1c = &LAB_004eb6f0;
  local_18 = FUN_004eba30;
  local_14 = FUN_004ebd40;
  local_10 = FUN_004ec050;
  local_c = &LAB_004ec3c0;
  local_8 = FUN_004ec740;
  local_4 = FUN_004eca60;
  if (param_10 == 0) {
    return -0x7ff8ffa9;
  }
  uVar1 = *(uint *)(param_10 + 4);
  if ((uVar1 != 0xffffffff) && (((int)uVar1 < 0 || (0xc < uVar1)))) {
    return -0x7fffbfff;
  }
  iVar6 = FUN_004cda40(&param_7,&param_8,&param_9,&param_10,param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,param_9);
  if (-1 < iVar6) {
    if (*(int *)(iVar4 + 4) == -1) {
      if (iVar7 != 4) {
        return -0x7fffbfff;
      }
      uVar5 = ftol();
      iVar7 = 0;
      pcVar2 = *(code **)(*(int *)(iVar4 + 0xc) + 4);
      if (0 < param_8) {
        do {
          (*pcVar2)(param_10,param_9,uVar5,param_7);
          param_10 = param_10 + param_3;
          param_9 = param_9 + iVar3;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_8);
        return iVar6;
      }
    }
    else {
      if (iVar7 == 4) {
        param_5 = (code *)local_30[*(int *)(iVar4 + 4)];
      }
      iVar7 = 0;
      if (0 < param_8) {
        do {
          (*param_5)(param_10,param_9,param_7,iVar4);
          param_10 = param_10 + param_3;
          param_9 = param_9 + iVar3;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_8);
      }
    }
  }
  return iVar6;
}


