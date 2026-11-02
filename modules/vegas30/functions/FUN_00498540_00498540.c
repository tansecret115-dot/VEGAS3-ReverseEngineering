/* Module: vegas30.exe
   Function: FUN_00498540
   Address: 00498540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00498540(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7,
            int param_8,uint param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_18;
  int local_14;
  
  uVar8 = param_5;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x24);
  if (param_2 == 0) {
    if ((param_8 < 1) && (param_8 < 0)) {
      uVar8 = 0;
      iVar7 = 0x20000000;
    }
    else {
      uVar8 = param_3 + param_5 + param_7;
      iVar7 = param_4 + param_6 + (uint)CARRY4(param_3,param_5) + param_8 +
              (uint)CARRY4(param_3 + param_5,param_7);
    }
    uVar5 = param_5 + 1;
    iVar10 = param_6 + (uint)(0xfffffffe < param_5);
    if (((iVar10 < iVar7) || ((iVar10 <= iVar7 && (uVar5 <= uVar8)))) &&
       ((iVar10 = iVar7, uVar5 = uVar8, 0x1fffffff < iVar7 && ((0x20000000 < iVar7 || (uVar8 != 0)))
        ))) {
      uVar5 = 0;
      iVar10 = 0x20000000;
    }
    param_3 = uVar5 - param_5;
    param_4 = (iVar10 - param_6) - (uint)(uVar5 < param_5);
  }
  else {
    if ((*(uint *)(param_1 + 0x10) & 0x100) == 0) {
      local_18 = param_5 - param_9;
      local_14 = (param_6 - param_10) - (uint)(param_5 < param_9);
    }
    else {
      local_18 = 0;
      local_14 = 0;
    }
    if ((param_8 < 1) && (param_8 < 0)) {
      uVar5 = 0;
      iVar7 = 0x20000000;
    }
    else {
      uVar5 = (param_5 + param_7) - 1;
      iVar7 = (param_6 + param_8 + (uint)CARRY4(param_5,param_7)) - (uint)(param_5 + param_7 == 0);
    }
    uVar9 = param_3 + param_5;
    iVar10 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    if (((local_14 < iVar10) || ((param_5 = local_18, local_14 <= iVar10 && (local_18 <= uVar9))))
       && ((local_14 = iVar10, param_5 = uVar9, iVar7 <= iVar10 &&
           ((iVar7 < iVar10 || (uVar5 < uVar9)))))) {
      local_14 = iVar7;
      param_5 = uVar5;
    }
    uVar5 = uVar8 - param_5;
    param_3 = uVar5 + param_7;
    param_4 = ((param_6 - local_14) - (uint)(uVar8 < param_5)) + param_8 +
              (uint)CARRY4(uVar5,param_7);
    param_6 = local_14;
  }
  if ((param_8 < 1) && (param_8 < 0)) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = &param_3;
  }
  FUN_005c7760(param_1,&param_5,puVar6,3,0);
  if ((((iVar1 == *(int *)(param_1 + 0x18)) && (iVar2 == *(int *)(param_1 + 0x1c))) &&
      (iVar3 == *(int *)(param_1 + 0x20))) && (iVar4 == *(int *)(param_1 + 0x24))) {
    return 0;
  }
  return 1;
}


