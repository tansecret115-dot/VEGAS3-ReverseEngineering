/* Module: oggplug.dll
   Function: FUN_00433fb0
   Address: 00433fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00433fb0(float *param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float afStack_2c [2];
  int local_14;
  int local_10;
  float *local_c;
  float *local_8;
  
  afStack_2c[1] = 6.175868e-39;
  FUN_00444a80();
  afStack_2c[1] = 6.175888e-39;
  FUN_00444a80();
  iVar5 = 0;
  iVar4 = 0;
  local_14 = 0;
  if (0 < param_3) {
    local_8 = param_1;
    do {
      if (1 < iVar4) {
        local_c = afStack_2c + iVar4;
        for (pfVar7 = afStack_2c + iVar4 + 1; *pfVar7 <= *local_8; pfVar7 = pfVar7 + -1) {
          if (((((int)*pfVar7 + param_2 <= iVar5) || (iVar4 < 2)) || (pfVar7[-1] < *pfVar7)) ||
             ((int)*local_c + param_2 <= iVar5)) {
            *(int *)(&stack0xffffffdc + iVar4 * 4) = iVar5;
            fVar2 = *local_8;
            goto LAB_0043406e;
          }
          iVar4 = iVar4 + -1;
          local_c = local_c + -1;
        }
      }
      *(int *)(&stack0xffffffdc + iVar4 * 4) = iVar5;
      fVar2 = *local_8;
LAB_0043406e:
      *(float *)(&stack0xffffffdc + iVar4 * 4) = fVar2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + 1;
    } while (iVar5 < param_3);
  }
  pfVar7 = (float *)&stack0xffffffdc;
  local_10 = 0;
  if (0 < iVar4) {
    iVar5 = (int)pfVar7 - (int)&stack0xffffffdc;
    piVar1 = (int *)&stack0xffffffdc;
    do {
      piVar8 = piVar1 + 1;
      if ((iVar4 + -1 <= local_10) || (*(float *)(iVar5 + (int)piVar8) <= *pfVar7)) {
        iVar3 = *piVar1 + 1 + param_2;
      }
      else {
        iVar3 = *piVar8;
      }
      if (param_3 < iVar3) {
        iVar3 = param_3;
      }
      if (local_14 < iVar3) {
        iVar3 = iVar3 - local_14;
        pfVar6 = param_1 + local_14;
        local_14 = local_14 + iVar3;
        do {
          *pfVar6 = *pfVar7;
          pfVar6 = pfVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_10 = local_10 + 1;
      pfVar7 = pfVar7 + 1;
      piVar1 = piVar8;
    } while (local_10 < iVar4);
  }
  return;
}


