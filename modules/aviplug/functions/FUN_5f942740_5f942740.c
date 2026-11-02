/* Module: aviplug.dll
   Function: FUN_5f942740
   Address: 5f942740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f942740(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int local_6c;
  int local_68;
  int local_64 [4];
  undefined4 local_54 [21];
  
  puVar1 = param_1;
  local_68 = 0;
  iVar3 = param_1[0x3d];
  piVar6 = param_1 + 0x3d;
  iVar5 = 0;
  if (0 < iVar3) {
    piVar2 = param_1 + 0x43;
    iVar7 = iVar3;
    do {
      if (param_1[*piVar2 + 0x56] != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar2 = piVar2 + 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (iVar5 == 0) {
      local_68 = 0;
    }
    else {
      if (iVar5 != iVar3) {
        return -0x7fff0001;
      }
      uVar8 = FUN_5f94d210(param_1[0x3b],param_1[9],param_1[0x3b],param_1[8],param_1[9],1,&local_6c)
      ;
      local_68 = (int)uVar8;
      if (-1 < local_68) {
        piVar2 = local_64;
        for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar2 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar2 = piVar2 + 1;
        }
        iVar3 = 0;
        if (0 < local_64[0]) {
          piVar6 = puVar1 + 0x5a;
          puVar4 = local_54;
          piVar2 = puVar1 + 0x3f;
          do {
            iVar5 = *piVar2;
            puVar4[-1] = local_6c;
            puVar4[-2] = iVar5;
            iVar5 = piVar2[2];
            *puVar4 = 0;
            piVar2[2] = iVar5 + local_6c;
            *piVar2 = *piVar2 + *piVar6 * local_6c;
            puVar4[1] = 0;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 1;
            puVar4 = puVar4 + 6;
            piVar2 = piVar2 + 6;
          } while (iVar3 < local_64[0]);
        }
        local_68 = FUN_5f941c30(param_2,&param_1);
        if (-1 < local_68) {
          param_1[2] = 4;
          param_1[4] = puVar1[0x3b];
          param_1[5] = param_3;
          param_1[0x23] = puVar1 + 0x3c;
          InterlockedIncrement((LONG *)(param_3 + 0x1c));
          InterlockedIncrement(puVar1 + 0x3c);
          piVar6 = puVar1 + 0x56;
          iVar3 = 4;
          do {
            *(int *)((-0x140 - (int)puVar1) + (int)piVar6 + (int)param_1) = *piVar6;
            if (*piVar6 != 0) {
              InterlockedIncrement((LONG *)(*piVar6 + 0x1c));
            }
            piVar6 = piVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          piVar6 = local_64;
          piVar2 = param_1 + 10;
          for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar2 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar2 = piVar2 + 1;
          }
          FUN_5f98fe00((int *)(param_2 + 0x20),param_1);
          return local_68;
        }
      }
    }
  }
  return local_68;
}


