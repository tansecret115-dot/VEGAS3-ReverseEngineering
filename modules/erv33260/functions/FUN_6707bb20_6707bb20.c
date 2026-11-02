/* Module: erv33260.dll
   Function: FUN_6707bb20
   Address: 6707bb20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6707bb20(void *this,byte *param_1,uint param_2,int param_3,uint param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *local_1c;
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  pbVar1 = param_1;
  iVar3 = param_3 * 2 - param_4;
  if (*(int *)((int)this + 0x38) == 0) {
    local_10 = 0;
    pbVar1 = param_5 + -1;
    iVar7 = (int)pbVar1 * param_3;
    if (param_4 != 0) {
      param_5 = (byte *)(iVar7 + param_2);
      pbVar12 = param_1;
      do {
        bVar2 = *pbVar12;
        uVar9 = (uint)bVar2;
        uVar10 = (uint)pbVar12[param_2 - (int)param_1];
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          bVar2 = (byte)(uVar9 * 3 + uVar10 * 5 + 3 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar10 + uVar9 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          bVar2 = (byte)(uVar10 * 3 + uVar9 * 5 + 3 >> 3);
        }
        *pbVar12 = bVar2;
        uVar10 = (uint)param_5[1 - iVar7];
        bVar2 = pbVar12[1];
        uVar9 = (uint)bVar2;
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          iVar6 = uVar9 + uVar10 * 2;
LAB_6707bc11:
          bVar2 = (byte)(uVar10 + iVar6 * 2 + 3 + uVar9 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar9 + uVar10 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          iVar6 = uVar10 + uVar9 * 2;
          goto LAB_6707bc11;
        }
        pbVar12[1] = bVar2;
        bVar2 = pbVar12[iVar7];
        uVar9 = (uint)bVar2;
        uVar10 = (uint)*param_5;
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          bVar2 = (byte)(uVar9 * 3 + uVar10 * 5 + 3 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar10 + uVar9 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          bVar2 = (byte)(uVar10 * 3 + uVar9 * 5 + 3 >> 3);
        }
        pbVar12[iVar7] = bVar2;
        uVar10 = (uint)param_5[1];
        bVar2 = param_1[local_10 + iVar7 + 1];
        uVar9 = (uint)bVar2;
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          bVar2 = (byte)(uVar9 * 3 + uVar10 * 5 + 3 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar10 + uVar9 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          bVar2 = (byte)(uVar10 * 3 + uVar9 * 5 + 3 >> 3);
        }
        pbVar12 = pbVar12 + 2;
        param_1[local_10 + iVar7 + 1] = bVar2;
        local_10 = local_10 + 2;
        param_5 = param_5 + 2;
      } while (local_10 < param_4);
    }
    local_1c = (byte *)0x1;
    if ((byte *)0x1 < pbVar1) {
      iVar7 = param_3 + param_2;
      iVar6 = param_3;
      do {
        bVar2 = param_1[iVar6];
        uVar9 = (uint)bVar2;
        uVar10 = (uint)*(byte *)(iVar6 + param_2);
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          bVar2 = (byte)(uVar9 * 3 + uVar10 * 5 + 3 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar10 + uVar9 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          bVar2 = (byte)(uVar10 * 3 + uVar9 * 5 + 3 >> 3);
        }
        param_1[iVar6] = bVar2;
        uVar10 = (uint)*(byte *)(iVar7 + iVar6);
        bVar2 = param_1[iVar6 + param_3];
        uVar9 = (uint)bVar2;
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          iVar4 = uVar9 + uVar10 * 2;
LAB_6707bda7:
          bVar2 = (byte)(uVar10 + iVar4 * 2 + 3 + uVar9 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar9 + uVar10 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          iVar4 = uVar10 + uVar9 * 2;
          goto LAB_6707bda7;
        }
        param_1[iVar6 + param_3] = bVar2;
        uVar10 = (uint)*(byte *)(param_2 + 1 + iVar6);
        bVar2 = param_1[iVar6 + 1];
        uVar9 = (uint)bVar2;
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if ((uVar8 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar8)) {
          uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
          uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
          if (uVar8 < *(uint *)((int)this + 0x74)) {
            iVar4 = uVar9 + uVar10 * 2;
LAB_6707be60:
            bVar2 = (byte)(uVar10 + iVar4 * 2 + 3 + uVar9 >> 3);
          }
          else if (uVar8 < *(uint *)((int)this + 0x78)) {
            bVar2 = (byte)(uVar9 + uVar10 >> 1);
          }
          else if (uVar8 < *(uint *)((int)this + 0x7c)) {
            iVar4 = uVar10 + uVar9 * 2;
            goto LAB_6707be60;
          }
          param_1[iVar6 + 1] = bVar2;
        }
        else {
          uVar8 = FUN_6707c600(this,(int)param_1,param_3,iVar6 + 1);
          uVar8 = uVar8 & 0xff;
          uVar9 = (int)(uVar8 - uVar10) >> 0x1f;
          uVar9 = (uVar8 - uVar10 ^ uVar9) - uVar9;
          if (uVar9 < *(uint *)((int)this + 0x74)) {
            iVar4 = uVar8 + uVar10 * 2;
LAB_6707be25:
            uVar8 = uVar10 + iVar4 * 2 + 3 + uVar8 >> 3;
          }
          else {
            if (uVar9 < *(uint *)((int)this + 0x78)) {
              param_1[iVar6 + 1] = (byte)(uVar8 + uVar10 >> 1);
              goto LAB_6707be71;
            }
            if (uVar9 < *(uint *)((int)this + 0x7c)) {
              iVar4 = uVar10 + uVar8 * 2;
              goto LAB_6707be25;
            }
          }
          param_1[iVar6 + 1] = (byte)uVar8;
        }
LAB_6707be71:
        bVar2 = param_1[iVar6 + param_3 + 1];
        uVar9 = (uint)bVar2;
        uVar10 = (uint)*(byte *)(iVar7 + 1 + iVar6);
        uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
        uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
        if ((uVar8 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar8)) {
          uVar8 = (int)(uVar9 - uVar10) >> 0x1f;
          uVar8 = (uVar9 - uVar10 ^ uVar8) - uVar8;
          if (uVar8 < *(uint *)((int)this + 0x74)) {
            iVar4 = uVar9 + uVar10 * 2;
LAB_6707bf1b:
            bVar2 = (byte)(uVar10 + iVar4 * 2 + 3 + uVar9 >> 3);
          }
          else if (uVar8 < *(uint *)((int)this + 0x78)) {
            bVar2 = (byte)(uVar9 + uVar10 >> 1);
          }
          else if (uVar8 < *(uint *)((int)this + 0x7c)) {
            iVar4 = uVar10 + uVar9 * 2;
            goto LAB_6707bf1b;
          }
          param_1[iVar6 + param_3 + 1] = bVar2;
        }
        else {
          uVar8 = FUN_6707c600(this,(int)param_1,param_3,iVar6 + 1 + param_3);
          uVar8 = uVar8 & 0xff;
          uVar9 = (int)(uVar8 - uVar10) >> 0x1f;
          uVar9 = (uVar8 - uVar10 ^ uVar9) - uVar9;
          if (uVar9 < *(uint *)((int)this + 0x74)) {
            iVar4 = uVar8 + uVar10 * 2;
LAB_6707bee0:
            uVar8 = uVar10 + iVar4 * 2 + 3 + uVar8 >> 3;
          }
          else {
            if (uVar9 < *(uint *)((int)this + 0x78)) {
              param_1[iVar6 + param_3 + 1] = (byte)(uVar8 + uVar10 >> 1);
              goto LAB_6707bf2c;
            }
            if (uVar9 < *(uint *)((int)this + 0x7c)) {
              iVar4 = uVar10 + uVar8 * 2;
              goto LAB_6707bee0;
            }
          }
          param_1[iVar6 + param_3 + 1] = (byte)uVar8;
        }
LAB_6707bf2c:
        uVar9 = iVar6 + 2;
        uVar8 = iVar6 + -2 + param_4;
        if (uVar9 < uVar8) {
          local_c = (byte *)(uVar9 + param_3 + param_2);
          local_8 = param_1 + uVar9;
          do {
            uVar5 = (uint)*local_8;
            uVar11 = (uint)local_8[param_2 - (int)param_1];
            uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
            uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
            if ((uVar10 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar10)) {
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else {
                if (*(uint *)((int)this + 0x7c) <= uVar10) goto LAB_6707c02f;
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
            }
            else {
              uVar5 = FUN_6707c600(this,(int)param_1,param_3,uVar9);
              uVar5 = uVar5 & 0xff;
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else if (uVar10 < *(uint *)((int)this + 0x7c)) {
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
              else {
LAB_6707c02f:
                bVar2 = (byte)uVar5;
              }
            }
            *local_8 = bVar2;
            uVar11 = (uint)local_c[1 - param_3];
            uVar5 = (uint)local_8[1];
            uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
            uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
            if ((uVar10 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar10)) {
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else {
                if (*(uint *)((int)this + 0x7c) <= uVar10) goto LAB_6707c0f9;
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
            }
            else {
              uVar5 = FUN_6707c600(this,(int)param_1,param_3,(int)(local_8 + (1 - (int)param_1)));
              uVar5 = uVar5 & 0xff;
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else if (uVar10 < *(uint *)((int)this + 0x7c)) {
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
              else {
LAB_6707c0f9:
                bVar2 = (byte)uVar5;
              }
            }
            local_8[1] = bVar2;
            uVar5 = (uint)local_8[param_3];
            uVar11 = (uint)*local_c;
            uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
            uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
            if ((uVar10 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar10)) {
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else {
                if (*(uint *)((int)this + 0x7c) <= uVar10) goto LAB_6707c1c3;
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
            }
            else {
              uVar5 = FUN_6707c600(this,(int)param_1,param_3,
                                   (int)(local_8 + (param_3 - (int)param_1)));
              uVar5 = uVar5 & 0xff;
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else if (uVar10 < *(uint *)((int)this + 0x7c)) {
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
              else {
LAB_6707c1c3:
                bVar2 = (byte)uVar5;
              }
            }
            local_8[param_3] = bVar2;
            uVar5 = (uint)param_1[uVar9 + param_3 + 1];
            uVar11 = (uint)local_c[1];
            uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
            uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
            if ((uVar10 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar10)) {
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else {
                if (*(uint *)((int)this + 0x7c) <= uVar10) goto LAB_6707c28b;
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
            }
            else {
              uVar5 = FUN_6707c600(this,(int)param_1,param_3,uVar9 + 1 + param_3);
              uVar5 = uVar5 & 0xff;
              uVar10 = (int)(uVar5 - uVar11) >> 0x1f;
              uVar10 = (uVar5 - uVar11 ^ uVar10) - uVar10;
              if (uVar10 < *(uint *)((int)this + 0x74)) {
                bVar2 = (byte)(uVar5 * 3 + uVar11 * 5 + 3 >> 3);
              }
              else if (uVar10 < *(uint *)((int)this + 0x78)) {
                bVar2 = (byte)(uVar11 + uVar5 >> 1);
              }
              else if (uVar10 < *(uint *)((int)this + 0x7c)) {
                bVar2 = (byte)(uVar11 * 3 + uVar5 * 5 + 3 >> 3);
              }
              else {
LAB_6707c28b:
                bVar2 = (byte)uVar5;
              }
            }
            param_1[uVar9 + param_3 + 1] = bVar2;
            uVar9 = uVar9 + 2;
            local_8 = local_8 + 2;
            local_c = local_c + 2;
          } while (uVar9 < uVar8);
        }
        bVar2 = param_1[uVar9];
        uVar10 = (uint)bVar2;
        uVar5 = (uint)*(byte *)(uVar9 + param_2);
        uVar8 = (int)(uVar10 - uVar5) >> 0x1f;
        uVar8 = (uVar10 - uVar5 ^ uVar8) - uVar8;
        if ((uVar8 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar8)) {
          uVar8 = (int)(uVar10 - uVar5) >> 0x1f;
          uVar8 = (uVar10 - uVar5 ^ uVar8) - uVar8;
          if (uVar8 < *(uint *)((int)this + 0x74)) {
            iVar6 = uVar10 + uVar5 * 2;
LAB_6707c358:
            bVar2 = (byte)(uVar5 + iVar6 * 2 + 3 + uVar10 >> 3);
          }
          else if (uVar8 < *(uint *)((int)this + 0x78)) {
            bVar2 = (byte)(uVar10 + uVar5 >> 1);
          }
          else if (uVar8 < *(uint *)((int)this + 0x7c)) {
            iVar6 = uVar5 + uVar10 * 2;
            goto LAB_6707c358;
          }
          param_1[uVar9] = bVar2;
        }
        else {
          uVar8 = FUN_6707c600(this,(int)param_1,param_3,uVar9);
          uVar8 = uVar8 & 0xff;
          uVar10 = (int)(uVar8 - uVar5) >> 0x1f;
          uVar10 = (uVar8 - uVar5 ^ uVar10) - uVar10;
          if (uVar10 < *(uint *)((int)this + 0x74)) {
            iVar6 = uVar8 + uVar5 * 2;
LAB_6707c31e:
            uVar8 = uVar5 + iVar6 * 2 + 3 + uVar8 >> 3;
          }
          else {
            if (uVar10 < *(uint *)((int)this + 0x78)) {
              param_1[uVar9] = (byte)(uVar8 + uVar5 >> 1);
              goto LAB_6707c368;
            }
            if (uVar10 < *(uint *)((int)this + 0x7c)) {
              iVar6 = uVar5 + uVar8 * 2;
              goto LAB_6707c31e;
            }
          }
          param_1[uVar9] = (byte)uVar8;
        }
LAB_6707c368:
        bVar2 = param_1[uVar9 + param_3];
        uVar10 = (uint)bVar2;
        uVar5 = (uint)*(byte *)(iVar7 + uVar9);
        uVar8 = (int)(uVar10 - uVar5) >> 0x1f;
        uVar8 = (uVar10 - uVar5 ^ uVar8) - uVar8;
        if ((uVar8 < *(uint *)((int)this + 0x6c)) || (*(uint *)((int)this + 0x70) <= uVar8)) {
          uVar8 = (int)(uVar10 - uVar5) >> 0x1f;
          uVar8 = (uVar10 - uVar5 ^ uVar8) - uVar8;
          if (uVar8 < *(uint *)((int)this + 0x74)) {
            iVar6 = uVar10 + uVar5 * 2;
LAB_6707c40d:
            bVar2 = (byte)(uVar5 + iVar6 * 2 + 3 + uVar10 >> 3);
          }
          else if (uVar8 < *(uint *)((int)this + 0x78)) {
            bVar2 = (byte)(uVar10 + uVar5 >> 1);
          }
          else if (uVar8 < *(uint *)((int)this + 0x7c)) {
            iVar6 = uVar5 + uVar10 * 2;
            goto LAB_6707c40d;
          }
          param_1[uVar9 + param_3] = bVar2;
        }
        else {
          uVar8 = FUN_6707c600(this,(int)param_1,param_3,uVar9 + param_3);
          uVar8 = uVar8 & 0xff;
          uVar10 = (int)(uVar8 - uVar5) >> 0x1f;
          uVar10 = (uVar8 - uVar5 ^ uVar10) - uVar10;
          if (uVar10 < *(uint *)((int)this + 0x74)) {
            iVar6 = uVar8 + uVar5 * 2;
LAB_6707c3d3:
            uVar8 = uVar5 + iVar6 * 2 + 3 + uVar8 >> 3;
          }
          else {
            if (uVar10 < *(uint *)((int)this + 0x78)) {
              param_1[uVar9 + param_3] = (byte)(uVar8 + uVar5 >> 1);
              goto LAB_6707c41d;
            }
            if (uVar10 < *(uint *)((int)this + 0x7c)) {
              iVar6 = uVar5 + uVar8 * 2;
              goto LAB_6707c3d3;
            }
          }
          param_1[uVar9 + param_3] = (byte)uVar8;
        }
LAB_6707c41d:
        bVar2 = param_1[uVar9 + 1];
        uVar10 = (uint)bVar2;
        uVar5 = (uint)*(byte *)(param_2 + 1 + uVar9);
        uVar8 = (int)(uVar10 - uVar5) >> 0x1f;
        uVar8 = (uVar10 - uVar5 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          bVar2 = (byte)(uVar10 * 3 + uVar5 * 5 + 3 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar5 + uVar10 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          bVar2 = (byte)(uVar5 * 3 + uVar10 * 5 + 3 >> 3);
        }
        param_1[uVar9 + 1] = bVar2;
        uVar5 = (uint)*(byte *)(iVar7 + 1 + uVar9);
        bVar2 = param_1[uVar9 + param_3 + 1];
        uVar10 = (uint)bVar2;
        uVar8 = (int)(uVar10 - uVar5) >> 0x1f;
        uVar8 = (uVar10 - uVar5 ^ uVar8) - uVar8;
        if (uVar8 < *(uint *)((int)this + 0x74)) {
          iVar6 = uVar10 + uVar5 * 2;
LAB_6707c4b1:
          bVar2 = (byte)(uVar5 + iVar6 * 2 + 3 + uVar10 >> 3);
        }
        else if (uVar8 < *(uint *)((int)this + 0x78)) {
          bVar2 = (byte)(uVar10 + uVar5 >> 1);
        }
        else if (uVar8 < *(uint *)((int)this + 0x7c)) {
          iVar6 = uVar5 + uVar10 * 2;
          goto LAB_6707c4b1;
        }
        local_1c = local_1c + 2;
        param_1[uVar9 + param_3 + 1] = bVar2;
        iVar6 = uVar9 + 2 + iVar3;
        if (pbVar1 <= local_1c) {
          return;
        }
      } while( true );
    }
  }
  else {
    if ((byte *)0x1 < param_5 + -1) {
      param_2 = (uint)(param_5 + -1) >> 1;
      iVar7 = param_3;
      do {
        uVar8 = FUN_6707c600(this,(int)pbVar1,param_3,iVar7 + 1);
        pbVar1[iVar7 + 1] = (byte)uVar8;
        uVar8 = FUN_6707c600(this,(int)pbVar1,param_3,param_3 + 1 + iVar7);
        uVar9 = iVar7 + 2;
        pbVar1[uVar9 + param_3 + -1] = (byte)uVar8;
        uVar8 = iVar7 + -2 + param_4;
        if (uVar9 < uVar8) {
          param_1 = (byte *)(iVar7 + 3);
          do {
            uVar10 = FUN_6707c600(this,(int)pbVar1,param_3,uVar9);
            (pbVar1 + -1)[(int)param_1] = (byte)uVar10;
            uVar10 = FUN_6707c600(this,(int)pbVar1,param_3,(int)param_1);
            param_1[(int)pbVar1] = (byte)uVar10;
            uVar10 = FUN_6707c600(this,(int)pbVar1,param_3,(int)(param_1 + param_3 + -1));
            pbVar1[uVar9 + param_3] = (byte)uVar10;
            uVar10 = FUN_6707c600(this,(int)pbVar1,param_3,(int)(param_1 + param_3));
            param_1 = param_1 + 2;
            pbVar1[uVar9 + param_3 + 1] = (byte)uVar10;
            uVar9 = uVar9 + 2;
          } while (uVar9 < uVar8);
        }
        uVar8 = FUN_6707c600(this,(int)pbVar1,param_3,uVar9);
        pbVar1[uVar9] = (byte)uVar8;
        uVar8 = FUN_6707c600(this,(int)pbVar1,param_3,uVar9 + param_3);
        pbVar1[uVar9 + param_3] = (byte)uVar8;
        iVar7 = uVar9 + 2 + iVar3;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return;
}


