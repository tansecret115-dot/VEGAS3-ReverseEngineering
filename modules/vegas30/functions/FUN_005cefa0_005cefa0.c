/* Module: vegas30.exe
   Function: FUN_005cefa0
   Address: 005cefa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005cefa0(int param_1,uint param_2,int param_3,double *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  longlong lVar12;
  int local_7c;
  
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  iVar5 = FUN_0047c7d0(param_1 + 0x98,0xca);
  if (iVar5 == 0) {
    if (param_4 != (double *)0x0) {
      *(undefined4 *)param_4 = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x3ff00000;
    }
    fVar10 = (float10)1.0;
  }
  else {
    iVar1 = **(int **)(iVar5 + 0x30);
    lVar4 = 0;
    local_7c = 0;
    lVar12 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = lVar12;
        if (param_5 != (int *)0x0) {
          *param_5 = local_7c;
        }
        iVar7 = *(int *)(iVar5 + 0x30);
        puVar8 = (uint *)(*(int *)(iVar7 + 4) * local_7c + *(int *)(iVar7 + 8));
        uVar2 = *puVar8;
        if (iVar1 + -1 == local_7c) {
          uVar6 = *(uint *)(param_1 + 0x20);
          iVar7 = *(int *)(param_1 + 0x24);
        }
        else {
          iVar9 = *(int *)(iVar7 + 4) * (local_7c + 1);
          uVar6 = *(uint *)(iVar9 + *(int *)(iVar7 + 8));
          iVar7 = *(int *)(iVar9 + *(int *)(iVar7 + 8) + 4);
        }
        if ((iVar7 < param_3) || ((iVar7 <= param_3 && (uVar6 <= param_2)))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        switch(puVar8[3]) {
        case 2:
          if ((double)CONCAT44((iVar7 - puVar8[1]) - (uint)(uVar6 < uVar2),uVar6 - uVar2) !=
              _DAT_00610fd8) {
            lVar12 = ftol();
            goto LAB_005cf2ad;
          }
          break;
        case 4:
LAB_005cf1ef:
          lVar12 = ftol();
          lVar4 = lVar12 + lVar4;
          break;
        case 0xfffffffc:
          lVar12 = ftol();
LAB_005cf2ad:
          lVar4 = lVar12 + lVar4;
          break;
        default:
          lVar12 = ftol();
          lVar4 = lVar12 + lVar4;
          break;
        case 0xfffffffe:
          if ((double)CONCAT44((iVar7 - puVar8[1]) - (uint)(uVar6 < uVar2),uVar6 - uVar2) !=
              _DAT_00610fd8) goto LAB_005cf1ef;
        }
      } while ((!bVar3) && (local_7c = local_7c + 1, lVar12 = lVar4, local_7c < iVar1));
    }
    if ((param_2 == 0) && (param_3 == 0)) {
      fVar10 = (float10)_DAT_006106d0;
    }
    else {
      fVar10 = (float10)lVar4 / (float10)CONCAT44(param_3,param_2);
    }
    if (param_4 != (double *)0x0) {
      fVar11 = (float10)FUN_0047e950(iVar5,param_2,param_3,*(undefined4 *)(param_1 + 0x20),
                                     *(undefined4 *)(param_1 + 0x24));
      *param_4 = (double)fVar11;
      return (float10)(double)fVar10;
    }
  }
  return fVar10;
}


