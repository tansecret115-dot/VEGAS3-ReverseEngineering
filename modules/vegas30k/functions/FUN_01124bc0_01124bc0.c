/* Module: vegas30k.dll
   Function: FUN_01124bc0
   Address: 01124bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01124bc0(int *param_1,byte *param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,byte param_12)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  char cVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  iVar8 = param_3;
  iVar3 = *param_1;
  if ((param_4 != 0) &&
     ((bVar4 = *(byte *)(param_1 + 2), (bVar4 & 4) == 0 || ((bVar4 != 3 && (param_3 != 0)))))) {
    switch(bVar4) {
    case 0:
      switch(*(undefined1 *)((int)param_1 + 9)) {
      case 1:
        iVar12 = 7;
        for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
          bVar4 = (byte)iVar12;
          if ((*param_2 >> (bVar4 & 0x1f) & 0xff01) == *(ushort *)(param_3 + 7)) {
            bVar5 = (byte)(0x7f7f >> (7 - bVar4 & 0x1f)) & *param_2;
            *param_2 = bVar5;
            *param_2 = *(char *)(param_4 + 7) << (bVar4 & 0x1f) | bVar5;
          }
          if (iVar12 == 0) {
            iVar12 = 7;
            param_2 = param_2 + 1;
          }
          else {
            iVar12 = iVar12 + -1;
          }
        }
        break;
      case 2:
        iVar10 = 6;
        iVar12 = iVar3;
        if (param_6 == 0) {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            bVar4 = (byte)iVar10;
            if ((*param_2 >> (bVar4 & 0x1f) & 0xff03) == *(ushort *)(param_3 + 7)) {
              bVar5 = (byte)(0x3f3f >> (6 - bVar4 & 0x1f)) & *param_2;
              *param_2 = bVar5;
              *param_2 = *(char *)(param_4 + 7) << (bVar4 & 0x1f) | bVar5;
            }
            if (iVar10 == 0) {
              iVar10 = 6;
              param_2 = param_2 + 1;
            }
            else {
              iVar10 = iVar10 + -2;
            }
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            bVar5 = (byte)iVar10;
            bVar4 = *param_2 >> (bVar5 & 0x1f);
            if ((bVar4 & 0xff03) == *(ushort *)(iVar8 + 7)) {
              bVar4 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
              *param_2 = bVar4;
              bVar13 = *(char *)(param_4 + 7) << (bVar5 & 0x1f);
            }
            else {
              param_3 = (uint)(bVar4 & 3);
              bVar13 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
              bVar4 = (*(byte *)((((param_3 * 4 | param_3) << 2 | param_3) << 2 | param_3) + param_6
                                ) >> 6) << (bVar5 & 0x1f);
            }
            *param_2 = bVar13 | bVar4;
            if (iVar10 == 0) {
              iVar10 = 6;
              param_2 = param_2 + 1;
            }
            else {
              iVar10 = iVar10 + -2;
            }
          }
        }
        break;
      case 4:
        iVar10 = 4;
        iVar12 = iVar3;
        if (param_6 == 0) {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            bVar4 = (byte)iVar10;
            if ((*param_2 >> (bVar4 & 0x1f) & 0xff0f) == *(ushort *)(param_3 + 7)) {
              bVar5 = (byte)(0xf0f >> (4 - bVar4 & 0x1f)) & *param_2;
              *param_2 = bVar5;
              *param_2 = *(char *)(param_4 + 7) << (bVar4 & 0x1f) | bVar5;
            }
            if (iVar10 == 0) {
              iVar10 = 4;
              param_2 = param_2 + 1;
            }
            else {
              iVar10 = iVar10 + -4;
            }
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            bVar5 = (byte)iVar10;
            bVar4 = *param_2 >> (bVar5 & 0x1f);
            if ((bVar4 & 0xff0f) == *(ushort *)(iVar8 + 7)) {
              bVar4 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
              *param_2 = bVar4;
              bVar13 = *(char *)(param_4 + 7) << (bVar5 & 0x1f);
            }
            else {
              param_3 = (uint)(bVar4 & 0xf);
              bVar13 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
              bVar4 = (*(byte *)((param_3 << 4 | param_3) + param_6) >> 4) << (bVar5 & 0x1f);
            }
            *param_2 = bVar13 | bVar4;
            if (iVar10 == 0) {
              iVar10 = 4;
              param_2 = param_2 + 1;
            }
            else {
              iVar10 = iVar10 + -4;
            }
          }
        }
        break;
      case 8:
        iVar8 = iVar3;
        if (param_6 == 0) {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 7)) {
              *param_2 = *(byte *)(param_4 + 7);
            }
            param_2 = param_2 + 1;
          }
        }
        else {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 7)) {
              bVar4 = *(byte *)(param_4 + 7);
            }
            else {
              bVar4 = *(byte *)((uint)*param_2 + param_6);
            }
            *param_2 = bVar4;
            param_2 = param_2 + 1;
          }
        }
        break;
      case 0x10:
        iVar8 = iVar3;
        if (param_9 == 0) {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 7))
            {
              *param_2 = *(byte *)(param_4 + 8);
              param_2[1] = *(byte *)(param_4 + 7);
            }
            param_2 = param_2 + 2;
          }
        }
        else {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 7))
            {
              *param_2 = *(byte *)(param_4 + 8);
              uVar6 = (ushort)*(byte *)(param_4 + 7);
            }
            else {
              uVar6 = *(ushort *)
                       (*(int *)(param_9 + (uint)(param_2[1] >> (param_12 & 0x1f)) * 4) +
                       (uint)*param_2 * 2);
              *param_2 = (byte)(uVar6 >> 8);
            }
            param_2[1] = (byte)uVar6;
            param_2 = param_2 + 2;
          }
        }
      }
      break;
    case 2:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (param_6 == 0) {
          if (iVar3 != 0) {
            param_2 = param_2 + 2;
            iVar8 = iVar3;
            do {
              if ((((ushort)param_2[-2] == *(ushort *)(param_3 + 1)) &&
                  ((ushort)param_2[-1] == *(ushort *)(param_3 + 3))) &&
                 ((ushort)*param_2 == *(ushort *)(param_3 + 5))) {
                param_2[-2] = *(byte *)(param_4 + 1);
                param_2[-1] = *(byte *)(param_4 + 3);
                *param_2 = *(byte *)(param_4 + 5);
              }
              param_2 = param_2 + 3;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        else if (iVar3 != 0) {
          param_2 = param_2 + 2;
          iVar8 = iVar3;
          do {
            if ((((ushort)param_2[-2] == *(ushort *)(param_3 + 1)) &&
                ((ushort)param_2[-1] == *(ushort *)(param_3 + 3))) &&
               ((ushort)*param_2 == *(ushort *)(param_3 + 5))) {
              param_2[-2] = *(byte *)(param_4 + 1);
              param_2[-1] = *(byte *)(param_4 + 3);
              bVar4 = *(byte *)(param_4 + 5);
            }
            else {
              param_2[-2] = *(byte *)((uint)param_2[-2] + param_6);
              param_2[-1] = *(byte *)((uint)param_2[-1] + param_6);
              bVar4 = *(byte *)((uint)*param_2 + param_6);
            }
            *param_2 = bVar4;
            param_2 = param_2 + 3;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else if (param_9 == 0) {
        if (iVar3 != 0) {
          param_2 = param_2 + 2;
          iVar8 = iVar3;
          do {
            if ((((ushort)((ushort)param_2[-2] * 0x100 + (ushort)param_2[-1]) ==
                  *(short *)(param_3 + 1)) &&
                ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 3))
                ) && ((ushort)((ushort)param_2[2] * 0x100 + (ushort)param_2[3]) ==
                      *(short *)(param_3 + 5))) {
              param_2[-2] = *(byte *)(param_4 + 2);
              param_2[-1] = *(byte *)(param_4 + 1);
              *param_2 = *(byte *)(param_4 + 4);
              param_2[1] = *(byte *)(param_4 + 3);
              param_2[2] = *(byte *)(param_4 + 6);
              param_2[3] = *(byte *)(param_4 + 5);
            }
            param_2 = param_2 + 6;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else if (iVar3 != 0) {
        param_2 = param_2 + 2;
        iVar8 = iVar3;
        do {
          if ((((ushort)((ushort)param_2[-2] * 0x100 + (ushort)param_2[-1]) ==
                *(short *)(param_3 + 1)) &&
              ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 3)))
             && ((ushort)((ushort)param_2[2] * 0x100 + (ushort)param_2[3]) ==
                 *(short *)(param_3 + 5))) {
            param_2[-2] = *(byte *)(param_4 + 2);
            param_2[-1] = *(byte *)(param_4 + 1);
            *param_2 = *(byte *)(param_4 + 4);
            param_2[1] = *(byte *)(param_4 + 3);
            param_2[2] = *(byte *)(param_4 + 6);
            param_2[3] = *(byte *)(param_4 + 5);
          }
          else {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(param_2[-1] >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[-2] * 2);
            param_2[-1] = (byte)uVar2;
            param_2[-2] = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(param_2[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*param_2 * 2);
            param_2[1] = (byte)uVar2;
            *param_2 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(param_2[3] >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[2] * 2);
            param_2[3] = (byte)uVar2;
            param_2[2] = (byte)((ushort)uVar2 >> 8);
          }
          param_2 = param_2 + 6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      break;
    case 4:
      if (*(char *)((int)param_1 + 9) == '\b') {
        iVar8 = iVar3;
        pbVar15 = param_2;
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            bVar4 = param_2[1];
            if (bVar4 == 0xff) {
              *pbVar15 = *param_2;
            }
            else if (bVar4 == 0) {
              *pbVar15 = *(byte *)(param_4 + 7);
            }
            else {
              uVar7 = (ushort)((0xff - (ushort)bVar4) * *(short *)(param_5 + 7)) + 0x80 +
                      (uint)*param_2 * (uint)bVar4 & 0xffff;
              *pbVar15 = (byte)((uVar7 >> 8) + uVar7 >> 8);
            }
            param_2 = param_2 + 2;
            pbVar15 = pbVar15 + 1;
          }
        }
        else {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar6 = (ushort)param_2[1];
            if (uVar6 == 0xff) {
              *pbVar15 = *(byte *)((uint)*param_2 + param_6);
            }
            else if (param_2[1] == 0) {
              *pbVar15 = *(byte *)(param_4 + 7);
            }
            else {
              uVar7 = (ushort)((0xff - uVar6) * *(short *)(param_5 + 7)) + 0x80 +
                      (uint)*(byte *)((uint)*param_2 + param_8) * (uint)uVar6 & 0xffff;
              *pbVar15 = *(byte *)(((int)((uVar7 >> 8) + uVar7) >> 8 & 0xffU) + param_7);
            }
            param_2 = param_2 + 2;
            pbVar15 = pbVar15 + 1;
          }
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        if (iVar3 != 0) {
          pbVar16 = param_2 + 3;
          pbVar15 = param_2;
          param_2 = (byte *)iVar3;
          do {
            uVar6 = (ushort)pbVar16[-1] * 0x100 + (ushort)*pbVar16;
            if (uVar6 == 0xffff) {
              *(undefined2 *)pbVar15 = *(undefined2 *)(pbVar16 + -3);
            }
            else if (uVar6 == 0) {
              *pbVar15 = *(byte *)(param_4 + 8);
              pbVar15[1] = *(byte *)(param_4 + 7);
            }
            else {
              uVar7 = ((uint)pbVar16[-3] * 0x100 + (uint)pbVar16[-2]) * (uint)uVar6 + 0x8000 +
                      (uint)*(ushort *)(param_5 + 7) * (0xffff - (uint)uVar6);
              iVar8 = (uVar7 >> 0x10) + uVar7;
              pbVar15[1] = (byte)((uint)iVar8 >> 0x10);
              *pbVar15 = (byte)((uint)iVar8 >> 0x18);
            }
            pbVar16 = pbVar16 + 4;
            pbVar15 = pbVar15 + 2;
            param_2 = (byte *)((int)param_2 + -1);
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (iVar3 != 0) {
        pbVar16 = param_2 + 1;
        pbVar15 = param_2;
        param_2 = (byte *)iVar3;
        do {
          uVar6 = (ushort)pbVar16[1] * 0x100 + (ushort)pbVar16[2];
          if (uVar6 == 0xffff) {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(*pbVar16 >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar16[-1] * 2);
LAB_01125417:
            *pbVar15 = (byte)((ushort)uVar2 >> 8);
            pbVar15[1] = (byte)uVar2;
          }
          else {
            if (uVar6 != 0) {
              uVar7 = (uint)*(ushort *)(param_5 + 7) * (0xffff - (uint)uVar6) + 0x8000 +
                      (uint)*(ushort *)
                             (*(int *)(param_11 + (uint)(*pbVar16 >> (param_12 & 0x1f)) * 4) +
                             (uint)pbVar16[-1] * 2) * (uint)uVar6;
              uVar7 = (uVar7 >> 0x10) + uVar7;
              uVar2 = *(undefined2 *)
                       (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                       (uVar7 >> 0x18) * 2);
              goto LAB_01125417;
            }
            *pbVar15 = *(byte *)(param_4 + 8);
            pbVar15[1] = *(byte *)(param_4 + 7);
          }
          pbVar16 = pbVar16 + 4;
          pbVar15 = pbVar15 + 2;
          param_2 = (byte *)((int)param_2 + -1);
        } while (param_2 != (byte *)0x0);
      }
      break;
    case 6:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          if (iVar3 != 0) {
            pbVar15 = param_2 + 2;
            pbVar16 = param_2 + 1;
            param_2 = (byte *)iVar3;
            do {
              bVar4 = pbVar16[2];
              if (bVar4 == 0xff) {
                pbVar15[-2] = pbVar16[-1];
                pbVar15[-1] = *pbVar16;
                *pbVar15 = pbVar16[1];
              }
              else if (bVar4 == 0) {
                pbVar15[-2] = *(byte *)(param_4 + 1);
                pbVar15[-1] = *(byte *)(param_4 + 3);
                *pbVar15 = *(byte *)(param_4 + 5);
              }
              else {
                uVar7 = (uint)bVar4;
                sVar9 = 0xff - (ushort)bVar4;
                uVar11 = pbVar16[-1] * uVar7 + 0x80 +
                         (uint)(ushort)(*(short *)(param_4 + 1) * sVar9) & 0xffff;
                pbVar15[-2] = (byte)((uVar11 >> 8) + uVar11 >> 8);
                uVar11 = (ushort)(*(short *)(param_4 + 3) * sVar9) + 0x80 + *pbVar16 * uVar7 &
                         0xffff;
                pbVar15[-1] = (byte)((uVar11 >> 8) + uVar11 >> 8);
                uVar7 = pbVar16[1] * uVar7 + 0x80 + (uint)(ushort)(*(short *)(param_4 + 5) * sVar9)
                        & 0xffff;
                *pbVar15 = (byte)((uVar7 >> 8) + uVar7 >> 8);
              }
              pbVar16 = pbVar16 + 4;
              pbVar15 = pbVar15 + 3;
              param_2 = (byte *)((int)param_2 + -1);
            } while (param_2 != (byte *)0x0);
          }
        }
        else if (iVar3 != 0) {
          pbVar15 = param_2 + 2;
          pbVar16 = param_2 + 1;
          param_2 = (byte *)iVar3;
          do {
            bVar4 = pbVar16[2];
            if (bVar4 == 0xff) {
              pbVar15[-2] = *(byte *)((uint)pbVar16[-1] + param_6);
              pbVar15[-1] = *(byte *)((uint)*pbVar16 + param_6);
              *pbVar15 = *(byte *)((uint)pbVar16[1] + param_6);
            }
            else if (bVar4 == 0) {
              pbVar15[-2] = *(byte *)(param_4 + 1);
              pbVar15[-1] = *(byte *)(param_4 + 3);
              *pbVar15 = *(byte *)(param_4 + 5);
            }
            else {
              uVar7 = (uint)bVar4;
              sVar9 = 0xff - (ushort)bVar4;
              uVar11 = *(byte *)((uint)pbVar16[-1] + param_8) * uVar7 + 0x80 +
                       (uint)(ushort)(*(short *)(param_5 + 1) * sVar9) & 0xffff;
              pbVar15[-2] = *(byte *)(((int)((uVar11 >> 8) + uVar11) >> 8 & 0xffU) + param_7);
              uVar11 = *(byte *)((uint)*pbVar16 + param_8) * uVar7 + 0x80 +
                       (uint)(ushort)(*(short *)(param_5 + 3) * sVar9) & 0xffff;
              pbVar15[-1] = *(byte *)(((int)((uVar11 >> 8) + uVar11) >> 8 & 0xffU) + param_7);
              uVar7 = *(byte *)((uint)pbVar16[1] + param_8) * uVar7 + 0x80 +
                      (uint)(ushort)(*(short *)(param_5 + 5) * sVar9) & 0xffff;
              *pbVar15 = *(byte *)(((int)((uVar7 >> 8) + uVar7) >> 8 & 0xffU) + param_7);
            }
            pbVar16 = pbVar16 + 4;
            pbVar15 = pbVar15 + 3;
            param_2 = (byte *)((int)param_2 + -1);
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        if (iVar3 != 0) {
          pbVar15 = param_2 + 2;
          pbVar16 = param_2 + 7;
          param_2 = (byte *)iVar3;
          do {
            uVar6 = (ushort)pbVar16[-1] * 0x100 + (ushort)*pbVar16;
            if (uVar6 == 0xffff) {
              *(undefined4 *)(pbVar15 + -2) = *(undefined4 *)(pbVar16 + -7);
              *(undefined2 *)(pbVar15 + 2) = *(undefined2 *)(pbVar16 + -3);
            }
            else {
              if (uVar6 == 0) {
                pbVar15[-2] = *(byte *)(param_4 + 2);
                pbVar15[-1] = *(byte *)(param_4 + 1);
                *pbVar15 = *(byte *)(param_4 + 4);
                pbVar15[1] = *(byte *)(param_4 + 3);
                pbVar15[2] = *(byte *)(param_4 + 6);
                bVar4 = *(byte *)(param_4 + 5);
              }
              else {
                bVar4 = pbVar16[-5];
                bVar5 = pbVar16[-4];
                bVar13 = pbVar16[-3];
                uVar11 = (uint)uVar6;
                bVar1 = pbVar16[-2];
                iVar12 = 0xffff - uVar11;
                uVar7 = ((uint)pbVar16[-7] * 0x100 + (uint)pbVar16[-6]) * uVar11 + 0x8000 +
                        (uint)*(ushort *)(param_4 + 1) * iVar12;
                iVar8 = (uVar7 >> 0x10) + uVar7;
                pbVar15[-1] = (byte)((uint)iVar8 >> 0x10);
                pbVar15[-2] = (byte)((uint)iVar8 >> 0x18);
                uVar7 = (uint)*(ushort *)(param_4 + 3) * iVar12 + 0x8000 +
                        ((uint)bVar4 * 0x100 + (uint)bVar5) * uVar11;
                iVar8 = (uVar7 >> 0x10) + uVar7;
                pbVar15[1] = (byte)((uint)iVar8 >> 0x10);
                *pbVar15 = (byte)((uint)iVar8 >> 0x18);
                uVar7 = (uint)*(ushort *)(param_4 + 5) * iVar12 + 0x8000 +
                        ((uint)bVar13 * 0x100 + (uint)bVar1) * uVar11;
                iVar8 = (uVar7 >> 0x10) + uVar7;
                bVar4 = (byte)((uint)iVar8 >> 0x10);
                pbVar15[2] = (byte)((uint)iVar8 >> 0x18);
              }
              pbVar15[3] = bVar4;
            }
            pbVar16 = pbVar16 + 8;
            pbVar15 = pbVar15 + 6;
            param_2 = (byte *)((int)param_2 + -1);
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (iVar3 != 0) {
        pbVar15 = param_2 + 2;
        param_2 = param_2 + 1;
        param_6 = iVar3;
        do {
          uVar6 = (ushort)param_2[5] * 0x100 + (ushort)param_2[6];
          if (uVar6 == 0xffff) {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(*param_2 >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[-1] * 2);
            pbVar15[-1] = (byte)uVar2;
            pbVar15[-2] = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(param_2[2] >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[1] * 2);
            pbVar15[1] = (byte)uVar2;
            *pbVar15 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(param_2[4] >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[3] * 2);
            pbVar15[3] = (byte)uVar2;
            pbVar15[2] = (byte)((ushort)uVar2 >> 8);
          }
          else if (uVar6 == 0) {
            pbVar15[-2] = *(byte *)(param_4 + 2);
            pbVar15[-1] = *(byte *)(param_4 + 1);
            *pbVar15 = *(byte *)(param_4 + 4);
            pbVar15[1] = *(byte *)(param_4 + 3);
            pbVar15[2] = *(byte *)(param_4 + 6);
            pbVar15[3] = *(byte *)(param_4 + 5);
          }
          else {
            uVar11 = (uint)uVar6;
            iVar8 = 0xffff - uVar11;
            uVar7 = (uint)*(ushort *)(param_4 + 1) * iVar8 + 0x8000 +
                    *(ushort *)
                     (*(int *)(param_11 + (uint)(*param_2 >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[-1] * 2) * uVar11;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar7 >> 0x18) * 2);
            pbVar15[-1] = (byte)uVar2;
            pbVar15[-2] = (byte)((ushort)uVar2 >> 8);
            uVar7 = (uint)*(ushort *)(param_4 + 3) * iVar8 + 0x8000 +
                    *(ushort *)
                     (*(int *)(param_11 + (uint)(param_2[2] >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[1] * 2) * uVar11;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar7 >> 0x18) * 2);
            pbVar15[1] = (byte)uVar2;
            *pbVar15 = (byte)((ushort)uVar2 >> 8);
            uVar7 = *(ushort *)
                     (*(int *)(param_11 + (uint)(param_2[4] >> (param_12 & 0x1f)) * 4) +
                     (uint)param_2[3] * 2) * uVar11 + 0x8000 +
                    (uint)*(ushort *)(param_4 + 5) * iVar8;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar7 >> 0x18) * 2);
            pbVar15[3] = (byte)uVar2;
            pbVar15[2] = (byte)((ushort)uVar2 >> 8);
          }
          param_2 = param_2 + 8;
          pbVar15 = pbVar15 + 6;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
    }
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      cVar14 = *(char *)((int)param_1 + 10) + -1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
      bVar4 = *(char *)((int)param_1 + 9) * cVar14;
      *(byte *)((int)param_1 + 0xb) = bVar4;
      *(char *)((int)param_1 + 10) = cVar14;
      param_1[1] = (uint)bVar4 * iVar3 + 7 >> 3;
    }
  }
  return;
}


