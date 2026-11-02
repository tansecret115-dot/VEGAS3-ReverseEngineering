/* Module: vidcap30.exe
   Function: FUN_00471730
   Address: 00471730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004718d0) */
/* WARNING: Removing unreachable block (ram,0x00471803) */
/* WARNING: Removing unreachable block (ram,0x004718ac) */
/* WARNING: Removing unreachable block (ram,0x00471941) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00471730(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int local_40;
  uint local_30;
  int iStack_2c;
  uint local_28;
  int local_24;
  
  if ((*(int *)(param_1 + 0x134) != 0) && ((*(byte *)(param_1 + 0x124) & 0x20) == 0)) {
    piVar5 = *(int **)(param_1 + 0x120);
    if (piVar5 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar5;
    }
    local_30 = 0;
    iStack_2c = 0;
    lVar8 = 0;
    local_24 = 0;
    if (0 < iVar3) {
      piVar5 = (int *)piVar5[2];
      iVar4 = iVar3;
      do {
        local_28 = (uint)lVar8;
        iVar1 = *piVar5;
        if ((((*(byte *)(iVar1 + 0x8c) & 2) == 0) && (*(int *)(iVar1 + 4) == 2)) &&
           (_DAT_00589f10 < *(double *)(iVar1 + 0x48))) {
          iVar2 = *(int *)(iVar1 + 0x24);
          if ((iStack_2c <= iVar2) && ((iStack_2c < iVar2 || (local_30 <= *(uint *)(iVar1 + 0x20))))
             ) {
            local_30 = *(uint *)(iVar1 + 0x20);
            iStack_2c = iVar2;
          }
          lVar6 = ftol();
          lVar8 = CONCAT44(local_24,local_28);
          if (CONCAT44(local_24,local_28) <= lVar6) {
            local_24 = (int)((ulonglong)lVar6 >> 0x20);
            lVar8 = lVar6;
          }
        }
        local_28 = (uint)lVar8;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (local_30 != 0 || iStack_2c != 0) {
        local_40 = 0;
        iVar4 = (int)((ulonglong)lVar8 >> 0x20);
        do {
          iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x120) + 8) + local_40 * 4);
          if (((*(byte *)(iVar1 + 0x8c) & 2) == 0) && (*(int *)(iVar1 + 4) == 1)) {
            if (*(int *)(*(int *)(iVar1 + 0x2c) + 4) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = ftol();
            }
            if ((CONCAT44((iStack_2c - iVar4) - (uint)(local_30 < local_28),local_30 - local_28) <=
                 lVar8) &&
               (lVar8 <= CONCAT44(iVar4 + iStack_2c + (uint)CARRY4(local_28,local_30),
                                  local_28 + local_30))) {
              uVar7 = ftol();
              iVar4 = *(int *)(iVar1 + 0x2c);
              *(undefined8 *)(iVar1 + 0x50) = uVar7;
              if (*(int *)(iVar4 + 4) == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = ftol();
              }
              *(longlong *)(iVar1 + 0x20) = lVar8;
              if (CONCAT44(iStack_2c,local_30) < lVar8) {
                iVar2 = *(int *)(iVar1 + 0x50);
                *(int *)(iVar1 + 0x50) = iVar2 + -1;
                *(uint *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1 + (uint)(iVar2 != 0);
                if (*(int *)(iVar4 + 4) == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = ftol();
                }
                *(undefined8 *)(iVar1 + 0x20) = uVar7;
              }
            }
          }
          local_40 = local_40 + 1;
          iVar4 = local_24;
        } while (local_40 < iVar3);
      }
    }
  }
  return;
}


