/* Module: vegas30.exe
   Function: FUN_005f1580
   Address: 005f1580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005f16ec) */
/* WARNING: Removing unreachable block (ram,0x005f164b) */
/* WARNING: Removing unreachable block (ram,0x005f170c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f1580(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int local_40;
  uint local_30;
  int iStack_2c;
  uint local_28;
  int local_24;
  
  iVar4 = 0;
  if ((*(int *)(param_1 + 0x14c) != 0) && ((*(byte *)(param_1 + 0x134) & 0x20) == 0)) {
    piVar5 = *(int **)(param_1 + 0x130);
    if (piVar5 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar5;
    }
    local_30 = 0;
    iStack_2c = 0;
    lVar3 = 0;
    if (0 < iVar6) {
      piVar5 = (int *)piVar5[2];
      iVar7 = iVar6;
      do {
        iVar1 = *piVar5;
        if ((((*(byte *)(iVar1 + 0x8c) & 2) == 0) && (*(int *)(iVar1 + 4) == 3)) &&
           (_DAT_00610fd8 < *(double *)(iVar1 + 0x48))) {
          iVar2 = *(int *)(iVar1 + 0x24);
          if ((iVar4 <= iVar2) &&
             ((iVar4 < iVar2 || (iVar4 = iStack_2c, local_30 <= *(uint *)(iVar1 + 0x20))))) {
            iVar4 = iVar2;
            local_30 = *(uint *)(iVar1 + 0x20);
            iStack_2c = iVar2;
          }
          lVar8 = ftol();
          if (lVar3 <= lVar8) {
            lVar3 = lVar8;
          }
        }
        local_24 = (int)((ulonglong)lVar3 >> 0x20);
        local_28 = (uint)lVar3;
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (local_30 != 0 || iVar4 != 0) {
        local_40 = 0;
        do {
          iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x130) + 8) + local_40 * 4);
          if (((*(byte *)(iVar7 + 0x8c) & 2) == 0) && (*(int *)(iVar7 + 4) == 2)) {
            if (*(int *)(*(int *)(iVar7 + 0x2c) + 4) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = ftol();
            }
            if ((CONCAT44((iVar4 - local_24) - (uint)(local_30 < local_28),local_30 - local_28) <=
                 lVar8) && (lVar8 <= lVar3 + CONCAT44(iStack_2c,local_30))) {
              uVar9 = ftol();
              *(undefined8 *)(iVar7 + 0x50) = uVar9;
              if (*(int *)(*(int *)(iVar7 + 0x2c) + 4) == 0) {
                *(undefined4 *)(iVar7 + 0x20) = 0;
                *(undefined4 *)(iVar7 + 0x24) = 0;
              }
              else {
                uVar9 = ftol();
                *(undefined8 *)(iVar7 + 0x20) = uVar9;
              }
            }
            iVar4 = iStack_2c;
            if ((iStack_2c <= *(int *)(iVar7 + 0x24)) &&
               ((iStack_2c < *(int *)(iVar7 + 0x24) || (local_30 < *(uint *)(iVar7 + 0x20))))) {
              iVar1 = *(int *)(iVar7 + 0x50);
              *(int *)(iVar7 + 0x50) = iVar1 + -1;
              *(uint *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + -1 + (uint)(iVar1 != 0);
              if (*(int *)(*(int *)(iVar7 + 0x2c) + 4) == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = ftol();
              }
              *(undefined8 *)(iVar7 + 0x20) = uVar9;
            }
          }
          local_40 = local_40 + 1;
        } while (local_40 < iVar6);
      }
    }
  }
  return;
}


