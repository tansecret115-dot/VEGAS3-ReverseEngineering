/* Module: aviplug.dll
   Function: FUN_5f972460
   Address: 5f972460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972460(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38 [2];
  uint local_30 [7];
  int aiStack_14 [5];
  
  iVar3 = param_2;
  iVar11 = 0;
  FUN_5f972330(param_1,param_2);
  iVar8 = 0x32b0;
  piVar9 = (int *)(param_2 + 0xc9b8);
  iVar10 = 0;
  do {
    iVar13 = *piVar9;
    iVar4 = 0xf;
    while ((iVar13 == 0 && (0 < iVar4))) {
      iVar4 = iVar4 + -1;
      iVar13 = *(int *)(param_2 + -0x144 + (iVar8 + iVar4) * 4);
    }
    *(int *)((int)local_30 + iVar10 + 8) = iVar4;
    iVar4 = iVar4 + iVar8;
    iVar8 = iVar8 + 0x10;
    piVar9 = piVar9 + 0x10;
    iVar13 = *(int *)(param_2 + iVar4 * 4);
    *(int *)((int)aiStack_14 + iVar10) = iVar13;
    iVar11 = iVar11 + iVar13;
    iVar10 = iVar10 + 4;
  } while (iVar8 < 0x3300);
  for (; iVar8 = param_1, iVar10 = local_50, 0xa00 < iVar11; iVar11 = (iVar11 - iVar8) + iVar10) {
    iVar10 = 0;
    local_3c = (uint *)0x7fffffff;
    local_50 = 0;
    puVar12 = (uint *)0x0;
    puVar7 = local_30 + 2;
    do {
      puVar5 = (uint *)*puVar7;
      local_50 = local_50 + (int)puVar5;
      if (puVar5 != (uint *)0x0) {
        piVar9 = (int *)(param_2 + 0xc97c + (iVar10 + (int)puVar5) * 4);
        do {
          puVar1 = (uint *)*piVar9;
          piVar9 = piVar9 + -1;
          puVar5 = (uint *)((int)puVar5 + -1);
          if (puVar1 != (uint *)*piVar9) break;
        } while (0 < (int)puVar5);
        if ((int)puVar1 < (int)local_3c) {
          local_44 = puVar5;
          local_40 = puVar12;
          local_3c = puVar1;
        }
      }
      iVar10 = iVar10 + 0x10;
      puVar12 = (uint *)((int)puVar12 + 1);
      puVar7 = puVar7 + 1;
    } while (iVar10 < 0x50);
    iVar10 = local_50;
    if (local_50 == 0) break;
    iVar8 = aiStack_14[(int)local_40];
    local_30[(int)local_40 + 2] = (uint)local_44;
    iVar10 = *(int *)(param_2 + (int)(local_44 + ((int)local_40 + 0x32b) * 4) * 4);
    aiStack_14[(int)local_40] = iVar10;
  }
joined_r0x5f972579:
  do {
    if (0x9ff < iVar11) {
LAB_5f9727b0:
      local_3c = local_30 + 2;
      param_2 = 0;
      iVar11 = 0x3300;
      puVar7 = (uint *)(param_1 + 4);
      do {
        iVar8 = 0;
        *puVar7 = *local_3c;
        puVar12 = puVar7;
        do {
          local_40 = puVar12 + 1;
          puVar12 = local_40;
          local_4c = *(uint *)(iVar3 + (*puVar7 + iVar11) * 4);
          puVar5 = *(uint **)(iVar3 + 0xc6b8 + (iVar8 + (param_2 + local_4c * 5) * 0x12) * 4);
          FUN_5f972140((uint *)*local_40,(int)puVar5,*puVar7,*puVar5 & 3,local_4c);
          iVar8 = iVar8 + 1;
          iVar11 = iVar11 + 0x10;
        } while (iVar8 < 6);
        param_2 = param_2 + 1;
        puVar7 = puVar7 + 0x12;
        local_3c = local_3c + 1;
      } while (iVar11 < 0x34e0);
      return;
    }
    iVar13 = 0;
    local_48 = local_30 + 2;
    local_44 = (uint *)0x0;
    local_50 = 0x34e0;
    do {
      iVar4 = 0;
      piVar9 = (int *)(param_2 + (local_50 + *local_48) * 4);
      do {
        local_40 = (uint *)*piVar9;
        if ((int)local_44 < (int)local_40) {
          iVar10 = iVar4;
          iVar8 = iVar13;
          local_44 = local_40;
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 0x10;
      } while (iVar4 < 6);
      local_50 = local_50 + 0x60;
      iVar13 = iVar13 + 1;
      local_48 = local_48 + 1;
    } while (local_50 < 0x36c0);
    if (local_44 == (uint *)0x0) goto LAB_5f9727b0;
    uVar2 = local_30[iVar8 + 2];
    local_44 = (uint *)(iVar10 + iVar8 * 0x12);
    local_38[0] = *(uint **)(param_2 + 0xc6b8 + (int)local_44 * 4);
    local_38[1] = *(uint **)(param_2 + 0xc820 + (int)local_44 * 4);
    local_30[0] = *local_38[0] & 3;
    local_30[1] = *local_38[1] & 3;
    if (((local_30[0] != 0) || (local_30[1] != 0)) &&
       ((*(int *)(param_2 + 0xc6d4 + (int)local_44 * 4) < 0x100 ||
        (*(int *)(param_2 + 0xc83c + (int)local_44 * 4) < 0x100)))) {
      if (local_30[0] != 0) {
        local_30[0] = local_30[0] - 1;
      }
      if (local_30[1] != 0) {
        local_30[1] = local_30[1] - 1;
      }
      FUN_5f972250(local_38[0],local_30[0],local_38[1],local_30[1],uVar2,iVar4,(int *)&local_40,
                   (int *)&local_3c,&local_4c);
      if (local_40 == (uint *)0x7fffffff) {
        *(undefined4 *)(param_2 + ((iVar10 + (iVar8 * 3 + 0x1a7) * 2) * 0x10 + uVar2) * 4) = 0;
        goto joined_r0x5f972579;
      }
      local_44 = local_38[local_4c];
      if ((*local_44 & 3) == 0) {
        *(undefined4 *)(param_2 + ((iVar10 + (iVar8 * 3 + 0x1a7) * 2) * 0x10 + uVar2) * 4) = 0;
        goto joined_r0x5f972579;
      }
      local_3c = (uint *)((int)local_3c -
                         *(int *)(param_2 + ((iVar10 + (iVar8 * 3 + 0x1b6) * 2) * 0x10 + uVar2) * 4)
                         );
      if ((int)local_3c + iVar11 < 0xa01) {
        uVar6 = (local_4c & 1) << 2 | *local_44 & 0xfffffffb;
        *local_44 = uVar6;
        *local_44 = (local_30[local_4c] ^ uVar6) & 3 ^ uVar6;
        *(uint *)(param_2 + ((iVar10 + (iVar8 * 3 + 0x198) * 2) * 0x10 + uVar2) * 4) = local_4c;
        *(uint **)(param_2 + ((iVar10 + (iVar8 * 3 + 0x1a7) * 2) * 0x10 + uVar2) * 4) = local_40;
        iVar11 = iVar11 + (int)local_3c;
        goto joined_r0x5f972579;
      }
    }
    *(undefined4 *)(param_2 + ((iVar10 + (iVar8 * 3 + 0x1a7) * 2) * 0x10 + uVar2) * 4) = 0;
  } while( true );
}


