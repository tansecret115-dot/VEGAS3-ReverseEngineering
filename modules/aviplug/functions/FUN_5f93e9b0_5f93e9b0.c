/* Module: aviplug.dll
   Function: FUN_5f93e9b0
   Address: 5f93e9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93e9b0(int *param_1,int *param_2,uint *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  LPVOID pvVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  SIZE_T SVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *local_54;
  int local_48 [5];
  LPVOID local_34;
  undefined4 local_30;
  
  piVar4 = param_2;
  piVar3 = param_1;
  *param_3 = 0xffffffff;
  if ((param_1[0x1e] != -1) || (param_1[0x1f] != -1)) {
    return -0x7fff0001;
  }
  piVar9 = local_48;
  for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  iVar11 = param_1[2];
  if (iVar11 == 0) {
    uVar15 = (param_2[0xd] & 1U) + param_2[0xd];
  }
  else {
    uVar6 = param_2[0xd] + (param_2[0xd] & 1U);
    uVar12 = uVar6 + 3 & 0xfffffffc;
    if ((uVar12 == uVar6) || (uVar15 = uVar12 + 8, 7 < uVar12 - uVar6)) {
      uVar15 = uVar12;
    }
  }
  param_2 = (int *)(uVar15 + 0x54);
  uVar6 = *(uint *)(param_1[6] + 4);
  if (iVar11 != 0) {
    param_2 = (int *)(uVar15 + 0x7e54);
  }
  uVar6 = ((param_1[6] + (uVar6 & 1) + uVar6) - param_1[4]) + 0x14 + (int)param_2;
  uVar6 = uVar6 + (uVar6 & 1);
  SVar13 = uVar6 + 0x7ff & 0xfffff800;
  if ((SVar13 != uVar6) && (SVar13 - uVar6 < 8)) {
    SVar13 = SVar13 + 0x800;
  }
  if (iVar11 != 0) {
    SVar13 = *(int *)(param_1[0xb] + 4) + 8 + SVar13;
  }
  if (param_1[1] < (int)SVar13) {
    puVar7 = FUN_5f943000((undefined4 *)*param_1,SVar13,0,1,(SIZE_T *)&param_1,(SIZE_T *)0x0);
    if (puVar7 != (undefined4 *)0x0) {
      puVar18 = (undefined4 *)*piVar3;
      if (puVar7 != puVar18) {
        iVar11 = (int)puVar7 + (piVar3[4] - (int)puVar18);
        piVar3[4] = iVar11;
        piVar3[0xc] = iVar11;
        piVar3[6] = (int)puVar7 + (piVar3[6] - (int)puVar18);
        piVar3[7] = (int)puVar7 + (piVar3[7] - (int)puVar18);
        if (piVar3[2] != 0) {
          piVar3[0xb] = (int)puVar7;
          piVar3[8] = (int)puVar7 + (piVar3[8] - (int)puVar18);
          piVar3[9] = (int)puVar7 + (piVar3[9] - (int)puVar18);
        }
        piVar3[10] = (int)puVar7 + (piVar3[10] - (int)puVar18);
        FUN_5f93e950((int)piVar3,(int)puVar18,(int)puVar7);
        *piVar3 = (int)puVar7;
      }
      piVar3[1] = (int)param_1;
      goto LAB_5f93eb18;
    }
LAB_5f93f0cf:
    iVar11 = -0x7ff8fff2;
  }
  else {
LAB_5f93eb18:
    if (piVar3[2] != 0) {
      pvVar8 = VirtualAlloc((LPVOID)0x0,0x7e00,0x3000,4);
      if (pvVar8 == (LPVOID)0x0) goto LAB_5f93f0cf;
      local_30 = 0x7e00;
      piVar3[0x70] = piVar3[0x70] + 0x7e00;
      local_34 = pvVar8;
    }
    iVar11 = FUN_5f978180((int *)piVar3[0x10],-1,local_48,1);
    if (-1 < iVar11) {
      iVar11 = piVar3[6];
      iVar17 = (*(uint *)(iVar11 + 4) & 1) + *(uint *)(iVar11 + 4);
      local_54 = (undefined4 *)(iVar17 + 8 + iVar11);
      if (*(int *)(iVar17 + 8 + iVar11) == 0x4b4e554a) {
        *local_54 = 0;
        local_54[1] = 0;
      }
      puVar18 = (undefined4 *)piVar3[10];
      puVar7 = (undefined4 *)(*piVar3 + -0xc + SVar13);
      if (puVar18 != puVar7) {
        param_1 = (int *)0xc;
        memmove(puVar7,puVar18,0xc);
        piVar9 = (int *)((int)puVar7 - (int)puVar18);
        if (0xc < (int)puVar7 - (int)puVar18) {
          piVar9 = param_1;
        }
        for (uVar6 = (uint)piVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        for (uVar6 = (uint)piVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar18 = 0;
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        }
      }
      piVar3[10] = (int)puVar7;
      iVar11 = (int)puVar7 - piVar3[4];
      piVar3[5] = iVar11 + 0xc;
      *(int *)(piVar3[4] + 4) = iVar11;
      *(int *)(piVar3[4] + 4) = *(int *)(piVar3[4] + 4) + 4;
      if (piVar3[2] != 0) {
        puVar7 = (undefined4 *)piVar3[9];
        puVar1 = (undefined1 *)((int)puVar7 + (int)param_2);
        memmove(puVar1,puVar7,0x210);
        uVar6 = (int)puVar1 - (int)puVar7;
        if (0x210 < uVar6) {
          uVar6 = 0x210;
        }
        for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        param_1 = (int *)0x10c;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        piVar3[9] = (int)puVar1;
        local_54 = (undefined4 *)(piVar3[8] + -0xc);
        puVar1 = (undefined1 *)((int)param_2 + (int)local_54);
        memmove(puVar1,local_54,0x10c);
        piVar9 = (int *)(puVar1 + -(int)local_54);
        if (0x10c < (int)piVar9) {
          piVar9 = param_1;
        }
        puVar7 = local_54;
        for (uVar6 = (uint)piVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = (uint)piVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        piVar3[8] = (int)((undefined1 *)((int)param_2 + (int)local_54) + 0xc);
      }
      *(int *)(piVar3[6] + 4) = *(int *)(piVar3[6] + 4) + (int)param_2;
      uVar6 = *(uint *)(piVar3[6] + 4);
      puVar7 = (undefined4 *)((uVar6 & 1) + uVar6 + 8 + piVar3[6]);
      iVar11 = piVar3[10];
      if (iVar11 - (int)puVar7 != 0) {
        *puVar7 = 0x4b4e554a;
        puVar7[1] = (iVar11 - (int)puVar7) + -8;
      }
      piVar9 = (int *)piVar3[0x10];
      uVar6 = *piVar9 - 1;
      piVar9 = (int *)(piVar9[1] * uVar6 + piVar9[2]);
      piVar9[0xc] = uVar6;
      iVar11 = *piVar4;
      bVar2 = (byte)((int)uVar6 >> 4);
      if (iVar11 == 0x73646976) {
        uVar12 = uVar6 & 0xf;
        cVar5 = (char)uVar12;
        cVar16 = cVar5 + '7';
        if (uVar12 < 10) {
          cVar16 = cVar5 + '0';
        }
        if ((uVar6 & 0xf0) < 0x91) {
          cVar10 = (bVar2 & 0xf) + 0x30;
        }
        else {
          cVar10 = (bVar2 & 0xf) + 0x37;
        }
        piVar9[0xd] = CONCAT11(cVar16,cVar10) | 0x62640000;
        cVar16 = cVar5 + '7';
        if (uVar12 < 10) {
          cVar16 = cVar5 + '0';
        }
        cVar5 = (bVar2 & 0xf) + 0x37;
        if ((uVar6 & 0xf0) < 0x91) {
          cVar5 = (bVar2 & 0xf) + 0x30;
        }
        piVar9[0xe] = CONCAT11(cVar16,cVar5) | 0x63640000;
      }
      else if (iVar11 == 0x73647561) {
        cVar5 = (char)(uVar6 & 0xf);
        cVar16 = cVar5 + '7';
        if ((uVar6 & 0xf) < 10) {
          cVar16 = cVar5 + '0';
        }
        if ((uVar6 & 0xf0) < 0x91) {
          cVar5 = (bVar2 & 0xf) + 0x30;
        }
        else {
          cVar5 = (bVar2 & 0xf) + 0x37;
        }
        uVar12 = CONCAT11(cVar16,cVar5) | 0x62770000;
        piVar9[0xd] = uVar12;
        piVar9[0xe] = uVar12;
      }
      else if (iVar11 == 0x73766169) {
        cVar5 = (char)(uVar6 & 0xf);
        cVar16 = cVar5 + '7';
        if ((uVar6 & 0xf) < 10) {
          cVar16 = cVar5 + '0';
        }
        if ((uVar6 & 0xf0) < 0x91) {
          cVar5 = (bVar2 & 0xf) + 0x30;
        }
        else {
          cVar5 = (bVar2 & 0xf) + 0x37;
        }
        uVar12 = CONCAT11(cVar16,cVar5) | 0x5f5f0000;
        piVar9[0xd] = uVar12;
        piVar9[0xe] = uVar12;
      }
      else {
        cVar5 = (char)(uVar6 & 0xf);
        cVar16 = cVar5 + '7';
        if ((uVar6 & 0xf) < 10) {
          cVar16 = cVar5 + '0';
        }
        if ((uVar6 & 0xf0) < 0x91) {
          cVar5 = (bVar2 & 0xf) + 0x30;
        }
        else {
          cVar5 = (bVar2 & 0xf) + 0x37;
        }
        uVar12 = CONCAT11(cVar16,cVar5) | 0x78780000;
        piVar9[0xd] = uVar12;
        piVar9[0xe] = uVar12;
      }
      param_1 = (int *)(uVar6 & 0xf0);
      *(int *)(piVar3[7] + 0xc) = *(int *)(piVar3[7] + 0xc) + piVar4[6];
      cVar5 = (char)(uVar6 & 0xf);
      cVar16 = cVar5 + '7';
      if ((uVar6 & 0xf) < 10) {
        cVar16 = cVar5 + '0';
      }
      cVar5 = (bVar2 & 0xf) + 0x37;
      if (param_1 < (int *)0x91) {
        cVar5 = (bVar2 & 0xf) + 0x30;
      }
      piVar9[10] = -1;
      piVar9[0xb] = -1;
      piVar9[0xf] = (uint)CONCAT11(cVar16,cVar5) << 0x10 | 0x7869;
      *local_54 = 0x5453494c;
      local_54[1] = param_2 + -2;
      local_54[2] = 0x6c727473;
      *piVar9 = (int)(local_54 + 3);
      local_54[3] = 0x68727473;
      *(undefined4 *)(*piVar9 + 4) = 0x40;
      *(int *)(*piVar9 + 4) = *(int *)(*piVar9 + 4) + -8;
      *(int *)(*piVar9 + 8) = *piVar4;
      *(int *)(*piVar9 + 0xc) = piVar4[1];
      *(int *)(*piVar9 + 0x18) = piVar4[7];
      *(int *)(*piVar9 + 0x20) = piVar4[2];
      *(int *)(*piVar9 + 0x1c) = piVar4[3];
      *(int *)(*piVar9 + 0x30) = piVar4[4];
      *(int *)(*piVar9 + 0x34) = piVar4[5];
      *(short *)(*piVar9 + 0x38) = (short)piVar4[8];
      *(short *)(*piVar9 + 0x3a) = (short)piVar4[9];
      *(short *)(*piVar9 + 0x3c) = (short)piVar4[10];
      *(short *)(*piVar9 + 0x3e) = (short)piVar4[0xb];
      uVar12 = *(uint *)(*piVar9 + 4);
      puVar7 = (undefined4 *)((uVar12 & 1) + uVar12 + 8 + *piVar9);
      *puVar7 = 0x66727473;
      puVar7[1] = piVar4[0xd];
      piVar9[1] = (int)(puVar7 + 2);
      piVar9[2] = piVar4[0xd];
      uVar12 = piVar4[0xd];
      puVar18 = (undefined4 *)piVar4[0xc];
      puVar19 = puVar7 + 2;
      for (uVar14 = uVar12 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      uVar12 = piVar9[2];
      if (uVar15 != uVar12) {
        if ((uVar12 & 1) != 0) {
          *(undefined1 *)(piVar9[1] + uVar12) = 0;
        }
        iVar11 = uVar15 - ((piVar9[2] & 1U) + piVar9[2]);
        if (0 < iVar11) {
          puVar7 = (undefined4 *)((int)puVar7 + (puVar7[1] & 1) + puVar7[1] + 8);
          uVar15 = iVar11 - 8;
          puVar7[1] = uVar15;
          *puVar7 = 0x4b4e554a;
          puVar18 = puVar7 + 2;
          for (uVar12 = uVar15 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined1 *)puVar18 = 0;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          }
        }
      }
      if (piVar3[2] != 0) {
        puVar7 = (undefined4 *)((puVar7[1] & 1) + puVar7[1] + 8 + (int)puVar7);
        piVar9[3] = (int)puVar7;
        *puVar7 = 0x78646e69;
        *(undefined4 *)(piVar9[3] + 4) = 0x7df8;
        *(undefined2 *)(piVar9[3] + 8) = 4;
        *(undefined1 *)(piVar9[3] + 10) = 0;
        *(undefined1 *)(piVar9[3] + 0xb) = 0;
        *(int *)(piVar9[3] + 0x10) = piVar9[0xd];
        *(int *)piVar9[5] = piVar9[0xf];
        *(int *)(piVar9[5] + 4) = piVar9[6] + -8;
        *(undefined1 *)(piVar9[5] + 10) = 0;
        *(undefined1 *)(piVar9[5] + 0xb) = 1;
        *(undefined2 *)(piVar9[5] + 8) = 2;
        iVar11 = piVar9[5];
        *(undefined4 *)(iVar11 + 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x18) = 0;
        *(undefined4 *)(piVar9[5] + 0xc) = 0;
        *(int *)(piVar9[5] + 0x10) = piVar9[0xd];
        piVar9[8] = piVar9[6] - 0x20U;
        piVar9[8] = (int)((ulonglong)(piVar9[6] - 0x20U) /
                         ((ulonglong)*(ushort *)(piVar9[5] + 8) << 2));
      }
      *(int *)(piVar3[7] + 0x20) = *(int *)(piVar3[7] + 0x20) + 1;
      *param_3 = uVar6;
      return 0;
    }
  }
  FUN_5f93e4c0(local_48);
  return iVar11;
}


