/* Module: sfppack1.dll
   Function: FUN_5ce0e940
   Address: 5ce0e940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0e940(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_190 [10];
  int local_168 [90];
  
  FUN_5ce09e60(param_1,local_190);
  uVar2 = 0;
  puVar3 = local_190;
  iVar4 = 3;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 | uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (uVar2 == 0) {
    FUN_5ce09e40(param_3);
    FUN_5ce09e40(param_3 + 3);
    return;
  }
  piVar5 = local_168;
  iVar4 = 0;
  do {
    iVar6 = iVar4;
    if ((local_190[2] & 1) == 0) {
      *piVar5 = 0;
    }
    else {
      iVar4 = 2 - (local_190[2] & 3);
      *piVar5 = iVar4;
      if (iVar4 < 0) {
        iVar4 = 2;
        puVar3 = local_190 + 2;
        do {
          uVar2 = *puVar3;
          *puVar3 = uVar2 + 1;
          if (uVar2 + 1 != 0) break;
          iVar4 = iVar4 + -1;
          puVar3 = puVar3 + -1;
        } while (-1 < iVar4);
      }
    }
    local_190[2] = local_190[2] & 0xfffffffe;
    FUN_5ce09e00(local_190);
    piVar5 = piVar5 + 1;
    uVar2 = 0;
    puVar3 = local_190;
    iVar4 = 3;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 | uVar1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = iVar6 + 1;
    if (uVar2 == 0) {
      FUN_5ce0e910((int)param_2,param_3);
      if (0 < iVar6) {
        piVar5 = local_168 + iVar6;
        local_190[3] = iVar6;
        do {
          FUN_5ce0e790((int)param_3,(int)(local_190 + 4),param_4);
          iVar4 = piVar5[-1];
          piVar5 = piVar5 + -1;
          if (iVar4 == -1) {
            FUN_5ce0e8b0((int)(local_190 + 4),param_2,param_3,param_4);
          }
          else if (iVar4 == 0) {
            FUN_5ce0e910((int)(local_190 + 4),param_3);
          }
          else if (iVar4 == 1) {
            FUN_5ce0e610((int)param_2,local_190 + 4,param_3,param_4);
          }
          local_190[3] = local_190[3] + -1;
        } while (local_190[3] != 0);
      }
      return;
    }
  } while( true );
}


