/* Module: vegas30k.dll
   Function: FUN_0102fe80
   Address: 0102fe80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0102fe80(int param_1,int param_2,double *param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  double *local_98;
  float *local_94;
  double *local_90;
  undefined2 uStack_8b;
  double *local_7c;
  double *local_78;
  double *local_74;
  double *local_70;
  byte *local_6c;
  double *local_68;
  byte *local_64;
  undefined8 local_60;
  float *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  double local_48;
  undefined2 uStack_3b;
  double *local_38;
  short *local_34;
  double *local_30;
  short *local_2c;
  double *local_28;
  double *local_24;
  double *local_20;
  
  iVar6 = 0;
  if ((((param_7 != 0) && (iVar6 = *(int *)(param_7 + 0x1d5c), iVar6 != 0)) && (param_1 != 0x20)) &&
     (param_1 != 0x21)) {
    iVar6 = 0;
  }
  switch(param_1) {
  case 0x10:
    iVar6 = FUN_01031990(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x11:
    iVar6 = FUN_01032350(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x12:
    iVar6 = FUN_01032ae0(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x13:
    iVar6 = FUN_01033520(param_3,param_4,param_5,param_6,param_7);
    break;
  default:
    goto switchD_0102fed5_caseD_14;
  case 0x20:
    if (iVar6 == 0) {
      iVar6 = FUN_01033c70(param_3,param_4,param_5,param_6,param_7,0);
    }
    else {
      iVar6 = FUN_01033c70(param_3,param_4,param_5,param_6,param_7,1);
    }
    break;
  case 0x21:
    iVar6 = FUN_010342d0(param_3,param_4,param_5,param_6,(ulonglong)CONCAT14(iVar6 != 0,param_7));
    break;
  case 0x30:
    iVar6 = FUN_01033520(param_3,param_4,param_5,param_6,param_7);
  }
  if (iVar6 == -1) {
switchD_0102fed5_caseD_14:
    dVar3 = _DAT_011dad58 / *(double *)(param_7 + 0x18);
    iVar6 = param_4;
    if (dVar3 < _DAT_011dad58) {
      local_48 = (double)(param_6 + -1);
      if (-1 < param_4 + -1) {
        local_6c = (byte *)((param_4 + -1) * param_2);
        local_4c = param_4;
        do {
          iVar4 = ftol();
          if (0 < param_2) {
            local_64 = local_6c;
            iVar8 = (iVar4 + 1) * param_2;
            iVar7 = iVar4 * param_2;
            local_98 = (double *)(iVar8 + param_5);
            local_7c = (double *)(iVar7 + param_5);
            local_74 = (double *)(param_5 + iVar8 * 8);
            local_94 = (float *)(param_5 + iVar8 * 4);
            local_78 = (double *)(param_5 + iVar8 * 2);
            local_70 = (double *)(param_5 + iVar7 * 8);
            local_90 = (double *)(param_5 + iVar7 * 4);
            psVar9 = (short *)(param_5 + iVar7 * 3);
            local_68 = (double *)(param_5 + iVar7 * 2);
            local_50 = param_2;
            do {
              switch(param_1) {
              case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = (double)(int)(char)(*(byte *)local_7c ^ 0x80) * _DAT_011db2b0;
                break;
              case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = (double)(int)*(short *)local_68 * _DAT_011db2b8;
                break;
              case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
                uStack_8b = (undefined2)((uint3)*(undefined3 *)psVar9 >> 8);
                local_54 = CONCAT22(uStack_8b,*psVar9 << 8);
                local_60 = (double)local_54 * _DAT_011db2c8;
                break;
              case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = (double)(int)*(float *)local_90 * _DAT_011db2c8;
                break;
              default:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = -1.0;
                if (param_1 - 0x10U < 0x21) break;
                goto switchD_01030630_caseD_4;
              case 0x10:
                local_60 = (double)*(float *)local_90;
                break;
              case 0x11:
                local_60 = *local_70;
                break;
              case 0x20:
                local_60 = (double)(int)*(float *)local_90 * _DAT_011db2c0;
              }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)((int)&PTR_caseD_10_01030900 + param_1)) {
              case 0:
                dVar1 = (double)(int)(char)(*(byte *)local_98 ^ 0x80) * _DAT_011db2b0;
                break;
              case 1:
                dVar1 = (double)(int)*(short *)local_78 * _DAT_011db2b8;
                break;
              case 2:
                iVar7 = FUN_01031790();
                dVar1 = (double)iVar7 * _DAT_011db2c8;
                break;
              case 3:
                dVar1 = (double)(int)*local_94 * _DAT_011db2c8;
                break;
              default:
switchD_01030630_caseD_4:
                dVar1 = _DAT_011dbdc8;
                break;
              case 0x10:
                dVar1 = (double)*local_94;
                break;
              case 0x11:
                dVar1 = *local_74;
                break;
              case 0x20:
                dVar1 = (double)(int)*local_94 * _DAT_011db2c0;
              }
              FUN_01032140(param_1,param_3,local_64,
                           (dVar1 - local_60) * (local_48 - (double)iVar4) + local_60);
              psVar9 = (short *)((int)psVar9 + 3);
              local_68 = (double *)((int)local_68 + 2);
              local_78 = (double *)((int)local_78 + 2);
              local_90 = (double *)((int)local_90 + 4);
              local_94 = local_94 + 1;
              local_70 = local_70 + 1;
              local_74 = local_74 + 1;
              local_7c = (double *)((int)local_7c + 1);
              local_98 = (double *)((int)local_98 + 1);
              local_64 = (byte *)((int)local_64 + 1);
              local_50 = local_50 + -1;
            } while (local_50 != 0);
          }
          local_48 = local_48 - dVar3;
          local_6c = (byte *)((int)local_6c - param_2);
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
    }
    else {
      local_48 = 0.0;
      if (0 < param_4) {
        local_7c = param_3;
        local_68 = param_3;
        local_78 = param_3;
        local_70 = param_3;
        local_74 = param_3;
        local_54 = param_4;
        do {
          iVar6 = ftol();
          if (0 < param_2) {
            local_98 = local_7c;
            iVar7 = (iVar6 + 1) * param_2;
            iVar4 = iVar6 * param_2;
            local_64 = (byte *)(iVar7 + param_5);
            local_6c = (byte *)(iVar4 + param_5);
            local_30 = local_74;
            local_90 = local_70;
            local_20 = local_78;
            local_38 = local_68;
            local_24 = (double *)(param_5 + iVar7 * 8);
            local_94 = (float *)(param_5 + iVar7 * 4);
            psVar9 = (short *)(param_5 + iVar7 * 3);
            local_2c = (short *)(param_5 + iVar7 * 2);
            local_28 = (double *)(param_5 + iVar4 * 8);
            local_58 = (float *)(param_5 + iVar4 * 4);
            psVar10 = (short *)(param_5 + iVar4 * 3);
            local_34 = (short *)(param_5 + iVar4 * 2);
            local_50 = param_2;
            do {
              switch(param_1) {
              case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = (double)(int)(char)(*local_6c ^ 0x80) * _DAT_011db2b0;
                break;
              case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = (double)(int)*local_34 * _DAT_011db2b8;
                break;
              case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
                uStack_3b = (undefined2)((uint3)*(undefined3 *)psVar10 >> 8);
                local_60._0_4_ = CONCAT22(uStack_3b,*psVar10 << 8);
                dVar1 = (double)(int)local_60 * _DAT_011db2c8;
                break;
              case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = (double)(int)*local_58 * _DAT_011db2c8;
                break;
              default:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = _DAT_011dbdc8;
                if (param_1 - 0x10U < 0x21) break;
                goto switchD_0103016c_caseD_4;
              case 0x10:
                dVar1 = (double)*local_58;
                break;
              case 0x11:
                dVar1 = *local_28;
                break;
              case 0x20:
                dVar1 = (double)(int)*local_58 * _DAT_011db2c0;
              }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)((int)&PTR_caseD_10_01030834 + param_1)) {
              case 0:
                dVar2 = (double)(int)(char)(*local_64 ^ 0x80) * _DAT_011db2b0;
                break;
              case 1:
                dVar2 = (double)(int)*local_2c * _DAT_011db2b8;
                break;
              case 2:
                uStack_8b = (undefined2)((uint3)*(undefined3 *)psVar9 >> 8);
                local_4c = CONCAT22(uStack_8b,*psVar9 << 8);
                dVar2 = (double)local_4c * _DAT_011db2c8;
                break;
              case 3:
                dVar2 = (double)(int)*local_94 * _DAT_011db2c8;
                break;
              default:
switchD_0103016c_caseD_4:
                dVar2 = _DAT_011dbdc8;
                break;
              case 0x10:
                dVar2 = (double)*local_94;
                break;
              case 0x11:
                dVar2 = *local_24;
                break;
              case 0x20:
                dVar2 = (double)(int)*local_94 * _DAT_011db2c0;
              }
              dVar1 = (dVar2 - dVar1) * (local_48 - (double)iVar6) + dVar1;
              switch(param_1) {
              case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
                iVar4 = ftol();
                if (iVar4 < -0x80) {
                  *(undefined1 *)local_98 = 0;
                }
                else if (iVar4 < 0x80) {
                  *(byte *)local_98 = (byte)iVar4 ^ 0x80;
                }
                else {
                  *(undefined1 *)local_98 = 0xff;
                }
                break;
              case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
                iVar4 = ftol();
                if (iVar4 < -0x8000) {
                  *(undefined2 *)local_38 = 0x8000;
                }
                else {
                  if (0x7fff < iVar4) {
                    iVar4 = 0x7fff;
                  }
                  *(short *)local_38 = (short)iVar4;
                }
                break;
              case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
                iVar4 = ftol();
                if (iVar4 < -0x800000) {
                  *(undefined2 *)local_20 = 0;
                  *(undefined1 *)((int)local_20 + 2) = 0x80;
                }
                else {
                  iVar7 = 0x7fffff;
                  if (iVar4 < 0x800000) {
                    iVar7 = iVar4;
                  }
                  *(short *)local_20 = (short)iVar7;
                  *(char *)((int)local_20 + 2) = (char)((uint)iVar7 >> 0x10);
                }
                break;
              case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
                fVar5 = (float)FUN_010315c0(dVar1);
                *(float *)local_90 = fVar5;
                break;
              case 0x10:
                *(float *)local_90 = (float)dVar1;
                break;
              case 0x11:
                *local_30 = dVar1;
                break;
              case 0x20:
                fVar5 = (float)FUN_01031590(dVar1);
                *(float *)local_90 = fVar5;
              }
                    /* WARNING: This code block may not be properly labeled as switch case */
              psVar10 = (short *)((int)psVar10 + 3);
              local_34 = local_34 + 1;
              local_2c = local_2c + 1;
              local_38 = (double *)((int)local_38 + 2);
              local_20 = (double *)((int)local_20 + 3);
              local_58 = local_58 + 1;
              local_94 = local_94 + 1;
              local_90 = (double *)((int)local_90 + 4);
              local_28 = local_28 + 1;
              local_24 = local_24 + 1;
              local_30 = local_30 + 1;
              psVar9 = (short *)((int)psVar9 + 3);
              local_6c = local_6c + 1;
              local_64 = local_64 + 1;
              local_98 = (double *)((int)local_98 + 1);
              local_50 = local_50 + -1;
            } while (local_50 != 0);
          }
          local_7c = (double *)((int)local_7c + param_2);
          local_74 = local_74 + param_2;
          local_48 = local_48 + dVar3;
          local_70 = (double *)((int)local_70 + param_2 * 4);
          local_78 = (double *)((int)local_78 + param_2 * 3);
          local_68 = (double *)((int)local_68 + param_2 * 2);
          local_54 = local_54 + -1;
          if (local_54 == 0) {
            return param_4;
          }
        } while( true );
      }
    }
  }
  return iVar6;
}


