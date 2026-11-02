/* Module: vegas30k.dll
   Function: FUN_0105ef60
   Address: 0105ef60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0105ef60(undefined4 param_1,int param_2,int param_3,undefined4 param_4,double *param_5,
                 int param_6)

{
  double dVar1;
  float fVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  short *psVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  
  switch(param_1) {
  case 0:
  case 0x11:
    switch(param_4) {
    case 0x10:
      iVar9 = 0;
      if (0 < param_6) {
        psVar12 = (short *)(param_2 + param_3 * 4);
        do {
          sVar5 = (short)(char)(*(byte *)(iVar9 + (int)param_5) ^ 0x80) << 8;
          psVar12[1] = sVar5;
          *psVar12 = sVar5;
          iVar9 = iVar9 + 1;
          psVar12 = psVar12 + 2;
        } while (iVar9 < param_6);
        return;
      }
      break;
    case 0x11:
      if (0 < param_6) {
        puVar7 = (undefined2 *)(param_2 + param_3 * 4);
        do {
          uVar6 = *(undefined2 *)param_5;
          param_5 = (double *)((int)param_5 + 2);
          puVar7[1] = uVar6;
          *puVar7 = uVar6;
          puVar7 = puVar7 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x12:
      if (0 < param_6) {
        puVar7 = (undefined2 *)(param_2 + param_3 * 4);
        puVar14 = (undefined2 *)((int)param_5 + 1);
        do {
          uVar6 = *puVar14;
          puVar14 = (undefined2 *)((int)puVar14 + 3);
          puVar7[1] = uVar6;
          *puVar7 = uVar6;
          puVar7 = puVar7 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x13:
      if (0 < param_6) {
        puVar7 = (undefined2 *)(param_2 + param_3 * 4);
        do {
          iVar9 = *(int *)param_5;
          param_5 = (double *)((int)param_5 + 4);
          uVar6 = (undefined2)((uint)iVar9 >> 0x10);
          puVar7[1] = uVar6;
          *puVar7 = uVar6;
          puVar7 = puVar7 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x20:
      if (0 < param_6) {
        puVar7 = (undefined2 *)(param_2 + param_3 * 4);
        do {
          iVar9 = ftol();
          if (iVar9 < -0x8000) {
            iVar9 = -0x8000;
          }
          else if (0x7fff < iVar9) {
            iVar9 = 0x7fff;
          }
          puVar7[1] = (short)iVar9;
          *puVar7 = (short)iVar9;
          puVar7 = puVar7 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x21:
      if (0 < param_6) {
        puVar7 = (undefined2 *)(param_2 + param_3 * 4);
        do {
          iVar9 = ftol();
          if (iVar9 < -0x8000) {
            iVar9 = -0x8000;
          }
          else if (0x7fff < iVar9) {
            iVar9 = 0x7fff;
          }
          puVar7[1] = (short)iVar9;
          *puVar7 = (short)iVar9;
          puVar7 = puVar7 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
    }
    break;
  case 0x20:
    switch(param_4) {
    case 0x10:
      iVar9 = 0;
      if (0 < param_6) {
        pfVar11 = (float *)(param_2 + param_3 * 8);
        do {
          pbVar13 = (byte *)(iVar9 + (int)param_5);
          iVar9 = iVar9 + 1;
          fVar2 = (float)(int)(char)(*pbVar13 ^ 0x80) * (float)_DAT_011db2b0;
          pfVar11[1] = fVar2;
          *pfVar11 = fVar2;
          pfVar11 = pfVar11 + 2;
        } while (iVar9 < param_6);
        return;
      }
      break;
    case 0x11:
      if (0 < param_6) {
        pfVar11 = (float *)(param_2 + param_3 * 8);
        do {
          sVar5 = *(short *)param_5;
          param_5 = (double *)((int)param_5 + 2);
          param_6 = param_6 + -1;
          fVar2 = (float)_DAT_011db2b8;
          pfVar11[1] = (float)(int)sVar5 * fVar2;
          *pfVar11 = (float)(int)sVar5 * fVar2;
          pfVar11 = pfVar11 + 2;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x12:
      if (0 < param_6) {
        pfVar11 = (float *)(param_2 + param_3 * 8);
        iVar9 = param_6;
        do {
          iVar9 = iVar9 + -1;
          param_6._1_2_ = (undefined2)((uint3)*(undefined3 *)param_5 >> 8);
          param_3 = CONCAT22(param_6._1_2_,*(short *)param_5 << 8);
          fVar2 = (float)_DAT_011db2c8;
          pfVar11[1] = (float)param_3 * fVar2;
          *pfVar11 = (float)param_3 * fVar2;
          pfVar11 = pfVar11 + 2;
          param_5 = (double *)((int)param_5 + 3);
        } while (iVar9 != 0);
        return;
      }
      break;
    case 0x13:
      if (0 < param_6) {
        pfVar11 = (float *)(param_2 + param_3 * 8);
        do {
          iVar9 = *(int *)param_5;
          param_5 = (double *)((int)param_5 + 4);
          param_6 = param_6 + -1;
          fVar2 = (float)_DAT_011db2c8;
          pfVar11[1] = (float)iVar9 * fVar2;
          *pfVar11 = (float)iVar9 * fVar2;
          pfVar11 = pfVar11 + 2;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x20:
      if (0 < param_6) {
        piVar10 = (int *)(param_2 + param_3 * 8);
        do {
          iVar9 = *(int *)param_5;
          param_5 = (double *)((int)param_5 + 4);
          piVar10[1] = iVar9;
          *piVar10 = iVar9;
          piVar10 = piVar10 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x21:
      if (0 < param_6) {
        pfVar11 = (float *)(param_2 + param_3 * 8);
        do {
          dVar1 = *param_5;
          param_5 = param_5 + 1;
          pfVar11[1] = (float)dVar1;
          *pfVar11 = (float)dVar1;
          pfVar11 = pfVar11 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
    }
    break;
  case 0x31:
    switch(param_4) {
    case 0x10:
      iVar9 = 0;
      if (0 < param_6) {
        pbVar13 = (byte *)(param_2 + param_3 * 2);
        do {
          bVar3 = *(byte *)(iVar9 + (int)param_5) ^ 0x80;
          iVar9 = iVar9 + 1;
          pbVar13[1] = bVar3;
          *pbVar13 = bVar3;
          pbVar13 = pbVar13 + 2;
        } while (iVar9 < param_6);
        return;
      }
      break;
    case 0x11:
      if (0 < param_6) {
        puVar15 = (undefined1 *)(param_2 + param_3 * 2);
        do {
          uVar6 = *(undefined2 *)param_5;
          param_5 = (double *)((int)param_5 + 2);
          uVar4 = (undefined1)((ushort)uVar6 >> 8);
          puVar15[1] = uVar4;
          *puVar15 = uVar4;
          puVar15 = puVar15 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x12:
      if (0 < param_6) {
        puVar8 = (undefined1 *)(param_2 + param_3 * 2);
        puVar15 = (undefined1 *)((int)param_5 + 2);
        do {
          uVar4 = *puVar15;
          puVar15 = puVar15 + 3;
          puVar8[1] = uVar4;
          *puVar8 = uVar4;
          puVar8 = puVar8 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x13:
      if (0 < param_6) {
        puVar15 = (undefined1 *)(param_2 + param_3 * 2);
        do {
          iVar9 = *(int *)param_5;
          param_5 = (double *)((int)param_5 + 4);
          uVar4 = (undefined1)((uint)iVar9 >> 0x18);
          puVar15[1] = uVar4;
          *puVar15 = uVar4;
          puVar15 = puVar15 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x20:
      if (0 < param_6) {
        puVar15 = (undefined1 *)(param_2 + param_3 * 2);
        do {
          iVar9 = ftol();
          if (iVar9 < -0x80) {
            uVar4 = 0x80;
          }
          else if (iVar9 < 0x80) {
            uVar4 = ftol();
          }
          else {
            uVar4 = 0x7f;
          }
          puVar15[1] = uVar4;
          *puVar15 = uVar4;
          puVar15 = puVar15 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
      break;
    case 0x21:
      if (0 < param_6) {
        puVar15 = (undefined1 *)(param_2 + param_3 * 2);
        do {
          iVar9 = ftol();
          if (iVar9 < -0x80) {
            uVar4 = 0x80;
          }
          else if (iVar9 < 0x80) {
            uVar4 = ftol();
          }
          else {
            uVar4 = 0x7f;
          }
          puVar15[1] = uVar4;
          *puVar15 = uVar4;
          puVar15 = puVar15 + 2;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        return;
      }
    }
  }
  return;
}


