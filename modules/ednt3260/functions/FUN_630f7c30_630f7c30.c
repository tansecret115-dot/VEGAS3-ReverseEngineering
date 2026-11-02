/* Module: ednt3260.dll
   Function: FUN_630f7c30
   Address: 630f7c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f7c30(short *param_1,short *param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  local_8 = (int)param_4;
  if (0 < local_8) {
    iVar6 = (int)param_3;
    psVar2 = param_2;
    do {
      sVar4 = 0x18;
      psVar3 = psVar2;
      iVar7 = iVar6;
      if (0 < iVar6) {
        do {
          if (*psVar3 < sVar4) {
            sVar4 = *psVar3;
          }
          iVar7 = iVar7 + -1;
          psVar3 = psVar3 + 1;
        } while (iVar7 != 0);
      }
      *psVar2 = sVar4;
      psVar2 = psVar2 + iVar6;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if ((param_5 == 0) && (0xf < *param_1)) {
    *param_1 = 0xf;
  }
  iVar6 = (int)param_4;
  if (0 < iVar6) {
    psVar2 = param_2;
    sVar4 = *param_1;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 - sVar4;
      psVar2 = psVar2 + param_3;
      iVar6 = iVar6 + -1;
      sVar4 = sVar1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  if (0 < param_4) {
    iVar7 = (int)param_3;
    do {
      psVar2 = param_2 + iVar6 * iVar7;
      sVar4 = param_2[iVar6 * iVar7];
      if (sVar4 < 3) {
        if (sVar4 < -2) {
          if (iVar6 == 0) {
            if (param_5 == 0) {
              *param_1 = *param_1 + -1;
              *param_2 = *param_2 + 1;
            }
            else {
              *param_1 = *param_1 + -2;
              *param_2 = *param_2 + 2;
            }
          }
          else {
            iVar6 = iVar6 + -1;
            param_2[iVar6 * iVar7] = param_2[iVar6 * iVar7] + -1;
            *psVar2 = *psVar2 + 1;
          }
        }
        else {
          iVar6 = iVar6 + 1;
        }
      }
      else {
        *psVar2 = sVar4 + -1;
        if (iVar6 < param_4 + -1) {
          param_2[(iVar6 + 1) * iVar7] = param_2[(iVar6 + 1) * iVar7] + 1;
        }
      }
    } while (iVar6 < param_4);
  }
  sVar4 = *param_1;
  if (0 < param_4) {
    iVar6 = (int)param_4;
    psVar2 = param_2;
    do {
      *psVar2 = *psVar2 + sVar4;
      sVar4 = *psVar2;
      psVar2 = psVar2 + param_3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (int)param_4;
  if (0 < iVar6) {
    iVar7 = (int)param_3;
    do {
      psVar2 = param_2;
      iVar5 = iVar7;
      if (0 < iVar7) {
        do {
          *psVar2 = *param_2;
          iVar5 = iVar5 + -1;
          psVar2 = psVar2 + 1;
        } while (iVar5 != 0);
      }
      param_2 = param_2 + iVar7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


