/* Module: 50comupd.exe
   Function: FUN_010076db
   Address: 010076db
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010076db(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  bool bVar7;
  short local_2dc [256];
  short local_dc [94];
  byte local_20 [24];
  uint local_8;
  
  iVar4 = 0;
  do {
    uVar2 = FUN_010075b6(param_1,4);
    local_20[iVar4] = (byte)uVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  if (*(int *)(param_1 + 0x2ebc) == 0) {
    FUN_010084f4(param_1,0x14,(int)local_20,8,(undefined4 *)local_2dc,(int)local_dc);
    iVar4 = 0;
    if (0 < param_2) {
      do {
        sVar5 = local_2dc[*(uint *)(param_1 + 0x2eb0) >> 0x18];
        if (sVar5 < 0) {
          uVar2 = 0x800000;
          do {
            if ((*(uint *)(param_1 + 0x2eb0) & uVar2) == 0) {
              sVar5 = local_dc[-sVar5 * 2];
            }
            else {
              sVar5 = local_dc[-sVar5 * 2 + 1];
            }
            uVar2 = uVar2 >> 1;
          } while (sVar5 < 0);
        }
        local_8 = (int)sVar5;
        FUN_01007517(param_1,local_20[sVar5]);
        if (*(int *)(param_1 + 0x2ebc) != 0) goto LAB_01007917;
        if (sVar5 == 0x11) {
          uVar2 = FUN_010075b6(param_1,4);
          local_8 = (uVar2 & 0xff) + 4;
          if (param_2 <= (int)(local_8 + iVar4)) {
            local_8 = param_2 - iVar4;
          }
          if (0 < (int)local_8) {
            puVar6 = (undefined4 *)(iVar4 + param_4);
            for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            iVar4 = iVar4 + local_8;
            for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
              *(undefined1 *)puVar6 = 0;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
          }
LAB_01007822:
          iVar4 = iVar4 + -1;
        }
        else {
          if (sVar5 == 0x12) {
            uVar2 = FUN_010075b6(param_1,5);
            uVar2 = (uVar2 & 0xff) + 0x14;
            if (param_2 <= (int)(uVar2 + iVar4)) {
              uVar2 = param_2 - iVar4;
            }
            if (0 < (int)uVar2) {
              puVar6 = (undefined4 *)(iVar4 + param_4);
              for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              iVar4 = iVar4 + uVar2;
              for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
                *(undefined1 *)puVar6 = 0;
                puVar6 = (undefined4 *)((int)puVar6 + 1);
              }
            }
            goto LAB_01007822;
          }
          if (sVar5 == 0x13) {
            uVar2 = FUN_010075b6(param_1,1);
            uVar2 = (uVar2 & 0xff) + 4;
            if (param_2 <= (int)(uVar2 + iVar4)) {
              uVar2 = param_2 - iVar4;
            }
            sVar5 = local_2dc[*(uint *)(param_1 + 0x2eb0) >> 0x18];
            if (sVar5 < 0) {
              uVar3 = 0x800000;
              do {
                if ((*(uint *)(param_1 + 0x2eb0) & uVar3) == 0) {
                  sVar5 = local_dc[-sVar5 * 2];
                }
                else {
                  sVar5 = local_dc[-sVar5 * 2 + 1];
                }
                uVar3 = uVar3 >> 1;
              } while (sVar5 < 0);
            }
            FUN_01007517(param_1,local_20[sVar5]);
            uVar1 = (&DAT_010015d1)[(uint)*(byte *)(iVar4 + param_3) - (int)sVar5];
            if (0 < (int)uVar2) {
              local_8 = uVar2;
              puVar6 = (undefined4 *)(iVar4 + param_4);
              for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar6 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                puVar6 = puVar6 + 1;
              }
              iVar4 = iVar4 + uVar2;
              for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
                *(undefined1 *)puVar6 = uVar1;
                puVar6 = (undefined4 *)((int)puVar6 + 1);
              }
            }
            iVar4 = iVar4 + -1;
          }
          else {
            *(undefined *)(iVar4 + param_4) = (&DAT_010015d1)[*(byte *)(iVar4 + param_3) - local_8];
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
    }
    bVar7 = *(int *)(param_1 + 0x2ebc) == 0;
  }
  else {
LAB_01007917:
    bVar7 = false;
  }
  return bVar7;
}


