/* Module: tokr3260.dll
   Function: FUN_68057190
   Address: 68057190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_68057190(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_40 [4];
  int local_30 [4];
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  if (0 < param_5) {
    local_18 = param_1 - (int)param_3;
    local_14 = param_4 - (int)param_3;
    piVar7 = param_3;
    local_c = local_40;
    do {
      iVar3 = *(int *)(local_18 + (int)piVar7);
      local_20 = *(int *)(local_14 + (int)piVar7);
      piVar1 = (int *)*piVar7;
      iVar2 = 0;
      piVar6 = local_c;
      do {
        piVar8 = piVar6 + 1;
        iVar5 = *(int *)(local_20 + 8) + iVar2;
        iVar2 = iVar2 + 0x400;
        *piVar6 = iVar5;
        piVar6 = piVar8;
      } while (iVar2 < 0x1000);
      local_8 = piVar7;
      iVar2 = FUN_68053ba0(*piVar1 + -1,0);
      if (iVar2 == -999999) {
        return 0xfff0bdc1;
      }
      local_1c = (int *)piVar1[1];
      iVar2 = FUN_68053ba0(*piVar1 + -1,0);
      piVar6 = local_1c;
      if ((int)local_1c < iVar2 + 1) {
        iVar2 = FUN_68053ba0(*piVar1 + -1,0);
        if (iVar2 == -999999) {
          return 0xfff0bdc1;
        }
        iVar2 = FUN_68053ba0(*piVar1 + -1,0);
        piVar6 = (int *)(iVar2 + 1);
      }
      if ((int)piVar6 < 4) {
        iVar2 = 0;
        pfVar4 = (float *)((int)piVar6 * 0x400 + iVar3);
        do {
          piVar7 = local_8;
          if (*pfVar4 != (float)_DAT_6805b108) {
            piVar6 = (int *)((int)piVar6 + 1);
            break;
          }
          iVar2 = iVar2 + 1;
          pfVar4 = pfVar4 + 1;
        } while (iVar2 < 7);
      }
      iVar3 = FUN_68056f50(iVar3,local_c,(undefined4 *)(piVar1[0x3c86] + 0x10),(int)(piVar1 + 4),
                           piVar6,*(int **)(local_20 + 4));
      if (iVar3 == -999999) {
        return 0xfff0bdc1;
      }
      local_10 = local_10 + 1;
      piVar7 = piVar7 + 1;
      local_c = piVar8;
      local_8 = piVar7;
    } while (local_10 < param_5);
  }
  if ((param_5 == 2) && (param_6 == 0x12)) {
    FUN_68051d20(local_40,local_30,param_3[1]);
  }
  if (0 < param_5) {
    piVar7 = local_40;
    iVar3 = param_4 - (int)param_2;
    do {
      FUN_68057100(piVar7,*param_2,(undefined4 *)**(undefined4 **)(iVar3 + (int)param_2));
      param_2 = param_2 + 1;
      piVar7 = piVar7 + 4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return 0;
}


