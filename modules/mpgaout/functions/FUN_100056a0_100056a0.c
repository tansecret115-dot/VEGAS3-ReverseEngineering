/* Module: mpgaout.dll
   Function: FUN_100056a0
   Address: 100056a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100056a0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  uVar4 = *(uint *)(param_4 + 0x10);
  uVar11 = *(uint *)(param_4 + 0x18);
  uVar5 = *(uint *)(param_4 + 0x14);
  iVar6 = *(int *)(param_4 + 8);
  FUN_1000ac58(*(int *)(param_1 + 0x44e00),0x400);
  piVar7 = *(int **)(param_1 + 0x44e00);
  local_2c = (undefined1 *)(piVar7[10] + *piVar7);
  local_30 = 8 - piVar7[0xb];
  local_34 = piVar7[9];
  local_18 = 0;
  do {
    local_14 = 0;
    uVar15 = local_18 + 1;
    do {
      local_10 = 0;
      uVar12 = local_14 + 3;
      if (uVar11 != 0) {
LAB_10005764:
        uVar9 = local_10 + 1;
        uVar1 = 0;
LAB_100058b3:
        uVar16 = uVar1;
        if (local_10 < uVar5) {
          if (uVar4 <= uVar16) goto LAB_100058d4;
        }
        else if (uVar16 != 0) goto LAB_100058d4;
        iVar13 = local_10 * 4;
        iVar3 = uVar16 * 0x80 + iVar13;
        iVar8 = *(int *)(param_3 + iVar3);
        uVar1 = uVar16 + 1;
        if (iVar8 != 0) {
          iVar8 = local_10 * 0x100 + iVar8 * 0x10;
          if (*(int *)(iVar6 + 8 + iVar8) == 3) {
            uVar14 = 0;
            do {
              iVar8 = *(int *)(iVar6 + 4 + *(int *)(param_3 + iVar3) * 0x10 + local_10 * 0x100);
              iVar10 = local_14 + uVar14;
              local_30 = local_30 + iVar8;
              uVar14 = uVar14 + 1;
              local_34 = local_34 << ((byte)iVar8 & 0x1f) |
                         *(uint *)(local_18 * 0x600 + uVar16 * 0x1200 + param_2 +
                                  iVar10 * 0x80 + iVar13);
              while (7 < (int)local_30) {
                local_30 = local_30 - 8;
                *local_2c = (char)(local_34 >> ((byte)local_30 & 0x1f));
                local_2c = local_2c + 1;
              }
            } while (uVar14 < 3);
          }
          else {
            iVar13 = local_14 * 0x80 + iVar13;
            iVar3 = *(int *)(iVar6 + iVar8);
            iVar10 = uVar16 * 0x1200 + param_2 + local_18 * 0x600;
            iVar8 = *(int *)(iVar6 + 4 + iVar8);
            local_30 = local_30 + iVar8;
            local_34 = local_34 << ((byte)iVar8 & 0x1f) |
                       iVar3 * *(int *)(iVar13 + 0x100 + iVar10) * iVar3 +
                       iVar3 * *(int *)(iVar13 + 0x80 + iVar10) + *(int *)(iVar10 + iVar13);
            while (7 < (int)local_30) {
              local_30 = local_30 - 8;
              *local_2c = (char)(local_34 >> ((byte)local_30 & 0x1f));
              local_2c = local_2c + 1;
            }
          }
        }
        goto LAB_100058b3;
      }
LAB_100058e8:
      local_14 = uVar12;
    } while (uVar12 < 0xc);
    local_18 = uVar15;
    if (2 < uVar15) {
      piVar7 = *(int **)(param_1 + 0x44e00);
      uVar11 = (local_30 - 8) + (int)(local_2c + (-piVar7[10] - *piVar7)) * 8 + piVar7[0xb];
      puVar2 = (uint *)(piVar7 + 0xe);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + uVar11;
      piVar7[0xf] = piVar7[0xf] + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar4,uVar11);
      (*(int **)(param_1 + 0x44e00))[10] = (int)local_2c - **(int **)(param_1 + 0x44e00);
      *(uint *)(*(int *)(param_1 + 0x44e00) + 0x2c) = 8 - (local_30 & 7);
      *(uint *)(*(int *)(param_1 + 0x44e00) + 0x24) = local_34 & 0xff;
      return;
    }
  } while( true );
LAB_100058d4:
  local_10 = uVar9;
  if (uVar11 <= uVar9) goto LAB_100058e8;
  goto LAB_10005764;
}


