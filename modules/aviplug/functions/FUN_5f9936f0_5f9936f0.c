/* Module: aviplug.dll
   Function: FUN_5f9936f0
   Address: 5f9936f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f9936f0(int param_1,int param_2,double *param_3,int param_4,double *param_5,int param_6,
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
  double *pdVar9;
  short *psVar10;
  undefined3 *puVar11;
  short *psVar12;
  double *local_98;
  float *local_94;
  double *local_90;
  undefined2 uStack_8b;
  double *local_7c;
  double *local_78;
  double *local_74;
  double *local_70;
  double *local_6c;
  double *local_68;
  double *local_64;
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
    iVar6 = FUN_5f995200((byte *)param_3,param_4,(int)param_5,param_6,param_7);
    break;
  case 0x11:
    iVar6 = FUN_5f995bc0((short *)param_3,param_4,(short *)param_5,param_6,param_7);
    break;
  case 0x12:
    iVar6 = FUN_5f996350((undefined2 *)param_3,param_4,(undefined2 *)param_5,param_6,param_7);
    break;
  case 0x13:
    iVar6 = FUN_5f996d90((int *)param_3,param_4,(int *)param_5,param_6,param_7);
    break;
  default:
    goto switchD_5f993745_caseD_14;
  case 0x20:
    if (iVar6 == 0) {
      iVar6 = FUN_5f9974e0((float *)param_3,param_4,(float *)param_5,param_6,param_7,0);
    }
    else {
      iVar6 = FUN_5f9974e0((float *)param_3,param_4,(float *)param_5,param_6,param_7,1);
    }
    break;
  case 0x21:
    iVar6 = FUN_5f997b40(param_3,param_4,param_5,param_6,param_7,(uint)(iVar6 != 0));
    break;
  case 0x30:
    iVar6 = FUN_5f996d90((int *)param_3,param_4,(int *)param_5,param_6,param_7);
  }
  if (iVar6 == -1) {
switchD_5f993745_caseD_14:
    dVar3 = _DAT_5f9d7c98 / *(double *)(param_7 + 0x18);
    iVar6 = param_4;
    if (dVar3 < _DAT_5f9d7c98) {
      local_48 = (double)(param_6 + -1);
      if (-1 < param_4 + -1) {
        local_6c = (double *)((param_4 + -1) * param_2);
        local_4c = param_4;
        do {
          iVar4 = ftol();
          if (0 < param_2) {
            local_64 = local_6c;
            iVar8 = (iVar4 + 1) * param_2;
            iVar7 = iVar4 * param_2;
            local_98 = (double *)(iVar8 + (int)param_5);
            local_7c = (double *)(iVar7 + (int)param_5);
            local_74 = param_5 + iVar8;
            local_94 = (float *)((int)param_5 + iVar8 * 4);
            puVar11 = (undefined3 *)((int)param_5 + iVar8 * 3);
            local_78 = (double *)((int)param_5 + iVar8 * 2);
            local_70 = param_5 + iVar7;
            local_90 = (double *)((int)param_5 + iVar7 * 4);
            psVar10 = (short *)((int)param_5 + iVar7 * 3);
            local_68 = (double *)((int)param_5 + iVar7 * 2);
            local_50 = param_2;
            do {
              pdVar9 = (double *)(float *)0x0;
              switch(param_1) {
              case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
                pdVar9 = (double *)(*(byte *)local_7c ^ 0x80);
                local_60 = (double)(int)(char)pdVar9 * _DAT_5f9ec300;
                break;
              case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = (double)(int)*(short *)local_68 * _DAT_5f9ec2f8;
                pdVar9 = local_68;
                break;
              case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
                uStack_8b = (undefined2)((uint3)*(undefined3 *)psVar10 >> 8);
                pdVar9 = (double *)CONCAT22((short)((uint)psVar10 >> 0x10),uStack_8b);
                local_54 = CONCAT22(uStack_8b,*psVar10 << 8);
                local_60 = (double)local_54 * _DAT_5f9ec2f0;
                break;
              case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = (double)(int)*(float *)local_90 * _DAT_5f9ec2f0;
                pdVar9 = local_90;
                break;
              default:
                    /* WARNING: This code block may not be properly labeled as switch case */
                local_60 = -1.0;
                pdVar9 = (double *)(float *)0x0;
                if (param_1 - 0x10U < 0x21) break;
                goto switchD_5f993ea0_caseD_4;
              case 0x10:
                local_60 = (double)*(float *)local_90;
                break;
              case 0x11:
                local_60 = *local_70;
                pdVar9 = (double *)*(float **)((int)local_70 + 4);
                break;
              case 0x20:
                local_60 = (double)(int)*(float *)local_90 * _DAT_5f9ec350;
              }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)((int)&PTR_caseD_10_5f994170 + param_1)) {
              case 0:
                dVar1 = (double)(int)(char)(*(byte *)local_98 ^ 0x80) * _DAT_5f9ec300;
                break;
              case 1:
                dVar1 = (double)(int)*(short *)local_78 * _DAT_5f9ec2f8;
                break;
              case 2:
                iVar7 = FUN_5f995000(CONCAT13((char)((uint)pdVar9 >> 0x18),*puVar11));
                dVar1 = (double)iVar7 * _DAT_5f9ec2f0;
                break;
              case 3:
                dVar1 = (double)(int)*local_94 * _DAT_5f9ec2f0;
                break;
              default:
switchD_5f993ea0_caseD_4:
                dVar1 = _DAT_5f9ec348;
                break;
              case 0x10:
                dVar1 = (double)*local_94;
                break;
              case 0x11:
                dVar1 = *local_74;
                break;
              case 0x20:
                dVar1 = (double)(int)*local_94 * _DAT_5f9ec350;
              }
              FUN_5f9959b0(param_1,(int)param_3,(int)local_64,
                           (dVar1 - local_60) * (local_48 - (double)iVar4) + local_60);
              psVar10 = (short *)((int)psVar10 + 3);
              local_68 = (double *)((int)local_68 + 2);
              local_78 = (double *)((int)local_78 + 2);
              puVar11 = (undefined3 *)((int)puVar11 + 3);
              local_90 = (double *)((int)local_90 + 4);
              local_94 = local_94 + 1;
              local_70 = local_70 + 1;
              local_74 = local_74 + 1;
              local_7c = (double *)((int)local_7c + 1);
              local_98 = (double *)((int)local_98 + 1);
              local_64 = (double *)((int)local_64 + 1);
              local_50 = local_50 + -1;
            } while (local_50 != 0);
          }
          local_48 = local_48 - dVar3;
          local_6c = (double *)((int)local_6c - param_2);
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
            local_64 = (double *)(iVar7 + (int)param_5);
            local_6c = (double *)(iVar4 + (int)param_5);
            local_30 = local_74;
            local_90 = local_70;
            local_20 = local_78;
            local_38 = local_68;
            local_24 = param_5 + iVar7;
            local_94 = (float *)((int)param_5 + iVar7 * 4);
            psVar10 = (short *)((int)param_5 + iVar7 * 3);
            local_2c = (short *)((int)param_5 + iVar7 * 2);
            local_28 = param_5 + iVar4;
            local_58 = (float *)((int)param_5 + iVar4 * 4);
            psVar12 = (short *)((int)param_5 + iVar4 * 3);
            local_34 = (short *)((int)param_5 + iVar4 * 2);
            local_50 = param_2;
            do {
              switch(param_1) {
              case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = (double)(int)(char)(*(byte *)local_6c ^ 0x80) * _DAT_5f9ec300;
                break;
              case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = (double)(int)*local_34 * _DAT_5f9ec2f8;
                break;
              case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
                uStack_3b = (undefined2)((uint3)*(undefined3 *)psVar12 >> 8);
                local_60._0_4_ = CONCAT22(uStack_3b,*psVar12 << 8);
                dVar1 = (double)(int)local_60 * _DAT_5f9ec2f0;
                break;
              case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = (double)(int)*local_58 * _DAT_5f9ec2f0;
                break;
              default:
                    /* WARNING: This code block may not be properly labeled as switch case */
                dVar1 = _DAT_5f9ec348;
                if (param_1 - 0x10U < 0x21) break;
                goto switchD_5f9939dc_caseD_4;
              case 0x10:
                dVar1 = (double)*local_58;
                break;
              case 0x11:
                dVar1 = *local_28;
                break;
              case 0x20:
                dVar1 = (double)(int)*local_58 * _DAT_5f9ec350;
              }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)((int)&PTR_caseD_10_5f9940a4 + param_1)) {
              case 0:
                dVar2 = (double)(int)(char)(*(byte *)local_64 ^ 0x80) * _DAT_5f9ec300;
                break;
              case 1:
                dVar2 = (double)(int)*local_2c * _DAT_5f9ec2f8;
                break;
              case 2:
                uStack_8b = (undefined2)((uint3)*(undefined3 *)psVar10 >> 8);
                local_4c = CONCAT22(uStack_8b,*psVar10 << 8);
                dVar2 = (double)local_4c * _DAT_5f9ec2f0;
                break;
              case 3:
                dVar2 = (double)(int)*local_94 * _DAT_5f9ec2f0;
                break;
              default:
switchD_5f9939dc_caseD_4:
                dVar2 = _DAT_5f9ec348;
                break;
              case 0x10:
                dVar2 = (double)*local_94;
                break;
              case 0x11:
                dVar2 = *local_24;
                break;
              case 0x20:
                dVar2 = (double)(int)*local_94 * _DAT_5f9ec350;
              }
              dVar1 = (dVar2 - dVar1) * (local_48 - (double)iVar6) + dVar1;
              switch(param_1) {
              case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
                iVar4 = ftol();
                if (iVar4 < -0x80) {
                  *(byte *)local_98 = 0;
                }
                else if (iVar4 < 0x80) {
                  *(byte *)local_98 = (byte)iVar4 ^ 0x80;
                }
                else {
                  *(byte *)local_98 = 0xff;
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
                fVar5 = (float)FUN_5f994e30(dVar1);
                *(float *)local_90 = fVar5;
                break;
              case 0x10:
                *(float *)local_90 = (float)dVar1;
                break;
              case 0x11:
                *local_30 = dVar1;
                break;
              case 0x20:
                fVar5 = (float)FUN_5f994e00();
                *(float *)local_90 = fVar5;
              }
                    /* WARNING: This code block may not be properly labeled as switch case */
              psVar12 = (short *)((int)psVar12 + 3);
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
              psVar10 = (short *)((int)psVar10 + 3);
              local_6c = (double *)((int)local_6c + 1);
              local_64 = (double *)((int)local_64 + 1);
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


