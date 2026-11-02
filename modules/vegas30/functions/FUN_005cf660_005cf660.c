/* Module: vegas30.exe
   Function: FUN_005cf660
   Address: 005cf660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cf660(int *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint local_18 [4];
  uint local_8;
  
  piVar6 = param_1;
  iVar1 = *param_1;
  puVar10 = local_18;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_8 = local_8 ^ (local_8 ^ param_6) & 1;
  if (iVar1 == 0) {
    local_18[1] = param_3;
    local_18[0] = param_2;
    local_18[2] = param_4;
    local_18[3] = param_5;
    _SfList_InsertList_16(param_1,0,local_18,1);
    return 0;
  }
  param_1 = (int *)0x0;
  if (0 < iVar1) {
    do {
      puVar10 = (uint *)(piVar6[1] * (int)param_1 + piVar6[2]);
      uVar7 = FUN_005cf560(*puVar10,puVar10[1],puVar10[2],puVar10[3],param_2,param_3,param_4,param_5
                          );
      switch(uVar7) {
      case 0:
        goto switchD_005cf71c_caseD_0;
      case 1:
        _SfList_DeleteList_16(piVar6,param_1,1,0);
        FUN_005cf660(piVar6,param_2,param_3,param_4,param_5,param_6);
        return 0;
      case 2:
        local_18[2] = param_4;
        local_18[0] = param_2;
        local_18[1] = param_3;
        local_18[3] = param_5;
        _SfList_InsertList_16(piVar6,param_1,local_18,1);
        return 0;
      case 3:
        if (param_1 == (int *)(iVar1 + -1)) {
          local_18[0] = param_2;
          local_18[1] = param_3;
          local_18[2] = param_4;
          local_18[3] = param_5;
          _SfList_InsertList_16(piVar6,0xffffffff,local_18,1);
        }
        break;
      case 4:
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        uVar2 = *puVar10;
        uVar8 = uVar4 - param_2;
        uVar3 = puVar10[1];
        _SfList_DeleteList_16(piVar6,param_1,1,0);
        FUN_005cf660(piVar6,param_2,param_3,uVar8 + uVar2,
                     ((uVar5 - param_3) - (uint)(uVar4 < param_2)) + uVar3 +
                     (uint)CARRY4(uVar8,uVar2),param_6);
        return 0;
      case 5:
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        _SfList_DeleteList_16(piVar6,param_1,1,0);
        FUN_005cf660(piVar6,uVar4,uVar5,param_4 + (param_2 - uVar4),
                     param_5 + ((param_3 - uVar5) - (uint)(param_2 < uVar4)) +
                     (uint)CARRY4(param_4,param_2 - uVar4),param_6);
        goto switchD_005cf71c_caseD_0;
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < iVar1);
  }
switchD_005cf71c_caseD_0:
  return 0;
}


