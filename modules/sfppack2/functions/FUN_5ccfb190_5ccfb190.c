/* Module: sfppack2.dll
   Function: FUN_5ccfb190
   Address: 5ccfb190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ccfb190(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_4;
  
  local_4 = -900;
  iVar4 = param_2;
  while (iVar4 = iVar4 + -1, iVar6 = iVar4, piVar7 = param_1, 0 < iVar4) {
    do {
      piVar3 = piVar7 + 2;
      iVar1 = *piVar7;
      if (*piVar3 < iVar1) {
        iVar2 = piVar7[1];
        *piVar7 = *piVar3;
        piVar7[1] = piVar7[3];
        *piVar3 = iVar1;
        piVar7[3] = iVar2;
      }
      iVar6 = iVar6 + -1;
      piVar7 = piVar3;
    } while (iVar6 != 0);
  }
  iVar4 = param_2 + -2;
  *param_3 = param_2 + -2;
  if (0 < iVar4) {
    piVar7 = param_1 + iVar4 * 2;
    do {
      iVar6 = *piVar7;
      uVar5 = iVar6 - piVar7[1] >> 0x1f;
      if (((int)((iVar6 - piVar7[1] ^ uVar5) - uVar5) < 10) && (local_4 < iVar6)) {
        *param_3 = iVar4;
        local_4 = iVar6;
      }
      iVar4 = iVar4 + -1;
      piVar7 = piVar7 + -2;
    } while (0 < iVar4);
    return param_1[*param_3 * 2];
  }
  return param_1[*param_3 * 2];
}


