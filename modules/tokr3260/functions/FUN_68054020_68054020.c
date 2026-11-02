/* Module: tokr3260.dll
   Function: FUN_68054020
   Address: 68054020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68054020(int *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  piVar7 = param_1 + 0x141f;
  iVar6 = *param_1;
  iVar8 = (iVar6 + 2) * 3;
  iVar3 = iVar6;
  piVar5 = piVar7;
  if (0 < iVar6) {
    do {
      if (*piVar5 != 0) {
        iVar8 = iVar8 + 6;
      }
      iVar3 = iVar3 + -1;
      piVar5 = piVar5 + 1;
    } while (iVar3 != 0);
  }
  local_c = 0;
  if (iVar6 < 1) {
    return iVar8;
  }
  iVar6 = *(int *)(param_1[0x3c89] + 0x38) - (int)piVar7;
  iVar3 = *(int *)(param_1[0x3c89] + 0x30) - (int)piVar7;
  local_8 = iVar8;
  do {
    if (0 < *piVar7) {
      iVar8 = *(int *)(*(int *)(param_1[0x3c89] + 0x40) + param_1[3] * 4) + *piVar7 * 0x2c;
      if (iVar8 == 0) {
        return -999999;
      }
      iVar1 = *(int *)(iVar6 + (int)piVar7);
      puVar2 = *(uint **)(iVar3 + (int)piVar7);
      iVar4 = FUN_68054120(iVar8,(uint *)(param_1 + iVar1 + 0x145f),puVar2);
      if (iVar4 == -999999) {
        return -999999;
      }
      iVar8 = FUN_68054120(iVar8,(uint *)(param_1 + iVar1 + 0x145f),puVar2);
      iVar8 = local_8 + iVar8;
      local_8 = iVar8;
    }
    local_c = local_c + 1;
    piVar7 = piVar7 + 1;
    if (*param_1 <= local_c) {
      return iVar8;
    }
  } while( true );
}


