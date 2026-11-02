/* Module: ednt3260.dll
   Function: FUN_630f7500
   Address: 630f7500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f7500(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  int *local_24;
  int *local_20;
  short *local_1c;
  int local_18;
  short *local_14;
  int local_10;
  int local_8;
  
  local_10 = 0;
  if (0 < *(short *)(param_1 + 0x6344)) {
    local_24 = (int *)(param_1 + 0xafe8);
    do {
      if ((short)*local_24 == 0) {
        FUN_630f92d0();
      }
      local_1c = (short *)0x0;
      do {
        iVar4 = (int)local_1c + 1;
        iVar10 = 1;
        if (iVar4 < 6) {
          iVar10 = 1;
          psVar5 = (short *)(param_1 + 0xafe8 + (local_10 + iVar4 * 5) * 2);
          do {
            if (*psVar5 != 0) break;
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + 1;
            psVar5 = psVar5 + 5;
          } while (iVar4 < 6);
        }
        iVar4 = local_10 + (int)local_1c * 5;
        iVar10 = iVar10 + (int)local_1c;
        iVar7 = (int)local_1c + 1;
        sVar1 = *(short *)(param_1 + 0x6408 + iVar4 * 2);
        sVar3 = *(short *)(param_1 + 0xb06c + iVar4 * 2);
        if (iVar7 < iVar10) {
          local_14 = (short *)(param_1 + (local_10 + ((int)local_1c + 0x17af) * 5) * 2);
          iVar12 = iVar10 - iVar7;
          local_20 = (int *)(param_1 + 0xb0d8 + (local_10 + iVar7 * 5) * 0x1fa);
          do {
            if (sVar1 != local_14[-0x4462]) {
              FUN_630f92d0();
            }
            if (sVar3 != local_14[-0x1e30]) {
              FUN_630f92d0();
            }
            local_8 = 0;
            if (0 < *(short *)(param_1 + 0xb06c + iVar4 * 2)) {
              psVar5 = (short *)(param_1 + 0xb0d8 + iVar4 * 0x1fa);
              piVar8 = local_20;
              do {
                if (*(short *)piVar8 < *psVar5) {
                  *psVar5 = *(short *)piVar8;
                }
                piVar8 = (int *)((int)piVar8 + 2);
                local_8 = local_8 + 1;
                psVar5 = psVar5 + 1;
              } while (local_8 < *(short *)(param_1 + 0xb06c + iVar4 * 2));
            }
            iVar7 = local_10 + ((int)local_1c + 0x17ae) * 5;
            if (*local_14 < *(short *)(param_1 + iVar7 * 2)) {
              *(short *)(param_1 + iVar7 * 2) = *local_14;
            }
            local_14 = local_14 + 5;
            local_20 = (int *)((int)local_20 + 0x9e2);
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        sVar1 = *(short *)(&DAT_63101af8 + *(short *)(param_1 + 0xafe8 + iVar4 * 2) * 2);
        sVar3 = (short)((*(short *)(param_1 + 0xb06c + iVar4 * 2) + -1) / (sVar1 * 3));
        *(short *)(param_1 + 0xec84 + iVar4 * 2) = sVar3;
        if ((int)sVar1 * (int)sVar3 * 3 < *(short *)(param_1 + 0xb06c + iVar4 * 2) + -1) {
          *(short *)(param_1 + 0xec84 + iVar4 * 2) = sVar3 + 1;
        }
        iVar7 = param_1 + iVar4 * 0x1fa;
        psVar5 = (short *)(iVar7 + 0xb0d8);
        FUN_630f7c30(psVar5,(short *)(iVar7 + 0xb0da),sVar1,
                     *(short *)(param_1 + 0xec84 + iVar4 * 2) * 3,0);
        local_18 = (int)local_1c + 1;
        if (local_18 < iVar10) {
          local_20 = (int *)(param_1 + 0xb0d8 + (local_10 + local_18 * 5) * 0x1fa);
          local_18 = iVar10 - local_18;
          puVar11 = (undefined2 *)(param_1 + (local_10 + ((int)local_1c + 0x17af) * 5) * 2);
          do {
            local_8 = 0;
            psVar6 = psVar5;
            piVar8 = local_20;
            if (0 < *(short *)(param_1 + 0xb06c + iVar4 * 2)) {
              do {
                *(short *)piVar8 = *psVar6;
                local_8 = local_8 + 1;
                psVar6 = psVar6 + 1;
                piVar8 = (int *)((int)piVar8 + 2);
              } while (local_8 < *(short *)(param_1 + 0xb06c + iVar4 * 2));
            }
            local_20 = (int *)((int)local_20 + 0x9e2);
            *puVar11 = *(undefined2 *)(param_1 + (local_10 + ((int)local_1c + 0x17ae) * 5) * 2);
            local_18 = local_18 + -1;
            puVar11 = puVar11 + 5;
          } while (local_18 != 0);
        }
        local_1c = (short *)iVar10;
      } while (iVar10 < 6);
      local_10 = local_10 + 1;
      local_24 = (int *)((int)local_24 + 2);
    } while (local_10 < *(short *)(param_1 + 0x6344));
  }
  if (*(short *)(param_1 + 0x6312) != 0) {
    if (*(short *)(param_1 + 0xb024) == 0) {
      FUN_630f92d0();
    }
    iVar4 = 0;
    do {
      iVar10 = iVar4 + 1;
      iVar7 = 1;
      if (iVar10 < 6) {
        psVar5 = (short *)(param_1 + 0xb024 + iVar10 * 2);
        do {
          if (*psVar5 != 0) break;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar10 < 6);
      }
      sVar1 = *(short *)(param_1 + 0xb0a8 + iVar4 * 2);
      iVar7 = iVar7 + iVar4;
      iVar10 = iVar4 + 1;
      if (iVar10 < iVar7) {
        local_24 = (int *)(param_1 + 0xb0a8 + iVar10 * 2);
        local_20 = (int *)(iVar7 - iVar10);
        psVar5 = (short *)(param_1 + (iVar4 + 0x10df) * 0xe);
        do {
          if (sVar1 != (short)*local_24) {
            FUN_630f92d0();
          }
          local_8 = 0;
          if (0 < *(short *)(param_1 + 0xb0a8 + iVar4 * 2)) {
            psVar6 = (short *)(param_1 + (iVar4 + 0x10de) * 0xe);
            psVar9 = psVar5;
            do {
              if (*psVar9 < *psVar6) {
                *psVar6 = *psVar9;
              }
              psVar9 = psVar9 + 1;
              local_8 = local_8 + 1;
              psVar6 = psVar6 + 1;
            } while (local_8 < *(short *)(param_1 + 0xb0a8 + iVar4 * 2));
          }
          local_24 = (int *)((int)local_24 + 2);
          psVar5 = psVar5 + 7;
          local_20 = (int *)((int)local_20 + -1);
        } while (local_20 != (int *)0x0);
      }
      sVar1 = *(short *)(&DAT_63101af8 + *(short *)(param_1 + 0xb024 + iVar4 * 2) * 2);
      psVar5 = (short *)(param_1 + (iVar4 + 0x10de) * 0xe);
      sVar3 = (short)((*(short *)(param_1 + 0xb0a8 + iVar4 * 2) + -1) / (sVar1 * 3));
      *(short *)(param_1 + 0xecc0 + iVar4 * 2) = sVar3;
      FUN_630f7c30(psVar5,(short *)(param_1 + 0xec26 + iVar4 * 0xe),sVar1,sVar3 * 3,0);
      if (iVar4 + 1 < iVar7) {
        local_24 = (int *)(param_1 + (iVar4 + 0x10df) * 0xe);
        local_20 = (int *)(iVar7 - (iVar4 + 1));
        do {
          local_8 = 0;
          psVar6 = psVar5;
          piVar8 = local_24;
          if (0 < *(short *)(param_1 + 0xb0a8 + iVar4 * 2)) {
            do {
              *(short *)piVar8 = *psVar6;
              local_8 = local_8 + 1;
              psVar6 = psVar6 + 1;
              piVar8 = (int *)((int)piVar8 + 2);
            } while (local_8 < *(short *)(param_1 + 0xb0a8 + iVar4 * 2));
          }
          local_24 = (int *)((int)local_24 + 0xe);
          local_20 = (int *)((int)local_20 + -1);
        } while (local_20 != (int *)0x0);
      }
      iVar4 = iVar7;
    } while (iVar7 < 6);
  }
  iVar4 = 0;
  psVar5 = (short *)(param_1 + 0x63fc);
  do {
    if (*psVar5 != 0) {
      if (*(short *)(param_1 + 0xafdc + iVar4 * 2) == 0) {
        FUN_630f92d0();
      }
      break;
    }
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    local_8 = 1;
    if (*(short *)(param_1 + 0x63fc + iVar4 * 2) != 0) {
      iVar10 = iVar4 + 1;
      if (iVar10 < 6) {
        local_8 = 1;
        psVar5 = (short *)(param_1 + 0x63fc + iVar10 * 2);
        do {
          if ((psVar5[0x25f0] != 0) || (*psVar5 == 0)) break;
          local_8 = local_8 + 1;
          iVar10 = iVar10 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar10 < 6);
      }
      sVar1 = *(short *)(param_1 + 0x6474 + iVar4 * 2);
      sVar3 = *(short *)(param_1 + 0x6468 + iVar4 * 2);
      iVar7 = local_8 + iVar4;
      iVar10 = iVar4 + 1;
      if (iVar10 < iVar7) {
        local_1c = (short *)(param_1 + 0x6474 + iVar10 * 2);
        local_24 = (int *)(param_1 + 0xb0c0 + iVar10 * 4);
        local_20 = (int *)(iVar7 - iVar10);
        do {
          if (sVar3 != local_1c[-6]) {
            FUN_630f92d0();
          }
          if (sVar1 != *local_1c) {
            FUN_630f92d0();
          }
          iVar10 = (int)*(short *)(param_1 + 0x6468 + iVar4 * 2);
          if (iVar10 < *(short *)(param_1 + 0x6474 + iVar4 * 2)) {
            do {
              iVar12 = *(int *)(param_1 + 0xb0c0 + iVar4 * 4);
              sVar2 = *(short *)(*local_24 + iVar10 * 2);
              if (sVar2 < *(short *)(iVar12 + iVar10 * 2)) {
                *(short *)(iVar12 + iVar10 * 2) = sVar2;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(short *)(param_1 + 0x6474 + iVar4 * 2));
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_20 = (int *)((int)local_20 + -1);
        } while (local_20 != (int *)0x0);
      }
      *(undefined2 *)(param_1 + 0xb0b4 + iVar4 * 2) = 0x18;
      sVar1 = *(short *)(&DAT_63101af8 + *(short *)(param_1 + 0xafdc + iVar4 * 2) * 2);
      sVar3 = (short)(((int)*(short *)(param_1 + 0x6474 + iVar4 * 2) -
                      (int)*(short *)(param_1 + 0x6468 + iVar4 * 2)) / (sVar1 * 3));
      *(short *)(param_1 + 0xec78 + iVar4 * 2) = sVar3;
      FUN_630f7c30((short *)(param_1 + 0xb0b4 + iVar4 * 2),
                   (short *)(*(int *)(param_1 + 0xb0c0 + iVar4 * 4) +
                            *(short *)(param_1 + 0x6468 + iVar4 * 2) * 2),sVar1,sVar3 * 3,1);
      iVar10 = iVar4 + 1;
      if (iVar10 < iVar7) {
        local_20 = (int *)(param_1 + 0xb0c0 + iVar10 * 4);
        local_24 = (int *)(param_1 + 0xb0b4 + iVar10 * 2);
        local_1c = (short *)(iVar7 - iVar10);
        do {
          *(undefined2 *)local_24 = *(undefined2 *)(param_1 + 0xb0b4 + iVar4 * 2);
          iVar10 = (int)*(short *)(param_1 + 0x6468 + iVar4 * 2);
          if (iVar10 < *(short *)(param_1 + 0x6474 + iVar4 * 2)) {
            do {
              *(undefined2 *)(*local_20 + iVar10 * 2) =
                   *(undefined2 *)(*(int *)(param_1 + 0xb0c0 + iVar4 * 4) + iVar10 * 2);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(short *)(param_1 + 0x6474 + iVar4 * 2));
          }
          local_24 = (int *)((int)local_24 + 2);
          local_20 = local_20 + 1;
          local_1c = (short *)((int)local_1c + -1);
        } while (local_1c != (short *)0x0);
      }
    }
    iVar4 = iVar4 + local_8;
    if (5 < iVar4) {
      return;
    }
  } while( true );
}


