/* Module: vegas30.exe
   Function: FUN_005cad00
   Address: 005cad00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cad00(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_3[1];
  uVar6 = *param_3;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = uVar2 - uVar6;
  iVar1 = (uVar4 - uVar5) - (uint)(uVar2 < uVar6);
  if ((iVar1 < 1) && (iVar1 < 0)) {
    uVar4 = uVar3 + param_2[2];
    uVar2 = iVar1 + param_2[3] + (uint)CARRY4(uVar3,param_2[2]);
    if (((int)uVar2 < 1) && (((int)uVar2 < 0 || (uVar4 == 0)))) {
      return 0;
    }
    *param_1 = uVar6;
    param_1[1] = uVar5;
    uVar5 = param_3[3];
    if (((int)uVar5 < (int)uVar2) || (((int)uVar5 <= (int)uVar2 && (param_3[2] <= uVar4)))) {
      uVar2 = uVar5;
      uVar4 = param_3[2];
    }
    param_1[2] = uVar4;
    param_1[3] = uVar2;
    return 1;
  }
  uVar6 = param_3[2] - uVar3;
  uVar5 = (param_3[3] - iVar1) - (uint)(param_3[2] < uVar3);
  if (((int)uVar5 < 1) && (((int)uVar5 < 0 || (uVar6 == 0)))) {
    return 0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  if (((int)uVar5 <= (int)uVar4) && (((int)uVar5 < (int)uVar4 || (uVar6 < uVar2)))) {
    uVar2 = uVar6;
    uVar4 = uVar5;
  }
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return 1;
}


