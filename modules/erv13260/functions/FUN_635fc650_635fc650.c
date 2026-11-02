/* Module: erv13260.dll
   Function: FUN_635fc650
   Address: 635fc650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_635fc650(int *param_1,byte param_2,int *param_3,byte *param_4,uint *param_5,int *param_6,
            uint *param_7,int *param_8)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined2 uVar12;
  uint *_Memory;
  int *_Memory_00;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint local_44;
  byte *local_40;
  int local_38;
  int local_2c;
  undefined4 *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar11 = param_5;
  pbVar10 = param_4;
  iVar4 = *param_6;
  iVar5 = param_6[1];
  iVar6 = *(int *)((int)param_6 + 0x23cb);
  piVar7 = (int *)param_6[0x74d];
  iVar1 = (int)param_6 + 0x5a;
  _Memory = malloc(0x600);
  _Memory_00 = malloc(0x600);
  if ((*(int *)((int)param_6 + 0x56) != 0) || (bVar8 = false, *(int *)((int)param_6 + 0x52) != 0)) {
    bVar8 = true;
  }
  iVar13 = *(int *)((int)param_6 + 0x1d5f) * 8;
  if ((param_6[0x73c] != 0) && (0 < iVar5)) {
    local_28 = (undefined4 *)((int)param_6 + 0x6b);
    local_38 = iVar5;
    do {
      if (0 < iVar4) {
        puVar17 = local_28;
        for (uVar15 = (iVar4 * 3 & 0x7fffffffU) >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        for (iVar16 = (iVar4 * 3 & 1U) << 1; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(undefined1 *)puVar17 = 0;
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
      }
      local_28 = local_28 + 0x3c;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  uVar15 = param_6[9] + 1;
  do {
    if ((uVar15 <= (uint)param_6[9]) && ((int)uVar15 < 0x80001)) {
      free(_Memory);
      free(_Memory_00);
      *(int *)((int)param_6 + 0x1d63) = (int)(local_18 + (local_18 >> 0x1f & 7U)) >> 3;
      return 0;
    }
    if (0x1f < param_2) {
      free(_Memory);
      free(_Memory_00);
      return 3;
    }
    *puVar11 = 0;
    *pbVar10 = 0;
    local_18 = 0;
    *(undefined4 *)((int)param_6 + 0x1ca7) = 0;
    *(undefined4 *)((int)param_6 + 0x1cab) = 0;
    *(undefined4 *)((int)param_6 + 0x1caf) = 0;
    local_28 = (undefined4 *)0x0;
    local_1c = 0;
    local_1c._0_2_ = 0;
    bVar9 = false;
    param_5 = param_7;
    FUN_635f2090((int)param_6 + 0x1cd3);
    FUN_635fb4d0(piVar7);
    *(byte *)((int)param_6 + 0x1d53) = param_2;
    iVar16 = FUN_635fb6b0(0,0,iVar1,param_6[8],(int *)((int)param_6 + 0x1cd3));
    piVar7[6] = piVar7[6] + iVar16;
    local_14 = 0;
    if (0 < iVar5) {
      do {
        param_4 = (byte *)0x0;
        if (0 < iVar4) {
          local_20 = 0;
          local_2c = local_14 * iVar4;
          do {
            if (param_4 == (byte *)(iVar4 + -1)) {
              local_40 = (byte *)0x0;
              iVar16 = local_14 + 1;
            }
            else {
              local_40 = param_4 + 1;
              iVar16 = local_14;
            }
            uVar15 = FUN_635fb5e0(piVar7);
            if (((uint)param_6[9] < uVar15) || (0x80000 < (int)uVar15)) {
              *(undefined4 *)((int)param_6 + 0x1cd7) = 0;
              goto LAB_635fcc6a;
            }
            piVar7[0xb] = piVar7[0xb] + 1;
            FUN_635fcd10(local_20,local_14 << 4,param_1,_Memory,iVar6);
            FUN_635fcd60(local_20,local_14 << 4,(int)param_1,(int)_Memory,(int)param_6);
            if (*param_8 == 0) {
              FUN_635fe8a0((int *)_Memory,(int)param_5);
            }
            local_44 = (uint)param_2;
            FUN_635fe930((int)_Memory_00,param_5,(uint)param_2,3);
            param_5 = param_5 + 0x180;
            uVar15 = FUN_635fad90((int)_Memory_00,3,0x40);
            if (param_6[0x73c] != 0) {
              uVar12 = CONCAT11(param_2,param_2);
              puVar17 = (undefined4 *)((int)param_6 + (int)(param_4 + local_14 * 0x28) * 6 + 0x6b);
              *puVar17 = CONCAT22(uVar12,uVar12);
              *(undefined2 *)(puVar17 + 1) = uVar12;
            }
            FUN_635fa3f0(3,0,uVar15,(int)piVar7,iVar1,
                         *(char *)(*(int *)((int)param_6 + 0x1d5b) + local_2c),
                         (int *)((int)param_6 + 0x1cd3));
            FUN_635fa550((uint)_Memory_00,(uint *)0x3,(byte)uVar15,piVar7,0x40,iVar1,
                         (int *)((int)param_6 + 0x1cd3));
            if (iVar13 != 0) {
              iVar14 = FUN_635fb5e0(piVar7);
              local_1c = local_1c + 1;
              if (iVar13 + -0x96 < iVar14 - (int)local_28) {
                uVar15 = FUN_635f2160((int *)((int)param_6 + 0x1cd3));
                iVar14 = (iVar14 - (int)local_28) + uVar15;
                piVar7[6] = piVar7[6] + uVar15;
                if (local_18 < iVar14) {
                  local_18 = iVar14;
                }
                local_28 = (undefined4 *)((int)local_28 + iVar14);
                puVar11[*pbVar10 + 1] = (int)((int)local_28 + ((int)local_28 >> 0x1f & 7U)) >> 3;
                iVar14 = *(int *)((int)param_6 + 0x1cd3);
                *(char *)(puVar11[*pbVar10] + 6 + iVar14) = (char)local_1c;
                pbVar2 = (byte *)(puVar11[*pbVar10] + 5 + iVar14);
                *pbVar2 = *pbVar2 | (byte)((uint)local_1c >> 8) & 0xf;
                *(char *)(puVar11[*pbVar10] + 1 + iVar14) = (char)param_6[0x729];
                *(undefined1 *)(puVar11[*pbVar10] + 2 + iVar14) =
                     *(undefined1 *)((int)param_6 + 0x1ca5);
                *(undefined1 *)(puVar11[*pbVar10] + 3 + iVar14) =
                     *(undefined1 *)((int)param_6 + 0x1ca6);
                *(undefined4 *)((int)param_6 + 0x1ca7) = 0;
                *(undefined4 *)((int)param_6 + 0x1cab) = 0;
                *(undefined4 *)((int)param_6 + 0x1caf) = 0;
                local_1c = 0;
                if (iVar16 < iVar5) {
                  bVar3 = *pbVar10;
                  *pbVar10 = bVar3 + 1;
                  if (0x80 < (byte)(bVar3 + 1)) {
                    free(_Memory);
                    free(_Memory_00);
                    return 2;
                  }
                  iVar16 = FUN_635fb6b0((int)local_40,iVar16,iVar1,param_6[8],
                                        (int *)((int)param_6 + 0x1cd3));
                  piVar7[6] = piVar7[6] + iVar16;
                }
                else {
                  bVar9 = true;
                }
              }
            }
            FUN_635feab0(_Memory_00,_Memory,local_44,3);
            FUN_635fd6e0((int)_Memory);
            FUN_635fce00((int)param_4,local_14,(int)_Memory,param_3,(int)param_6);
            param_4 = param_4 + 1;
            local_2c = local_2c + 1;
            local_20 = local_20 + 0x10;
          } while ((int)param_4 < iVar4);
        }
        local_14 = local_14 + 1;
      } while (local_14 < iVar5);
    }
    *(float *)(param_6[0x750] + 0xc) = (float)param_2;
    if (iVar13 != 0) {
      iVar16 = FUN_635fb5e0(piVar7);
      uVar15 = FUN_635f2160((int *)((int)param_6 + 0x1cd3));
      iVar16 = (iVar16 - (int)local_28) + uVar15;
      if (local_18 < iVar16) {
        local_18 = iVar16;
      }
      piVar7[6] = piVar7[6] + uVar15;
      iVar16 = *(int *)((int)param_6 + 0x1cd3);
      puVar11[*pbVar10 + 1] = *(uint *)((int)param_6 + 0x1cd7);
      if ((*(int *)((int)param_6 + 0x1d6f) != 0) ||
         (((*pbVar10 != 0 && (param_6[0x724] != 0)) && (bVar8)))) {
        piVar7[0xd] = local_18;
      }
      if (*pbVar10 == 0) {
        *(char *)(iVar16 + 1 + *puVar11) = (char)param_6[0x729];
        *(undefined1 *)(puVar11[*pbVar10] + 2 + iVar16) = *(undefined1 *)((int)param_6 + 0x1ca5);
        *(undefined1 *)(puVar11[*pbVar10] + 3 + iVar16) = *(undefined1 *)((int)param_6 + 0x1ca6);
        FUN_635f2190(3,5,(int *)((int)param_6 + 0x1cd3));
        piVar7[6] = piVar7[6] + -0x18;
      }
      else if (!bVar9) {
        *(char *)(puVar11[*pbVar10] + 6 + iVar16) = (char)(undefined2)local_1c;
        pbVar2 = (byte *)(puVar11[*pbVar10] + 5 + iVar16);
        *pbVar2 = *pbVar2 | (byte)((ushort)(undefined2)local_1c >> 8) & 0xf;
        *(char *)(puVar11[*pbVar10] + 1 + iVar16) = (char)param_6[0x729];
        *(undefined1 *)(puVar11[*pbVar10] + 2 + iVar16) = *(undefined1 *)((int)param_6 + 0x1ca5);
        *(undefined1 *)(puVar11[*pbVar10] + 3 + iVar16) = *(undefined1 *)((int)param_6 + 0x1ca6);
      }
    }
    else {
      uVar15 = FUN_635f2160((int *)((int)param_6 + 0x1cd3));
      piVar7[6] = piVar7[6] + uVar15;
    }
    *param_8 = 1;
LAB_635fcc6a:
    param_2 = param_2 + 1;
    uVar15 = FUN_635fb5e0(piVar7);
  } while( true );
}


