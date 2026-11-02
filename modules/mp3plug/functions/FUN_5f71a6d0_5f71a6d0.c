/* Module: mp3plug.dll
   Function: FUN_5f71a6d0
   Address: 5f71a6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl
FUN_5f71a6d0(void *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7
            )

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint local_48;
  int local_34;
  int local_2c;
  int iVar12;
  int local_24;
  int local_1c;
  
  iVar8 = param_6;
  iVar12 = param_5;
  puVar3 = param_3;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  iVar7 = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  if (*(char *)(param_4 + 0x20) == '\0') {
    uVar5 = *(uint *)(param_4 + 0x10);
    uVar2 = *(uint *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0x3c) = 0;
    local_48 = 0;
    if (((uVar5 & 1) == 0) || (param_7 != 1)) {
      *(undefined4 *)(param_2 + 0x48) = 0;
      if ((int)uVar2 < 400) {
        iVar7 = 0;
        local_48 = ((int)uVar2 >> 4) / 5;
      }
      else if ((int)uVar2 < 500) {
        iVar7 = 1;
        local_48 = (uint)(CONCAT44((int)(uVar2 - 400) >> 0x1f,(int)(uVar2 - 400) >> 2) / 5);
      }
      else if ((int)uVar2 < 0x200) {
        iVar7 = 2;
        local_48 = (int)(uVar2 - 500) / 3;
        *(undefined4 *)(param_2 + 0x3c) = 1;
      }
    }
    else {
      iVar12 = (int)uVar2 >> 1;
      *(uint *)(param_2 + 0x48) = uVar2 & 1;
      if (iVar12 < 0xb4) {
        local_48 = (uint)(CONCAT44((int)uVar2 >> 0x1f,iVar12) / 0x24);
        iVar7 = 3;
      }
      else if (iVar12 < 0xf4) {
        iVar7 = 4;
        local_48 = (int)(iVar12 - 0xb4U & 0x3f) >> 4;
      }
      else if (iVar12 < 0x100) {
        iVar7 = 5;
        local_48 = (iVar12 + -0xf4) / 3;
      }
    }
    if (*(int *)(param_2 + 0x14) == 2) {
      if (*(int *)(param_2 + 0x18) == 0) {
        iVar12 = 1;
        local_1c = 1;
      }
      else {
        iVar12 = 2;
        local_1c = 2;
      }
    }
    else {
      iVar12 = 0;
      local_1c = 0;
    }
    if (*(int *)(param_2 + 0x14) == 2) {
      if (*(int *)(param_2 + 0x18) == 0) {
        iVar12 = iVar7 * 0x30 + iVar12 * 0x10;
        local_34 = 0;
        do {
          iVar8 = 0;
          if (0 < *(int *)((int)&DAT_5f766438 + iVar12) / 3) {
            do {
              iVar7 = 0;
              do {
                uVar5 = FUN_5f714080(param_1,*(uint *)(puVar11 + -0x44));
                iVar9 = iVar7 + local_34 * 4;
                iVar7 = iVar7 + 0x34;
                *(uint *)((int)puVar3 + iVar9 + 0x5c) = uVar5;
              } while (iVar7 < 0x9c);
              puVar3[local_34 + 0x55] = *(uint *)(&DAT_5f766420 + *(int *)(puVar11 + -0x44) * 4);
              local_34 = local_34 + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)((int)&DAT_5f766438 + iVar12) / 3);
          }
          puVar11 = puVar11 + 4;
          iVar12 = iVar12 + 4;
        } while ((int)puVar11 < (int)&param_3);
        puVar6 = puVar3 + 0x27;
        puVar3[0x23] = 0;
        puVar3[0x30] = 0;
        puVar3[0x3d] = 0;
        puVar4 = puVar3 + 0x27;
        puVar3[0x61] = 1;
      }
      else {
        puVar6 = param_3 + 6;
        puVar4 = param_3;
        do {
          uVar5 = FUN_5f714080(param_1,local_48);
          *puVar4 = uVar5;
          puVar4[0x3e] = *(uint *)(&DAT_5f766420 + local_48 * 4);
          puVar4 = puVar4 + 1;
        } while ((int)puVar4 < (int)puVar6);
        iVar12 = iVar7 * 0x30;
        iVar8 = 3;
        local_2c = 0;
        puVar10 = (undefined1 *)register0x00000010;
        if (0 < ((&DAT_5f766438)[local_1c * 4 + iVar7 * 0xc] + -6) / 3) {
          do {
            iVar9 = 0;
            do {
              uVar5 = FUN_5f714080(param_1,local_48);
              iVar1 = iVar9 + iVar8 * 4;
              iVar9 = iVar9 + 0x34;
              *(uint *)((int)puVar3 + iVar1 + 0x5c) = uVar5;
            } while (iVar9 < 0x9c);
            puVar3[iVar8 + 0x55] = *(uint *)(&DAT_5f766420 + local_48 * 4);
            local_2c = local_2c + 1;
            iVar8 = iVar8 + 1;
          } while (local_2c < ((&DAT_5f766438)[local_1c * 4 + iVar7 * 0xc] + -6) / 3);
        }
        do {
          iVar12 = iVar12 + 4;
          iVar7 = local_1c * 0x10 + iVar12;
          local_34 = 0;
          if (0 < *(int *)(iVar7 + 0x5f766438) / 3) {
            do {
              iVar9 = 0;
              do {
                uVar5 = FUN_5f714080(param_1,*(uint *)(puVar10 + -0x44));
                iVar1 = iVar9 + iVar8 * 4;
                iVar9 = iVar9 + 0x34;
                *(uint *)((int)puVar3 + iVar1 + 0x5c) = uVar5;
              } while (iVar9 < 0x9c);
              puVar3[iVar8 + 0x55] = *(uint *)(&DAT_5f766420 + *(int *)(puVar10 + -0x44) * 4);
              local_34 = local_34 + 1;
              iVar8 = iVar8 + 1;
            } while (local_34 < *(int *)(iVar7 + 0x5f766438) / 3);
          }
          puVar10 = puVar10 + 4;
        } while ((int)puVar10 < (int)&param_3);
        puVar6 = puVar3 + 0x27;
        puVar3[0x23] = 0;
        puVar3[0x30] = 0;
        puVar3[0x3d] = 0;
        puVar4 = puVar3 + 0x27;
        puVar3[0x61] = 1;
      }
    }
    else {
      local_34 = iVar12 * 0x10 + iVar7 * 0x30;
      iVar12 = 0;
      do {
        iVar8 = 0;
        if (0 < *(int *)((int)&DAT_5f766438 + local_34)) {
          do {
            uVar5 = FUN_5f714080(param_1,*(uint *)(puVar10 + -0x44));
            puVar3[iVar12] = uVar5;
            iVar8 = iVar8 + 1;
            puVar3[iVar12 + 0x3e] = *(uint *)(&DAT_5f766420 + *(int *)(puVar10 + -0x44) * 4);
            iVar12 = iVar12 + 1;
          } while (iVar8 < *(int *)((int)&DAT_5f766438 + local_34));
        }
        puVar10 = puVar10 + 4;
        local_34 = local_34 + 4;
      } while ((int)puVar10 < (int)&param_3);
      puVar4 = (uint *)0x0;
      puVar6 = (uint *)0x1;
      puVar3[0x15] = 0;
      puVar3[0x54] = 1;
      puVar3[0x53] = 1;
      puVar3[0x16] = 0;
    }
  }
  else if ((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x14) != 2)) {
    iVar7 = 0;
    do {
      if (((iVar8 == 0) || (*(int *)(iVar12 + iVar7 * 4) == 0)) &&
         (iVar9 = *(int *)(iVar7 * 4 + 0x5f766558), iVar9 < (int)(&DAT_5f76655c)[iVar7])) {
        do {
          uVar5 = FUN_5f714080(param_1,*(uint *)(&DAT_5f766578 +
                                                *(int *)(param_2 + 0xc) * 4 +
                                                (uint)(1 < iVar7) * 0x40));
          puVar3[iVar9] = uVar5;
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(&DAT_5f76655c)[iVar7]);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    puVar6 = puVar3 + 0x17;
    puVar3[0x16] = 0;
    puVar3[0x15] = 0;
    puVar3[0x3e] = 7;
    puVar3[0x3f] = 7;
    puVar3[0x40] = 7;
    puVar3[0x41] = 7;
    puVar3[0x42] = 7;
    puVar3[0x43] = 7;
    puVar3[0x44] = 7;
    puVar3[0x45] = 7;
    puVar3[0x46] = 7;
    puVar3[0x47] = 7;
    puVar3[0x48] = 7;
    puVar3[0x49] = 7;
    puVar3[0x4a] = 7;
    puVar3[0x4b] = 7;
    puVar3[0x4c] = 7;
    puVar3[0x4d] = 7;
    puVar3[0x4e] = 7;
    puVar3[0x4f] = 7;
    puVar3[0x50] = 7;
    puVar3[0x51] = 7;
    puVar3[0x52] = 7;
    puVar3[0x53] = 7;
    puVar3[0x54] = 7;
    puVar4 = puVar3 + 0x17;
  }
  else if (*(int *)(param_2 + 0x18) == 0) {
    iVar8 = 0;
    iVar12 = 0;
    do {
      local_24 = (&DAT_5f76656c)[iVar8];
      if (local_24 < (int)(&DAT_5f766570)[iVar8]) {
        do {
          iVar7 = 0;
          do {
            uVar5 = FUN_5f714080(param_1,*(uint *)(&DAT_5f766578 +
                                                  *(int *)(param_2 + 0xc) * 4 + iVar12));
            iVar9 = iVar7 + local_24 * 4;
            iVar7 = iVar7 + 0x34;
            *(uint *)((int)puVar3 + iVar9 + 0x5c) = uVar5;
          } while (iVar7 < 0x9c);
          local_24 = local_24 + 1;
        } while (local_24 < (int)(&DAT_5f766570)[iVar8]);
      }
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 0x40;
    } while (iVar8 < 2);
    puVar3[0x23] = 0;
    puVar3[0x30] = 0;
    puVar3[0x3d] = 0;
    puVar6 = puVar3 + 0xd;
    puVar3[0x55] = 7;
    puVar3[0x56] = 7;
    puVar3[0x57] = 7;
    puVar3[0x58] = 7;
    puVar3[0x59] = 7;
    puVar3[0x5a] = 7;
    puVar3[0x5b] = 7;
    puVar3[0x5c] = 7;
    puVar3[0x5d] = 7;
    puVar3[0x5e] = 7;
    puVar3[0x5f] = 7;
    puVar3[0x60] = 7;
    puVar3[0x61] = 7;
    puVar4 = puVar3 + 0xd;
  }
  else {
    puVar6 = param_3 + 8;
    puVar4 = param_3;
    do {
      uVar5 = FUN_5f714080(param_1,*(uint *)(&DAT_5f766578 + *(int *)(param_2 + 0xc) * 4));
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < (int)puVar6);
    local_24 = 3;
    do {
      iVar12 = 0;
      do {
        uVar5 = FUN_5f714080(param_1,*(uint *)(&DAT_5f766578 + *(int *)(param_2 + 0xc) * 4));
        iVar8 = iVar12 + local_24 * 4;
        iVar12 = iVar12 + 0x34;
        *(uint *)((int)puVar3 + iVar8 + 0x5c) = uVar5;
      } while (iVar12 < 0x9c);
      local_24 = local_24 + 1;
    } while (local_24 < 6);
    local_24 = 6;
    do {
      iVar12 = 0;
      do {
        uVar5 = FUN_5f714080(param_1,*(uint *)(&DAT_5f7665b8 + *(int *)(param_2 + 0xc) * 4));
        iVar8 = iVar12 + local_24 * 4;
        iVar12 = iVar12 + 0x34;
        *(uint *)((int)puVar3 + iVar8 + 0x5c) = uVar5;
      } while (iVar12 < 0x9c);
      local_24 = local_24 + 1;
    } while (local_24 < 0xc);
    puVar3[0x23] = 0;
    puVar3[0x30] = 0;
    puVar3[0x3d] = 0;
    puVar3[0x3e] = 7;
    puVar3[0x3f] = 7;
    puVar3[0x40] = 7;
    puVar3[0x41] = 7;
    puVar3[0x42] = 7;
    puVar3[0x43] = 7;
    puVar3[0x44] = 7;
    puVar3[0x45] = 7;
    puVar3[0x46] = 7;
    puVar3[0x47] = 7;
    puVar3[0x48] = 7;
    puVar3[0x49] = 7;
    puVar3[0x4a] = 7;
    puVar3[0x4b] = 7;
    puVar3[0x4c] = 7;
    puVar3[0x4d] = 7;
    puVar3[0x4e] = 7;
    puVar3[0x4f] = 7;
    puVar3[0x50] = 7;
    puVar3[0x51] = 7;
    puVar3[0x52] = 7;
    puVar3[0x53] = 7;
    puVar3[0x54] = 7;
    puVar6 = puVar3 + 0xd;
    puVar3[0x55] = 7;
    puVar3[0x56] = 7;
    puVar3[0x57] = 7;
    puVar3[0x58] = 7;
    puVar3[0x59] = 7;
    puVar3[0x5a] = 7;
    puVar3[0x5b] = 7;
    puVar3[0x5c] = 7;
    puVar3[0x5d] = 7;
    puVar3[0x5e] = 7;
    puVar3[0x5f] = 7;
    puVar3[0x60] = 7;
    puVar3[0x61] = 7;
    puVar4 = puVar3 + 0xd;
  }
  return CONCAT44(puVar6,puVar4);
}


