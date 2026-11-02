/* Module: tokr3260.dll
   Function: FUN_68059630
   Address: 68059630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_68059630(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int local_1c;
  int local_18;
  int local_c;
  int *local_8;
  
  if (0 < param_2) {
    piVar3 = &local_1c;
    local_c = param_2;
    piVar6 = param_5;
    do {
      iVar2 = *piVar6;
      if (iVar2 < 1) {
        *piVar3 = 0;
      }
      else {
        iVar7 = 0;
        iVar1 = 0;
        param_2 = 4;
        if (0 < iVar2) {
          piVar4 = piVar6 + 8;
          do {
            if (*piVar4 < param_2) {
              iVar7 = iVar1;
              param_2 = *piVar4;
            }
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < iVar2);
        }
        iVar2 = 0;
        if (-1 < iVar7) {
          piVar4 = piVar6 + 8;
          iVar7 = iVar7 + 1;
          do {
            if (iVar2 < *piVar4) {
              iVar2 = *piVar4;
            }
            piVar4 = piVar4 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        *piVar3 = iVar2 - param_2;
      }
      piVar6 = piVar6 + 0x10;
      piVar3 = piVar3 + 1;
      local_c = local_c + -1;
      local_8 = piVar3;
    } while (local_c != 0);
  }
  if (((1 < local_18) && (*param_4 == 0)) && (*param_5 == 0)) {
    iVar2 = param_5[0x11];
    bVar8 = (float)param_4[0xf] <= _DAT_6805b2f8;
    iVar7 = (iVar2 + 1) * ((int)(param_3 + (param_3 >> 0x1f & 0x3fU)) >> 6);
    if (0 < iVar7) {
      pfVar5 = (float *)(*param_1 + (param_3 / 2) * 4);
      do {
        if ((float)_DAT_6805b300 < ABS(*pfVar5)) {
          bVar8 = false;
        }
        pfVar5 = pfVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (bVar8) {
      *param_5 = 1;
      iVar7 = FUN_68053c70(1);
      param_5[8] = iVar7;
      param_5[1] = iVar2;
    }
  }
  return 0;
}


