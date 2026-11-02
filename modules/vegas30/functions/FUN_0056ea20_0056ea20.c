/* Module: vegas30.exe
   Function: FUN_0056ea20
   Address: 0056ea20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0056ea20(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  HGLOBAL pvVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  LPCVOID local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar6 = false;
  iVar5 = 0;
  if (*(int *)(param_3 + 8) == 4) {
    iVar5 = *(int *)(param_3 + 0x224) + 0x91;
  }
  else if (*(int *)(param_3 + 8) == 2) {
    if (param_2 == 0) {
      iVar5 = *(int *)(param_3 + 0x224) + 0x138;
    }
    else {
      iVar5 = *(int *)(param_3 + 0x224) + 0x158;
    }
  }
  local_20 = (LPCVOID)0x0;
  local_1c = 0;
  local_10 = 0;
  if (iVar5 != 0) {
    FUN_005b8630(*(undefined4 *)(param_1 + 0x290));
    FUN_005b4e20(iVar5,&local_20,&local_1c);
    if (local_1c == 0) {
      FUN_004e9f70(*(undefined4 *)(param_1 + 0x290),iVar5,0);
      if (*(int *)(param_3 + 8) == 4) {
        FUN_004ea590(*(undefined4 *)(param_1 + 0x290),1,*(undefined4 *)(param_3 + 0x224),0x17);
      }
      else if (*(int *)(param_3 + 8) == 2) {
        FUN_004ea590(*(undefined4 *)(param_1 + 0x290),4,*(undefined4 *)(param_3 + 0x224),0x17);
      }
    }
    else {
      if (local_20 == (LPCVOID)0x0) goto LAB_0056eb78;
      FUN_004e9f70(*(undefined4 *)(param_1 + 0x290),iVar5,0);
      if (*(int *)(param_3 + 8) == 4) {
        iVar5 = 1;
      }
      else {
        iVar5 = 4;
        if (*(int *)(param_3 + 8) != 2) {
          iVar5 = local_c;
        }
      }
      FUN_004ea590(*(undefined4 *)(param_1 + 0x290),iVar5,*(undefined4 *)(param_3 + 0x224),0x17);
      iVar5 = FUN_005b3f60(local_1c,local_20,*(undefined4 *)(param_3 + 0x224),iVar5);
      bVar6 = iVar5 == 0;
    }
    local_10 = 1;
  }
LAB_0056eb78:
  if (((*(byte *)(param_3 + 0x1c) & 1) != 0) && (*(int *)(param_3 + 8) != 1)) {
    *(undefined4 *)(param_1 + 0x28c) = param_4;
    FUN_0056f0e0();
    local_14 = 0;
    local_c = **(int **)(param_1 + 0x740);
    if (0 < local_c) {
      do {
        piVar1 = *(int **)(param_1 + 0x740);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if ((local_14 < 0) || (iVar5 + -1 < local_14)) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(piVar1[2] + local_14 * 4);
        }
        if ((*(byte *)(iVar5 + 0xc) & 0x20) == 0) {
          if (param_2 == 0) {
            fVar7 = (float10)*(double *)(iVar5 + 0x20);
            if ((float10)_DAT_006106d0 == fVar7) {
              uVar3 = 0;
            }
            else if ((float10)_DAT_00610fd8 == fVar7) {
              uVar3 = 0xfffffd30;
            }
            else {
              log2(fVar7);
              uVar3 = ftol();
            }
            fVar7 = (float10)*(double *)(iVar5 + 0x28);
            fVar8 = (float10)_DAT_006106d0;
            *(undefined4 *)(iVar5 + 0x620) = uVar3;
            if (fVar8 == fVar7) {
              uVar3 = 0;
            }
            else {
LAB_0056ec78:
              if ((float10)_DAT_00610fd8 == fVar7) {
                uVar3 = 0xfffffd30;
              }
              else {
                log2(fVar7);
                if (fVar7 <= (float10)_DAT_006106d0) {
                  uVar3 = ftol();
                }
                else {
                  uVar3 = ftol();
                }
              }
            }
          }
          else {
            fVar7 = (float10)*(double *)(iVar5 + 0x628);
            if ((float10)_DAT_006106d0 == fVar7) {
              uVar3 = 0;
            }
            else if ((float10)_DAT_00610fd8 == fVar7) {
              uVar3 = 0xfffffd30;
            }
            else {
              log2(fVar7);
              uVar3 = ftol();
            }
            fVar7 = (float10)*(double *)(iVar5 + 0x630);
            fVar8 = (float10)_DAT_006106d0;
            *(undefined4 *)(iVar5 + 0x620) = uVar3;
            if (fVar8 != fVar7) goto LAB_0056ec78;
            uVar3 = 0;
          }
        }
        else {
          if (param_2 == 0) {
            fVar7 = (float10)*(double *)(iVar5 + 0x20);
            if ((float10)_DAT_006106d0 == fVar7) {
              uVar3 = 0;
            }
            else {
LAB_0056ed8a:
              if ((float10)_DAT_00610fd8 == fVar7) {
                uVar3 = 0xfffffd30;
              }
              else {
                log2(fVar7);
                uVar3 = ftol();
              }
            }
          }
          else {
            fVar7 = (float10)*(double *)(iVar5 + 0x628);
            if ((float10)_DAT_006106d0 != fVar7) goto LAB_0056ed8a;
            uVar3 = 0;
          }
          *(undefined4 *)(iVar5 + 0x620) = uVar3;
        }
        *(undefined4 *)(iVar5 + 0x624) = uVar3;
        if (((local_10 != 0) && (iVar5 != param_3)) && (iVar2 = *(int *)(iVar5 + 8), iVar2 != 1)) {
          if (iVar2 == 4) {
            local_18 = 1;
          }
          else if (iVar2 == 2) {
            local_18 = 4;
          }
          if (local_1c == 0) {
            FUN_004ea590(*(undefined4 *)(param_1 + 0x290),local_18,*(undefined4 *)(iVar5 + 0x224),
                         0x17);
          }
          else if ((local_20 != (LPCVOID)0x0) &&
                  (FUN_004ea590(*(undefined4 *)(param_1 + 0x290),local_18,
                                *(undefined4 *)(iVar5 + 0x224),0x17), !bVar6)) {
            iVar5 = FUN_005b3f60(local_1c,local_20,*(undefined4 *)(iVar5 + 0x224),local_18);
            bVar6 = iVar5 == 0;
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_c);
    }
    *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_3 + 0x620);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_3 + 0x624);
    *(undefined4 *)(param_1 + 0x280) = 1;
  }
  if (local_10 == 0) {
    return 0;
  }
  if (local_1c == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x290);
  }
  else {
    if ((local_20 == (LPCVOID)0x0) ||
       ((!bVar6 && (iVar5 = FUN_005b3fa0(local_1c,local_20), iVar5 == 0)))) goto LAB_0056eef9;
    uVar3 = *(undefined4 *)(param_1 + 0x290);
  }
  FUN_004eb2b0(uVar3);
LAB_0056eef9:
  FUN_004ea040(*(undefined4 *)(param_1 + 0x290),0);
  if (local_20 != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(local_20);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(local_20);
    GlobalFree(pvVar4);
  }
  return 0;
}


