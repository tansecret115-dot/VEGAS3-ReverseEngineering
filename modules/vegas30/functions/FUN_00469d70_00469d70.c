/* Module: vegas30.exe
   Function: FUN_00469d70
   Address: 00469d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00469d70(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int param_5,
                uint param_6,int param_7,int param_8,int *param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  HCURSOR pHVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 local_50;
  int local_4c;
  int local_48;
  uint local_3c;
  int local_38;
  int local_30;
  int local_2c;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  iVar1 = *param_2;
  local_8 = 0;
  if (iVar1 < 1) {
    return 1;
  }
  FUN_0060ac30();
  local_30 = 0;
  if (0 < iVar1) {
    do {
      if (((param_9 != (int *)0x0) && (*param_9 == 0)) &&
         (uVar4 = _SfGetMillisec_0(), param_8 + 500U < uVar4)) {
        pHVar5 = (HCURSOR)_SfGetUICursor_4(0x7f02);
        pHVar5 = SetCursor(pHVar5);
        *param_9 = (int)pHVar5;
      }
      iVar12 = *(int *)(param_2[2] + local_30 * 4);
      uVar4 = *(uint *)(iVar12 + 0x18);
      uVar2 = *(undefined4 *)(*(int *)(iVar12 + 8) + 8);
      iVar7 = *(int *)(iVar12 + 0x1c);
      iVar6 = iVar7 + *(int *)(iVar12 + 0x24) + (uint)CARRY4(uVar4,*(uint *)(iVar12 + 0x20));
      local_10 = iVar12;
      if ((param_5 <= iVar6) && ((param_5 < iVar6 || (param_4 < uVar4 + *(uint *)(iVar12 + 0x20)))))
      {
        iVar6 = param_5 + param_7 + (uint)CARRY4(param_4,param_6);
        if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || (uVar4 < param_4 + param_6)))) {
          iVar7 = FUN_005c68e0(iVar12);
          local_14 = iVar7;
          uVar8 = FUN_005c6950(iVar12);
          if (iVar7 < 1) {
            iVar7 = 1;
          }
          if (*(LPCSTR *)(iVar12 + 0xc) == (LPCSTR)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = lstrlenA(*(LPCSTR *)(iVar12 + 0xc));
            iVar6 = iVar6 + 1;
          }
          local_8 = _SfList_AllocItem_12(param_3,iVar6 + 0x224 + iVar7 * 4,&local_1c);
          puVar3 = local_1c;
          if (local_1c == (undefined4 *)0x0) {
            return -0x7ff8fff2;
          }
          uVar4 = param_4 - *(uint *)(iVar12 + 0x18);
          iVar7 = (param_5 - *(int *)(iVar12 + 0x1c)) - (uint)(param_4 < *(uint *)(iVar12 + 0x18));
          local_3c = uVar4;
          local_38 = iVar7;
          if ((iVar7 < 1) && (iVar7 < 0)) {
            local_3c = 0;
            local_38 = 0;
          }
          uVar11 = uVar4 + param_6;
          uVar10 = *(uint *)(iVar12 + 0x20);
          iVar6 = iVar7 + param_7 + (uint)CARRY4(uVar4,param_6);
          iVar7 = *(int *)(iVar12 + 0x24);
          if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || (uVar10 < uVar11)))) {
            iVar6 = iVar7;
            uVar11 = uVar10;
          }
          if ((local_3c != 0) || (local_50 = 0x80000000, local_38 != 0)) {
            local_50 = 0;
          }
          if ((uVar10 == uVar11) && (iVar7 == iVar6)) {
            local_4c = -1;
            local_48 = 0x7fffffff;
          }
          else {
            local_4c = uVar11 - local_3c;
            local_48 = (iVar6 - local_38) - (uint)(uVar11 < local_3c);
          }
          puVar9 = local_1c;
          for (iVar7 = 0x8a; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          *local_1c = 0x31;
          local_1c[1] = *(undefined4 *)(iVar12 + 4);
          local_1c[4] = *(undefined4 *)(*(int *)(iVar12 + 8) + 0x18);
          local_1c[3] = 0xffffffff;
          local_20 = 0;
          iVar7 = FUN_005d9be0(uVar2,&local_20,iVar12);
          iVar12 = local_10;
          if (iVar7 != 0) {
            puVar3[3] = local_20;
          }
          uVar4 = *(uint *)(local_10 + 0x18);
          iVar7 = *(int *)(local_10 + 0x1c);
          puVar3[8] = uVar4 + local_3c;
          puVar3[10] = uVar11 - local_3c;
          puVar3[9] = iVar7 + local_38 + (uint)CARRY4(uVar4,local_3c);
          puVar3[0xb] = (iVar6 - local_38) - (uint)(uVar11 < local_3c);
          puVar3[0xe] = *(undefined4 *)(local_10 + 0x28);
          puVar3[0xf] = *(undefined4 *)(local_10 + 0x2c);
          puVar3[6] = *(undefined4 *)(local_10 + 0x10);
          puVar9 = (undefined4 *)(local_10 + 0x58);
          puVar15 = puVar3 + 0x10;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar15 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar3[0x21] = local_14;
          puVar3[0x20] = uVar8;
          if (*(int *)(local_10 + 0xc) != 0) {
            puVar3[0x23] = puVar3 + local_14 + 0x88;
            _mbscpy((uchar *)(puVar3 + local_14 + 0x88),*(uchar **)(local_10 + 0xc));
          }
          iVar7 = FUN_005ec620();
          local_2c = 0;
          if (0 < local_14) {
            local_18 = puVar3 + 0x88;
            do {
              puVar9 = (undefined4 *)FUN_005c6910(iVar12,local_2c);
              if (puVar9 != (undefined4 *)0x0) {
                local_c = calloc(1,0x28);
                *local_18 = local_c;
                if (local_c == (undefined4 *)0x0) {
                  local_8 = -0x7ff8fff2;
                  goto LAB_0046a3c2;
                }
                puVar15 = puVar9;
                puVar16 = local_c;
                for (iVar12 = 10; iVar12 != 0; iVar12 = iVar12 + -1) {
                  *puVar16 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar16 = puVar16 + 1;
                }
                if (iVar7 != 0) {
                  FUN_005ed3f0(local_c[6]);
                }
                local_c[8] = 0;
                local_c[1] = 0;
                if (puVar9[8] != 0) {
                  FUN_005c69a0(local_c,puVar9[8]);
                }
                uVar4 = local_c[2];
                uVar10 = local_c[4];
                local_c[2] = uVar4 + local_3c;
                local_c[4] = uVar10 - local_3c;
                iVar13 = (local_c[5] - local_38) - (uint)(uVar10 < local_3c);
                local_c[3] = local_c[3] + local_38 + (uint)CARRY4(uVar4,local_3c);
                local_c[5] = iVar13;
                iVar12 = puVar3[0xb];
                uVar4 = local_c[4];
                if ((iVar12 < iVar13) || ((iVar12 <= iVar13 && ((uint)puVar3[10] <= uVar4)))) {
                  iVar13 = iVar12;
                  uVar4 = puVar3[10];
                }
                local_c[4] = uVar4;
                local_c[5] = iVar13;
                iVar12 = local_10;
              }
              local_2c = local_2c + 1;
              local_18 = local_18 + 1;
            } while (local_2c < local_14);
          }
          if (local_8 < 0) {
LAB_0046a3c2:
            _SfList_DeleteList_16(param_3,0xffffffff,0xffffffff,0);
            return local_8;
          }
          FUN_0047de20(puVar3 + 0x24,iVar12 + 0x98,0,local_3c,local_38,0xffffffff);
          FUN_0047c870(puVar3 + 0x24,puVar3[10],puVar3[0xb]);
          uVar4 = *(uint *)(iVar12 + 0x40);
          iVar7 = *(int *)(iVar12 + 0x44);
          puVar3[0xc] = uVar4 - local_3c;
          iVar7 = (iVar7 - local_38) - (uint)(uVar4 < local_3c);
          puVar3[0xd] = iVar7;
          if ((iVar7 < 0) ||
             (((int)puVar3[0xb] <= iVar7 &&
              (((int)puVar3[0xb] < iVar7 || ((uint)puVar3[10] <= (uint)puVar3[0xc])))))) {
            puVar3[0xc] = 0;
            puVar3[0xd] = 0;
          }
          uVar4 = puVar3[0x18];
          if (uVar4 != 0 || puVar3[0x19] != 0) {
            uVar10 = uVar4 - local_3c;
            iVar7 = (puVar3[0x19] - local_38) - (uint)(uVar4 < local_3c);
            if ((iVar7 < 1) && (iVar7 < 0)) {
              puVar3[0x18] = 0;
              puVar3[0x19] = 0;
            }
            else {
              if (((int)puVar3[0xb] <= iVar7) &&
                 (((int)puVar3[0xb] < iVar7 || ((uint)puVar3[10] < uVar10)))) {
                iVar7 = puVar3[0xb];
                uVar10 = puVar3[10];
              }
              puVar3[0x18] = uVar10;
              puVar3[0x19] = iVar7;
            }
          }
          uVar4 = puVar3[0x1a];
          if (uVar4 != 0 || puVar3[0x1b] != 0) {
            uVar14 = uVar4 - *(uint *)(iVar12 + 0x20);
            uVar10 = uVar14 + uVar11;
            iVar7 = ((puVar3[0x1b] - *(int *)(iVar12 + 0x24)) -
                    (uint)(uVar4 < *(uint *)(iVar12 + 0x20))) + iVar6 + (uint)CARRY4(uVar14,uVar11);
            if ((iVar7 < 1) && (iVar7 < 0)) {
              iVar7 = 0;
              uVar10 = 0;
            }
            else {
              uVar4 = puVar3[10] - puVar3[0x18];
              iVar6 = (puVar3[0xb] - puVar3[0x19]) - (uint)((uint)puVar3[10] < (uint)puVar3[0x18]);
              if ((iVar6 <= iVar7) && ((iVar6 < iVar7 || (uVar4 < uVar10)))) {
                iVar7 = iVar6;
                uVar10 = uVar4;
              }
            }
            puVar3[0x1a] = uVar10;
            puVar3[0x1b] = iVar7;
          }
          if (puVar3[1] == 2) {
            puVar3[0x3c] = *(undefined4 *)(iVar12 + 0xf8);
            puVar3[0x3d] = *(undefined4 *)(iVar12 + 0xfc);
          }
          if (puVar3[1] == 3) {
            puVar3[0x40] = *(undefined4 *)(iVar12 + 0xf8);
            puVar3[0x42] = *(undefined4 *)(iVar12 + 0x100);
            puVar3[0x43] = *(undefined4 *)(iVar12 + 0x104);
            puVar3[0x44] = *(undefined4 *)(iVar12 + 0x108);
            puVar3[0x45] = *(undefined4 *)(iVar12 + 0x10c);
            puVar3[0x46] = *(undefined4 *)(iVar12 + 0x110);
            puVar3[0x47] = *(undefined4 *)(iVar12 + 0x114);
            puVar3[0x48] = *(undefined4 *)(iVar12 + 0x118);
            puVar3[0x49] = *(undefined4 *)(iVar12 + 0x11c);
            puVar3[0x4a] = *(undefined4 *)(iVar12 + 0x120);
            puVar3[0x4b] = *(undefined4 *)(iVar12 + 0x124);
            puVar3[0x4c] = *(undefined4 *)(iVar12 + 0x128);
            puVar3[0x4d] = *(undefined4 *)(iVar12 + 300);
            puVar3[0x4e] = *(undefined4 *)(iVar12 + 0x130);
            puVar3[0x4f] = *(undefined4 *)(iVar12 + 0x134);
            puVar3[0x50] = *(undefined4 *)(iVar12 + 0x138);
            puVar3[0x51] = *(undefined4 *)(iVar12 + 0x13c);
            puVar3[0x81] = *(undefined4 *)(iVar12 + 0x1fc);
            puVar3[0x86] = *(undefined4 *)(iVar12 + 0x210);
            puVar3[0x87] = *(undefined4 *)(iVar12 + 0x214);
            iVar7 = FUN_0050b930(puVar3 + 0x53,iVar12 + 0x144);
            if (-1 < iVar7) {
              FUN_0050b6c0(puVar3 + 0x53,-local_3c,-(local_38 + (uint)(local_3c != 0)),0,local_50,
                           local_4c,local_48);
            }
            iVar7 = FUN_0044b540(puVar3 + 0x52,iVar12 + 0x140);
            if (-1 < iVar7) {
              FUN_0044af50(puVar3[0x52],-local_3c,-(local_38 + (uint)(local_3c != 0)),0,local_50,
                           local_4c,local_48);
            }
            FUN_0044b540(puVar3 + 0x82,iVar12 + 0x200);
            FUN_0044b540(puVar3 + 0x83,iVar12 + 0x204);
          }
          local_8 = _SfList_InsertList_16(param_3,0xffffffff,0,0xffffffff);
          if (local_8 < 0) {
            return -0x7fffbffb;
          }
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < iVar1);
  }
  return local_8;
}


