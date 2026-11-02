/* Module: vegas30k.dll
   Function: FUN_01191ee0
   Address: 01191ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01191ee0(uint *param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_c;
  
  local_c = 1;
  if (param_1[9] != 0) {
    uVar6 = *param_1;
    uVar7 = param_1[1];
    if (param_5 == 0) {
      iVar5 = param_1[5] + uVar7 + (uint)CARRY4(param_1[4],uVar6);
      if ((iVar5 <= param_3) && ((iVar5 < param_3 || (param_1[4] + uVar6 < param_2)))) {
        return 1;
      }
    }
    else if (param_3 <= (int)uVar7) {
      if (param_3 < (int)uVar7) {
        return 1;
      }
      if (param_2 < uVar6) {
        return 1;
      }
    }
    uVar1 = param_1[4];
    if (((int)param_1[5] < 1) && (((int)param_1[5] < 0 || (uVar1 == 0)))) {
      return 1;
    }
    uVar2 = *param_4;
    if (param_5 == 0) {
      uVar3 = param_4[1];
      iVar5 = uVar7 + param_1[5] + (uint)CARRY4(uVar6,uVar1);
      if ((int)uVar3 < iVar5) {
        return 1;
      }
      if (((int)uVar3 <= iVar5) && (uVar2 < uVar6 + uVar1)) {
        return 1;
      }
      *param_4 = uVar2 - uVar6;
      param_4[1] = (uVar3 - uVar7) - (uint)(uVar2 < uVar6);
      uVar8 = __allrem(*param_4,param_4[1],param_1[4],param_1[5]);
      *(undefined8 *)param_4 = uVar8;
      uVar6 = *param_1;
      uVar7 = param_1[1];
    }
    else {
      uVar3 = param_4[1];
      if ((int)uVar7 < (int)uVar3) {
        return 1;
      }
      if (((int)uVar7 <= (int)uVar3) && (uVar6 < uVar2)) {
        return 1;
      }
      uVar4 = param_1[5];
      *param_4 = (uVar2 - uVar6) - uVar1;
      param_4[1] = (((uVar3 - uVar7) - (uint)(uVar2 < uVar6)) - uVar4) -
                   (uint)(uVar2 - uVar6 < uVar1);
      uVar8 = __allrem(*param_4,param_4[1],param_1[4],param_1[5]);
      *(undefined8 *)param_4 = uVar8;
      uVar6 = *param_1 + param_1[4];
      uVar7 = param_1[1] + param_1[5] + (uint)CARRY4(*param_1,param_1[4]);
    }
    uVar1 = *param_4;
    local_c = 0;
    *param_4 = uVar1 + uVar6;
    param_4[1] = param_4[1] + uVar7 + (uint)CARRY4(uVar1,uVar6);
  }
  return local_c;
}


