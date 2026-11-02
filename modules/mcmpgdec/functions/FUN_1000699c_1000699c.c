/* Module: mcmpgdec.dll
   Function: FUN_1000699c
   Address: 1000699c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000699c(int param_1,uint *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_10;
  
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x670) = *param_3;
  *(undefined4 *)(param_1 + 0x66c) = *param_3;
  *(int *)(param_1 + 0x678) = *param_4;
  *(undefined4 *)(param_1 + 0x68c) = 0;
LAB_100069dd:
  while( true ) {
    if ((((param_5 != 0) && ((*(byte *)(param_1 + 0x694) & 0x10) != 0)) &&
        ((*(int *)(param_1 + 0x678) + *(int *)(param_1 + 0x66c)) - *(int *)(param_1 + 0x670) <=
         param_5)) && ((*(byte *)((int)param_2 + 0xe) & 0x10) != 0)) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x8c);
        *(undefined4 *)(param_1 + 0x8c) = 0;
        puVar8 = (undefined4 *)(param_1 + 0x6b8);
        puVar9 = (undefined4 *)(param_1 + 0x698);
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        if ((*(int *)(param_1 + 0x690) != 0) || (*(undefined **)(param_1 + 8) != &DAT_1000cbec)) {
          FUN_1000cbf8((uint *)(param_1 + 0x10),(undefined4 *)(param_1 + 0x80),
                       *(int *)(param_1 + 0x590),*(int *)(param_1 + 0x60c),*(int *)(param_1 + 0xfc))
          ;
        }
        *(int *)(param_1 + 0xcc) = param_1 + 0x9c;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x84);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x88);
        *param_2 = *param_2 | 0x100001 | *(uint *)(param_1 + 0x9c) & 0x600000;
      }
      goto LAB_10007430;
    }
    if (param_2[6] == 0) break;
    local_10 = FUN_10007498(param_1,param_2[9],(int *)(param_2 + 8),(ushort *)(param_2 + 0x12),
                            param_2 + 10);
    if (0 < local_10) {
      if ((param_5 != 0) &&
         ((*(int *)(param_1 + 0x678) + *(int *)(param_1 + 0x66c)) - *(int *)(param_1 + 0x670) <=
          param_5)) {
        param_2[6] = 0;
        goto LAB_10007354;
      }
      goto LAB_10007430;
    }
    if (local_10 != -1) break;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xbc) + 2);
    *pbVar1 = *pbVar1 | 0x20;
    param_2[6] = 0;
    if (*(int *)(param_1 + 0x134) + 0xf >> 4 != *(int *)(param_1 + 0x120)) {
      piVar7 = (int *)(param_1 + 0x66c);
      uVar6 = FUN_10003c18(piVar7,0xffffff00,0x100);
      if (uVar6 != 0) {
        while (uVar6 - 0x101 < 0xaf) {
          FUN_10003920(piVar7);
          uVar6 = FUN_10003c18(piVar7,0xffffff00,0x100);
        }
      }
    }
LAB_10007365:
    param_2[7] = 0;
    param_2[6] = 0;
    if ((*(int *)(param_1 + 0x5f0) == 3) ||
       (uVar6 = (uint)(*(int *)(param_1 + 0x110) == 0), *(uint *)(param_1 + 0x110) = uVar6,
       uVar6 == 0)) {
      if (param_2[5] != 0) {
        pbVar1 = (byte *)(*(int *)(param_1 + 0xbc) + 2);
        *pbVar1 = *pbVar1 | 0x40;
      }
      param_2[5] = 0;
      if ((**(int **)(param_1 + 0xcc) != 0) && (*(int *)(param_1 + 0x690) != 0)) {
        FUN_1000cbf8((uint *)(param_1 + 0x10),(undefined4 *)(param_1 + 0xc0),
                     *(int *)(param_1 + 0x590),*(int *)(param_1 + 0x60c),*(int *)(param_1 + 0xfc));
      }
      *param_2 = *param_2 | 0x100000 | **(uint **)(param_1 + 0xcc) & 0x600000;
      local_10 = 0;
      goto LAB_10007430;
    }
    pbVar1 = (byte *)(*(int *)(param_1 + 0xbc) + 2);
    *pbVar1 = *pbVar1 & 0xdf;
  }
  piVar7 = (int *)(param_1 + 0x66c);
  uVar6 = FUN_10003c18(piVar7,0xffffff00,0x100);
  if (uVar6 == 0) {
    if (((param_5 != 0) && (param_2[6] != 0)) &&
       ((*(int *)(param_1 + 0x678) + *(int *)(param_1 + 0x66c)) - *(int *)(param_1 + 0x670) <=
        param_5)) goto LAB_10007354;
LAB_10006c94:
    local_10 = 0x106;
    goto LAB_10007430;
  }
  uVar2 = *param_2;
  *param_2 = uVar2 | 0x10000;
  iVar5 = (*(int *)(param_1 + 0x678) + *(int *)(param_1 + 0x66c)) - *(int *)(param_1 + 0x670);
  if (iVar5 < 0x106) goto LAB_10006c94;
  if (uVar6 - 0x101 < 0xaf) {
    if ((*(byte *)((int)param_2 + 5) & 0x40) == 0) {
      *param_2 = uVar2 | 0x14000;
      FUN_10003920(piVar7);
      *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
      if (((*(byte *)((int)param_2 + 9) & 0x40) == 0) && (param_2[6] = 0, param_2[5] != 0)) {
        param_2[0x14] = 0;
        param_2[0x13] = 0;
        param_2[0x12] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[0xb] = 0;
        param_2[10] = 0;
        param_2[0x11] = 0;
        param_2[0x10] = 0;
        param_2[0xd] = 0;
        param_2[0xc] = 0;
        uVar2 = FUN_10007f60(param_1);
        puVar3 = FUN_10007d00(param_1,iVar5 * 8);
        param_2[8] = (uint)puVar3;
        if ((puVar3 != (undefined *)0xffffffff) &&
           (iVar5 = *(int *)(param_1 + 0x11c),
           param_2[8] = (uint)(puVar3 + (((uVar6 & 0xff) - 1) + uVar2 * 0x80) * iVar5 + -1),
           (int)(puVar3 + (((uVar6 & 0xff) - 1) + uVar2 * 0x80) * iVar5 + -1) < (int)param_2[9])) {
          param_2[6] = 1;
        }
      }
      goto LAB_100069dd;
    }
  }
  else {
    if (uVar6 == 0x1b3) {
      if ((*(byte *)((int)param_2 + 5) & 1) != 0) goto LAB_10007354;
      *param_2 = uVar2 | 0x10100;
      FUN_10003920(piVar7);
      *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
      if ((*(byte *)((int)param_2 + 9) & 1) == 0) {
        FUN_10008044(param_1);
        goto LAB_10007333;
      }
      goto LAB_100069dd;
    }
    if (uVar6 < 0x1b4) {
      if (uVar6 == 0x100) {
        if ((*(byte *)((int)param_2 + 5) & 8) != 0) goto LAB_10007354;
        *param_2 = uVar2 | 0x10800;
        FUN_10003920(piVar7);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
        if ((*(byte *)((int)param_2 + 9) & 8) == 0) {
          FUN_10007eb0(param_1);
          param_2[7] = 1;
          *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) & 0xbf;
          param_2[1] = 0xfffeadff;
          param_2[0x14] = 0;
          param_2[0x13] = 0;
          param_2[0x12] = 0;
          param_2[0xf] = 0;
          param_2[0xe] = 0;
          param_2[0xb] = 0;
          param_2[10] = 0;
          param_2[0x11] = 0;
          param_2[0x10] = 0;
          param_2[0xd] = 0;
          param_2[0xc] = 0;
          if (((*(uint *)(param_1 + 0x134) & 0x1f) == 0) || (*(int *)(param_1 + 0x58c) != 0)) {
            uVar6 = *(int *)(param_1 + 0x11c) * *(int *)(param_1 + 0x120);
          }
          else {
            uVar6 = ((int)(*(uint *)(param_1 + 0x134) + 0xf) >> 4) * *(int *)(param_1 + 0x11c);
          }
          param_2[9] = uVar6;
          if (*(int *)(param_1 + 0x5f0) != 3) {
            param_2[9] = (int)param_2[9] >> 1;
          }
          if (*(int *)(param_1 + 0x5c0) == 3) {
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xbc) = param_1 + 0xac;
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
            uVar4 = *(undefined4 *)(param_1 + 0xa8);
          }
          else {
            if (*(int *)(param_1 + 0x110) == 0) {
              uVar4 = *(undefined4 *)(param_1 + 0x90);
              *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x80);
              *(undefined4 *)(param_1 + 0x80) = uVar4;
              uVar4 = *(undefined4 *)(param_1 + 0x94);
              *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x84);
              *(undefined4 *)(param_1 + 0x84) = uVar4;
              uVar4 = *(undefined4 *)(param_1 + 0x98);
              *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x88);
              *(undefined4 *)(param_1 + 0x88) = uVar4;
              *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x8c);
              *(undefined4 *)(param_1 + 0x8c) = 0;
              puVar8 = (undefined4 *)(param_1 + 0x6b8);
              puVar9 = (undefined4 *)(param_1 + 0x698);
              for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_1 + 0x5bc);
              *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_1 + 0x5c0);
              *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x5c4);
              *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x5c8);
              *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_1 + 0x5cc);
              *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_1 + 0x5d0);
              *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x5d4);
              *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x5d8);
            }
            *(int *)(param_1 + 0xbc) = param_1 + 0x8c;
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x80);
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x84);
            uVar4 = *(undefined4 *)(param_1 + 0x88);
          }
          *(undefined4 *)(param_1 + 0xb8) = uVar4;
          if (*(int *)(param_1 + 0x5f0) == 2) {
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xfc);
            *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x104);
            *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x104);
          }
          **(undefined4 **)(param_1 + 0xbc) = 0;
          param_2[5] = 0;
          if (*(int *)(param_1 + 0x5c0) == 1) {
            if ((int)param_2[4] < 3) {
              param_2[5] = 1;
            }
            *(undefined4 *)(param_1 + 0x668) = 0;
          }
          else if (*(int *)(param_1 + 0x5c0) == 2) {
            if (((int)param_2[4] < 2) && (*(int *)(param_1 + 0x9c) != 0)) {
              param_2[5] = 1;
            }
            *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
          }
          else {
            if (*(int *)(param_1 + 0x668) == 0) {
              iVar5 = 0;
              if ((*(int *)(param_1 + 0x580) != 0) ||
                 ((*(int *)(param_1 + 0x9c) != 0 && (*(int *)(param_1 + 0x584) == 0)))) {
                iVar5 = 1;
              }
            }
            else {
              iVar5 = *(int *)(param_1 + 0x9c);
            }
            if (((param_2[4] == 0) && (iVar5 != 0)) && (*(int *)(param_1 + 0x8c) != 0)) {
              param_2[5] = 1;
            }
          }
          if (((*(int *)(param_1 + 0x5c0) == 3) || ((*(byte *)(param_1 + 0x694) & 0x10) == 0)) ||
             (*(int *)(param_1 + 0x5bc) == 0)) {
            *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb0);
            *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb4);
            *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xb8);
            *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xbc);
          }
          else {
            *(int *)(param_1 + 0xcc) = param_1 + 0x9c;
            *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x90);
            *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x94);
            *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x98);
          }
LAB_10007333:
          *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | *param_2 & 0x400;
          *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | *param_2 & 0x100;
        }
        goto LAB_100069dd;
      }
      if (uVar6 != 0x1b2) goto LAB_100072f0;
      if ((*(byte *)((int)param_2 + 5) & 0x10) == 0) {
        *param_2 = uVar2 | 0x11000;
        FUN_10003920(piVar7);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
        if ((*(byte *)((int)param_2 + 9) & 0x10) == 0) goto LAB_10007333;
        goto LAB_100069dd;
      }
    }
    else {
      if (uVar6 == 0x1b7) {
        if ((*(byte *)((int)param_2 + 5) & 0x20) != 0) goto LAB_10007354;
        *param_2 = uVar2 | 0x12000;
        FUN_10003920(piVar7);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
        if ((*(byte *)((int)param_2 + 9) & 0x20) == 0) {
          local_10 = -1;
LAB_10007430:
          uVar6 = *param_2;
          if ((uVar6 & param_2[3]) != 0) {
            uVar6 = uVar6 | 1;
          }
          *param_2 = uVar6;
          if ((*(byte *)(param_1 + 0x694) & 0x10) != 0) {
            if (*(int *)(param_1 + 0x8c) != 0) {
              uVar6 = uVar6 | 0x800000;
            }
            *param_2 = uVar6;
          }
          *param_4 = (*(int *)(param_1 + 0x678) + *(int *)(param_1 + 0x66c)) -
                     *(int *)(param_1 + 0x670);
          *param_3 = *(undefined4 *)(param_1 + 0x670);
          return local_10;
        }
        goto LAB_100069dd;
      }
      if (uVar6 < 0x1b8) {
        if (uVar6 == 0x1b5) {
          if ((*(byte *)((int)param_2 + 5) & 2) != 0) goto LAB_10007354;
          *param_2 = uVar2 | 0x10200;
          FUN_10003920(piVar7);
          *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
          if ((*(byte *)((int)param_2 + 9) & 2) == 0) {
            FUN_10008ff8(param_1);
            goto LAB_10007333;
          }
          goto LAB_100069dd;
        }
LAB_100072f0:
        if (-1 < (short)param_2[1]) {
          *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) | 0x80;
          FUN_10003920(piVar7);
          *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
          if (-1 < (short)param_2[2]) {
            if (*(int *)(param_1 + 0x60) == 0) {
              FUN_1000bb3c(param_1,"Unexpected next_start_code (ignored)");
            }
            goto LAB_10007333;
          }
          goto LAB_100069dd;
        }
      }
      else {
        if (uVar6 != 0x1b8) goto LAB_100072f0;
        if ((*(byte *)((int)param_2 + 5) & 4) == 0) {
          *param_2 = uVar2 | 0x10400;
          FUN_10003920(piVar7);
          *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe;
          if ((*(byte *)((int)param_2 + 9) & 4) == 0) {
            FUN_10007e0c(param_1);
            goto LAB_10007333;
          }
          goto LAB_100069dd;
        }
      }
    }
  }
LAB_10007354:
  param_2[1] = 0;
  if (param_2[7] != 0) goto LAB_10007365;
  goto LAB_10007430;
}


