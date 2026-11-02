/* Module: vegas30.exe
   Function: FUN_005a58d0
   Address: 005a58d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a58d0(int param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int local_10;
  int *local_c;
  
  iVar12 = param_4;
  iVar7 = param_1;
  local_c = (int *)&stack0xffffffd8;
  piVar10 = (int *)&stack0xffffffd8;
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    return 0;
  }
  FUN_0060ac30();
  puVar1 = (undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0xc);
  uVar11 = *(uint *)(param_1 + 0x1c);
  param_4 = 0;
  param_1 = 0;
  iVar8 = FUN_005a5270(*puVar2,*puVar1,*(undefined4 *)(iVar7 + 8));
  uVar4 = *(undefined4 *)(iVar7 + 0x3c);
  uVar5 = *(undefined4 *)(iVar7 + 0x38);
  *(uint *)(iVar7 + 0x38) = param_2;
  *(int *)(iVar7 + 0x3c) = param_3;
  if (0 < iVar12) {
    local_10 = iVar12;
    do {
      iVar9 = FUN_005a5860(iVar7,1,0);
      if (iVar9 == 0) {
        if (*(uint *)(iVar7 + 0x18) <= uVar11) {
          iVar9 = FUN_005a5520(iVar7,1);
          param_4 = param_4 + 1;
          if (iVar9 != 0) {
            iVar6 = *(int *)(iVar9 + 0x44c);
            if (((*(int *)(iVar7 + 0x2c) <= iVar6) &&
                (((*(int *)(iVar7 + 0x2c) < iVar6 ||
                  (*(uint *)(iVar7 + 0x28) <= *(uint *)(iVar9 + 0x448))) && (iVar6 <= param_3)))) &&
               ((iVar6 < param_3 || (*(uint *)(iVar9 + 0x448) <= param_2)))) {
              param_1 = param_1 + 1;
            }
            *(int *)(iVar9 + 0x438) = *(int *)(iVar9 + 0x438) + 1;
            goto LAB_005a59a6;
          }
        }
        uVar11 = uVar11 + iVar8;
      }
LAB_005a59a6:
      *local_c = iVar9;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *(undefined4 *)(iVar7 + 0x38) = uVar5;
  *(undefined4 *)(iVar7 + 0x3c) = uVar4;
  if (0 < iVar12) {
    do {
      if (*piVar10 != 0) {
        piVar3 = (int *)(*piVar10 + 0x438);
        *piVar3 = *piVar3 + -1;
      }
      piVar10 = piVar10 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = param_1;
  }
  return param_4;
}


