/* Module: vegas30k.dll
   Function: FUN_010785e0
   Address: 010785e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010785e0(uint *param_1,HDC param_2,code *param_3)

{
  HDC hdc;
  uint *puVar1;
  HDC hdc_00;
  DWORD DVar2;
  int iVar3;
  HGDIOBJ h;
  uint *puVar4;
  DWORD *pDVar5;
  uint uVar6;
  uint uVar7;
  int h_00;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  RECT local_144;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  uint local_128;
  HGDIOBJ local_124;
  RECT local_120;
  RECT local_110;
  RECT local_100;
  RECT local_f0;
  RECT local_e0;
  double local_d0;
  undefined1 local_c8 [12];
  uint uStack_bc;
  RECT local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  byte *local_8c;
  uint local_88;
  uint local_84;
  byte *local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  byte *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  byte *local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  HGDIOBJ pvStack_20;
  HGDIOBJ local_1c;
  uint local_18;
  uint local_14;
  HGDIOBJ local_10;
  uint local_c;
  uint *local_8;
  
  hdc_00 = param_2;
  puVar1 = param_1;
  local_18 = *param_1;
  if ((0 < (int)param_1[10]) && (0 < (int)param_1[0xb])) {
    if ((int)param_1[0x1f] < 1) {
      param_1[0x22] = 0;
      param_1[0x23] = 0x3ff00000;
    }
    DVar2 = GetTickCount();
    uVar7 = 0;
    if (param_1[0x2a] != 0) {
      pDVar5 = param_1 + 0x37;
      do {
        if ((*pDVar5 + DAT_01206128 < DVar2) || ((int)pDVar5[-3] <= (int)pDVar5[-4])) {
          pDVar5[-3] = pDVar5[-4];
          *pDVar5 = DVar2;
          pDVar5[3] = 0xffffffff;
        }
        if ((pDVar5[1] + DAT_01206128 < DVar2) || ((int)pDVar5[-4] <= (int)pDVar5[-2])) {
          pDVar5[-2] = pDVar5[-4];
          pDVar5[1] = DVar2;
          pDVar5[4] = param_1[0x1e] + 1;
        }
        uVar7 = uVar7 + 1;
        pDVar5 = pDVar5 + 9;
      } while (uVar7 < param_1[0x2a]);
    }
    if (param_1[0x16] == 0) {
      param_1[0xc] = param_1[10];
      param_1[0xd] = param_1[0xb];
      if ((local_18 & 0x20) == 0) {
        param_1[0x1d] = 0;
      }
      else {
        uVar7 = param_1[0x2a];
        if ((param_1[1] & 1) == 0) {
          uVar7 = ((uVar7 - 1) + param_1[0xb]) / uVar7;
          if ((int)uVar7 < 2) {
            uVar7 = 1;
          }
          param_1[0xd] = uVar7;
        }
        else {
          uVar7 = ((uVar7 - 1) + param_1[10]) / uVar7;
          if ((int)uVar7 < 2) {
            uVar7 = 1;
          }
          param_1[0xc] = uVar7;
        }
      }
      if ((local_18 & 0x80) != 0) {
        FUN_01078470(param_1,param_2);
      }
      iVar3 = FUN_01076db0(param_1,local_18,param_1[0xc],param_1[0xd]);
      if (iVar3 == 0) {
        FUN_01078440(param_2,param_1 + 6,0xff0000);
        return;
      }
    }
    hdc = DAT_0120612c;
    local_34 = param_1[0x1e];
    local_124 = SelectObject(DAT_0120612c,(HGDIOBJ)param_1[0x16]);
    puVar4 = param_1 + 1;
    puVar8 = param_1 + 0x2a;
    param_1 = (uint *)0x0;
    if ((*puVar4 & 4) == 0) {
      if (*puVar8 != 0) {
        puVar4 = puVar1 + 0x39;
        do {
          local_48 = puVar4[-6];
          if (local_48 == 1) {
            *puVar4 = 3;
          }
          else {
            uVar7 = FUN_01078350(puVar1,(double)(int)local_48 * *(double *)(puVar1 + 0x22));
            *puVar4 = uVar7;
          }
          param_1 = (uint *)((int)param_1 + 1);
          puVar4 = puVar4 + 9;
        } while (param_1 < puVar1[0x2a]);
      }
    }
    else if (*puVar8 != 0) {
      param_2 = (HDC)(puVar1 + 0x39);
      do {
        uVar7 = FUN_01078350(puVar1,(double)*(float *)(param_2 + -6));
        *param_2 = (HDC__)uVar7;
        param_2 = param_2 + 9;
        param_1 = (uint *)((int)param_1 + 1);
      } while (param_1 < puVar1[0x2a]);
    }
    if (((local_18 & 0x200) != 0) && (uVar7 = 0, puVar1[0x2a] != 0)) {
      puVar4 = puVar1 + 0x3a;
      do {
        if ((int)*puVar4 < (int)puVar4[-1]) {
          *puVar4 = puVar4[-1];
        }
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar7 < puVar1[0x2a]);
    }
    if (((local_18 & 0x100) != 0) && (uVar7 = 0, puVar1[0x2a] != 0)) {
      puVar4 = puVar1 + 0x3b;
      do {
        if ((int)puVar4[-2] < (int)*puVar4) {
          *puVar4 = puVar4[-2];
        }
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar7 < puVar1[0x2a]);
    }
    local_44 = local_18 & 8;
    if (local_44 != 0) {
      h = (HGDIOBJ)_SfGetUIFont_4();
      SelectObject(hdc,h);
      SetTextAlign(hdc,6);
      DVar2 = GetSysColor(8);
      SetTextColor(hdc,DVar2);
    }
    if ((puVar1[1] & 1) == 0) {
      local_c = (puVar1[10] - puVar1[0x10]) - 1;
      local_30 = puVar1[0x14];
      local_40 = 0;
      uStack_3c = 0;
      local_2c = puVar1[0x15];
      if ((local_18 & 2) != 0) {
        local_40 = puVar1[0x14];
        local_30 = 0;
        local_2c = 0;
        uStack_3c = puVar1[0x15];
      }
      local_24 = puVar1[0x2a];
      local_10 = (HGDIOBJ)0x0;
      pvStack_20 = (HGDIOBJ)0x0;
      param_2 = (HDC)0x0;
      unique0x100008b2 = (double)(puVar1[0xb] - (local_24 - 1) * puVar1[0x1d]) / (double)local_24;
      if (((param_3 != (code *)0x0) && ((local_18 & 0x10) != 0)) && (local_44 != 0)) {
        local_b8.top = 0;
        local_b8.right = puVar1[0x10] + 1 + local_c;
        local_b8.bottom = local_2c;
        local_b8.left = puVar1[10] - puVar1[0x10];
        (*param_3)(puVar1,hdc,&local_b8,1);
      }
      param_1 = (uint *)0x0;
      if (puVar1[0x2a] != 0) {
        local_48 = local_18 & 0x10;
        local_38 = local_18 & 0x80;
        do {
          if (local_38 == 0) {
            param_2 = (HDC)((int)param_2 + (int)local_10);
            local_d0 = (double)(ulonglong)((int)param_1 + 1);
            iVar3 = ftol();
            local_1c = (HGDIOBJ)0x1;
            if (0 < iVar3 - (int)param_2) {
              local_1c = (HGDIOBJ)(iVar3 - (int)param_2);
            }
            if (param_1 < puVar1[0x2a] - 1) {
              local_10 = (HGDIOBJ)(puVar1[0x1d] + (int)local_1c);
            }
            else {
              local_10 = (HGDIOBJ)(puVar1[0xb] - (int)param_2);
              local_1c = local_10;
            }
            local_8 = puVar1 + (int)param_1 * 9;
            local_14 = (local_8[0x39] - local_34) + local_c;
            if ((int)local_14 < 0) {
              local_14 = 0;
            }
            else if ((int)(local_c + 1) < (int)local_14) {
              local_14 = local_c + 1;
            }
            local_28 = ~-(uint)((local_18 & 0x20) != 0) & (uint)param_2;
          }
          else {
            if (param_1 == (uint *)0x0) {
              if (0 < (int)puVar1[0x30]) {
                param_2 = (HDC)puVar1[0x30];
              }
              uVar7 = puVar1[0x31];
            }
            else {
              uVar7 = puVar1[0x32];
            }
            param_2 = (HDC)((int)param_2 + uVar7);
            local_1c = (HGDIOBJ)puVar1[0xd];
            local_8 = puVar1 + (int)param_1 * 9;
            local_14 = (local_8[0x39] - local_34) + local_c;
            local_10 = local_1c;
            if ((int)local_14 < 0) {
              local_14 = 0;
              local_28 = 0;
            }
            else {
              if ((int)(local_c + 1) < (int)local_14) {
                local_14 = local_c + 1;
              }
              local_28 = 0;
            }
          }
          if (((int)local_14 < (int)local_c) &&
             (BitBlt(hdc_00,local_14 + puVar1[6],puVar1[7] + (int)param_2,local_c - local_14,
                     (int)local_10,hdc,local_14 + local_30,local_28 + local_2c,0xcc0020),
             0 < (int)local_14)) {
            if ((*puVar1 & 0x80) == 0) {
              h_00 = (int)local_1c - (uint)((int)param_1 + 1U == puVar1[0x2a]);
              iVar3 = (uint)(param_1 == (uint *)0x0) + puVar1[7];
            }
            else {
              h_00 = (int)local_1c - 2;
              iVar3 = puVar1[7] + 1;
            }
            PatBlt(hdc_00,local_14 + puVar1[6],iVar3 + (int)param_2,1,h_00,0x42);
          }
          uVar7 = local_14;
          if ((int)local_c < (int)local_14) {
            uVar7 = local_c;
          }
          if (0 < (int)uVar7) {
            BitBlt(hdc_00,puVar1[6],puVar1[7] + (int)param_2,uVar7,(int)local_1c,hdc,local_40,
                   local_28 + uStack_3c,0xcc0020);
          }
          if ((((int)local_8[0x39] < (int)local_8[0x3a]) &&
              (iVar3 = (local_8[0x3a] - local_34) + local_c, iVar3 < (int)local_c)) && (0 < iVar3))
          {
            BitBlt(hdc_00,iVar3 + puVar1[6],puVar1[7] + (int)param_2,1,(int)local_1c,hdc,
                   iVar3 + local_40,local_28 + uStack_3c,0xcc0020);
          }
          if ((((int)local_8[0x3b] < (int)local_8[0x39]) &&
              (iVar3 = (local_8[0x3b] - local_34) + local_c, iVar3 < (int)local_c)) && (0 < iVar3))
          {
            BitBlt(hdc_00,iVar3 + puVar1[6],puVar1[7] + (int)param_2,1,(int)local_1c,hdc,
                   iVar3 + local_30,local_28 + local_2c,0xcc0020);
          }
          if (local_48 == 0) {
LAB_0107981e:
            if (local_38 != 0) {
              if ((param_1 == (uint *)0x0) && (0 < (int)puVar1[0x30])) {
                local_84 = puVar1[7];
                local_88 = puVar1[6];
                local_7c = local_84 + puVar1[0x30];
                local_80 = (byte *)(puVar1[8] - puVar1[0x10]);
                if (param_3 == (code *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  pvStack_20 = (HGDIOBJ)SetBkColor(hdc_00,DVar2);
                  local_110.top = local_84;
                  local_110.left = local_88;
                  local_110.right = (LONG)local_80;
                  local_110.bottom = local_7c;
                  ExtTextOutA(hdc_00,0,0,2,&local_110,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)pvStack_20);
                }
                else {
                  (*param_3)(puVar1,hdc_00,&local_88);
                }
              }
              if (((uint *)(puVar1[0x2a] - 1) == param_1) && (0 < (int)puVar1[0x30])) {
                local_98 = puVar1[6];
                local_94 = puVar1[0x32] * (int)param_1 + puVar1[7] + puVar1[0x31] + puVar1[0xd] +
                           puVar1[0x30];
                local_90 = puVar1[8] - puVar1[0x10];
                local_8c = (byte *)puVar1[9];
                if (param_3 == (code *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  pvStack_20 = (HGDIOBJ)SetBkColor(hdc_00,DVar2);
                  local_f0.top = local_94;
                  local_f0.left = local_98;
                  local_f0.right = local_90;
                  local_f0.bottom = (LONG)local_8c;
                  ExtTextOutA(hdc_00,0,0,2,&local_f0,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)pvStack_20);
                }
                else {
                  (*param_3)(puVar1,hdc_00,&local_98);
                }
              }
              if (param_1 < puVar1[0x2a] - 1) {
                if (((local_18 & 0x400) == 0) || ((HGDIOBJ)puVar1[0x17] == (HGDIOBJ)0x0)) {
                  local_78 = puVar1[6];
                  local_74 = (int)local_10 + (int)param_2 + 1U;
                  local_70 = puVar1[8] - puVar1[0x10];
                  local_6c = (byte *)((int)local_10 + (int)param_2 + puVar1[0xf] + 1);
                  if (param_3 == (code *)0x0) {
                    DVar2 = GetSysColor(0xf);
                    pvStack_20 = (HGDIOBJ)SetBkColor(hdc_00,DVar2);
                    local_100.top = local_74;
                    local_100.left = local_78;
                    local_100.right = local_70;
                    local_100.bottom = (LONG)local_6c;
                    ExtTextOutA(hdc_00,0,0,2,&local_100,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc_00,(COLORREF)pvStack_20);
                  }
                  else {
                    (*param_3)(puVar1,hdc_00,&local_78);
                  }
                }
                else {
                  local_8 = SelectObject(hdc,(HGDIOBJ)puVar1[0x17]);
                  if (param_3 == (code *)0x0) {
                    local_50 = (byte *)puVar1[0xe];
                    local_54 = puVar1[0xf] * 2;
                    local_4c = puVar1[0xf] * 3;
                    puVar1[1] = puVar1[1] & 0xffffffbf;
                    DVar2 = GetSysColor(0xf);
                    pvStack_20 = (HGDIOBJ)SetBkColor(hdc,DVar2);
                    local_e0.top = local_54;
                    local_e0.left = 0;
                    local_e0.right = (LONG)local_50;
                    local_e0.bottom = local_4c;
                    ExtTextOutA(hdc,0,0,2,&local_e0,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc,(COLORREF)pvStack_20);
                    iVar3 = local_4c - local_54;
                    uVar7 = 0;
                    uVar9 = local_54;
                    pbVar10 = local_50;
                  }
                  else {
                    local_60 = puVar1[0xe];
                    local_64 = puVar1[0xf] * 2;
                    local_68 = 0;
                    local_5c = puVar1[0xf] * 3;
                    puVar1[1] = puVar1[1] | 0x40;
                    (*param_3)(puVar1,hdc,&local_68,1);
                    iVar3 = local_5c - local_64;
                    uVar7 = local_68;
                    uVar9 = local_64;
                    pbVar10 = (byte *)(local_60 - local_68);
                  }
                  BitBlt(hdc,uVar7,uVar9,(int)pbVar10,iVar3,hdc,0,0,0x8800c6);
                  BitBlt(hdc_00,puVar1[6],(int)local_10 + (int)param_2 + 1U,
                         (puVar1[8] - puVar1[0x10]) - puVar1[6],puVar1[0xf],hdc,0,puVar1[0xf] * 2,
                         0xcc0020);
                  SelectObject(hdc,local_8);
                }
              }
            }
          }
          else {
            if ((((puVar1[1] & 0x100) != 0) && (uVar7 = puVar1[0x2a], 1 < uVar7)) && (local_44 != 0)
               ) {
              if (param_1 == (uint *)0x0) {
                puVar4 = (uint *)puVar1[0x36];
                if (1 < uVar7) {
                  local_8 = (uint *)(uVar7 - 1);
                  puVar8 = puVar1 + 0x3f;
                  do {
                    if ((int)puVar4 <= (int)*puVar8) {
                      puVar4 = (uint *)*puVar8;
                    }
                    puVar8 = puVar8 + 9;
                    local_8 = (uint *)((int)local_8 + -1);
                  } while (local_8 != (uint *)0x0);
                }
                local_b8.left = local_c + 2;
                local_1c = (HGDIOBJ)(((int)puVar4 <= (int)puVar1[0x21]) - 1 & local_2c);
                local_14 = (int)local_1c + local_28;
                pvStack_20 = (HGDIOBJ)(puVar1[0xb] - 2);
                local_b8.top = local_14 + 1;
                local_b8.right = puVar1[0x10] + local_c;
                local_b8.bottom = (int)pvStack_20 + (int)local_1c + local_28;
                local_8 = puVar4;
                FUN_01079d60(puVar1,hdc,&local_b8,puVar4,local_18);
                BitBlt(hdc_00,puVar1[6] + local_c,puVar1[7] + (int)param_2,puVar1[0x10] + 1,
                       (int)pvStack_20,hdc,local_c + 1,local_14,0xcc0020);
              }
              goto LAB_0107981e;
            }
            if (local_38 != 0) {
              pvStack_20 = SelectObject(hdc,(HGDIOBJ)puVar1[0x18]);
              local_a0 = puVar1[0x10];
              local_9c = puVar1[0x11];
              local_a8 = 0;
              local_a4 = 0;
              if (param_3 != (code *)0x0) {
                puVar1[1] = puVar1[1] | 0x40;
                (*param_3)(puVar1,hdc,&local_a8,1);
              }
              FUN_01079d60(puVar1,hdc,&local_a8,puVar1[(int)param_1 * 9 + 0x36],local_18);
              BitBlt(hdc_00,puVar1[6] + local_c,(puVar1[7] - puVar1[0x30]) + (int)param_2,
                     puVar1[0x10],puVar1[0x11],hdc,0,0,0xcc0020);
              SelectObject(hdc,pvStack_20);
              goto LAB_0107981e;
            }
            pvStack_20 = (HGDIOBJ)puVar1[(int)param_1 * 9 + 0x36];
            local_8 = (uint *)(((int)pvStack_20 <= (int)puVar1[0x21]) - 1 & local_2c);
            if (local_44 != 0) {
              local_120.left = local_c + 1;
              local_120.top = (int)local_8 + local_28;
              local_120.right = puVar1[0x10] + 1 + local_c;
              local_120.bottom = local_120.top + (int)local_1c;
              FUN_01079d60(puVar1,hdc,&local_120,pvStack_20,local_18);
            }
            BitBlt(hdc_00,puVar1[6] + local_c,puVar1[7] + (int)param_2,puVar1[0x10] + 1,
                   (int)local_10,hdc,local_c,(int)((int)local_8 + local_28),0xcc0020);
          }
          param_1 = (uint *)((int)param_1 + 1);
        } while (param_1 < puVar1[0x2a]);
      }
    }
    else {
      local_c = puVar1[0x11] + 1;
      local_24 = puVar1[0x14];
      local_30 = 0;
      pvStack_20 = (HGDIOBJ)puVar1[0x15];
      local_2c = 0;
      if ((local_18 & 2) != 0) {
        local_30 = puVar1[0x14];
        local_24 = 0;
        local_2c = puVar1[0x15];
        pvStack_20 = (HGDIOBJ)0x0;
      }
      if (((param_3 != (code *)0x0) && (puVar1[1] = puVar1[1] | 0x40, (local_18 & 0x10) != 0)) &&
         (local_44 != 0)) {
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = local_24;
        local_9c = puVar1[0x11] - 1;
        (*param_3)(puVar1,hdc,&local_a8,1);
      }
      local_40 = puVar1[0x2a];
      uStack_3c = 0;
      local_c = 0;
      param_2 = (HDC)0x0;
      param_1 = (uint *)0x0;
      local_d0 = (double)(puVar1[10] - (local_40 - 1) * puVar1[0x1d]) / (double)local_40;
      if (local_40 != 0) {
        local_48 = local_18 & 0x10;
        local_38 = local_18 & 0x80;
        do {
          if (local_38 == 0) {
            param_2 = (HDC)((int)param_2 + local_c);
            uStack_3c = 0;
            local_40 = (int)param_1 + 1;
            iVar3 = ftol();
            local_14 = 1;
            if (0 < iVar3 - (int)param_2) {
              local_14 = iVar3 - (int)param_2;
            }
            if (param_1 < puVar1[0x2a] - 1) {
              local_c = puVar1[0x1d] + local_14;
            }
            else {
              local_14 = puVar1[10] - (int)param_2;
              local_c = local_14;
            }
            local_8 = puVar1 + (int)param_1 * 9;
            uVar7 = puVar1[0x11];
            local_10 = (HGDIOBJ)((local_34 - puVar1[(int)param_1 * 9 + 0x39] &
                                 ((int)(local_34 - puVar1[(int)param_1 * 9 + 0x39]) < 0) - 1) +
                                uVar7);
            local_1c = (HGDIOBJ)(~-(uint)((local_18 & 0x20) != 0) & (uint)param_2);
          }
          else {
            local_8 = puVar1 + (int)param_1 * 9;
            uVar7 = puVar1[0x11];
            local_10 = (HGDIOBJ)((((int)(local_34 - local_8[0x39]) < 0) - 1 &
                                 local_34 - local_8[0x39]) + uVar7);
            if (param_1 == (uint *)0x0) {
              uVar6 = puVar1[0x30];
              if ((int)puVar1[0x30] < 1) {
                uVar6 = (uint)param_2;
              }
              uVar9 = puVar1[0x31];
              param_2 = (HDC)uVar6;
            }
            else {
              uVar9 = puVar1[0x32];
            }
            param_2 = (HDC)((int)param_2 + uVar9);
            local_1c = (HGDIOBJ)0x0;
            local_14 = puVar1[0xc];
            local_c = local_14;
          }
          if ((puVar1[1] & 0x400) == 0) {
            if (0 < (int)local_10) {
              BitBlt(hdc_00,puVar1[6] + (int)param_2,puVar1[7] + uVar7,local_c,(int)local_10 - uVar7
                     ,hdc,(int)local_1c + local_24,uVar7 + (int)pvStack_20,0xcc0020);
            }
            if ((int)local_10 < (int)puVar1[0xb]) {
              PatBlt(hdc_00,puVar1[6] + 1 + (int)param_2,puVar1[7] + (int)local_10,local_14 - 2,1,
                     0x42);
            }
            local_10 = (HGDIOBJ)((int)local_10 + 1);
            local_28 = puVar1[0xb] - (int)local_10;
            if (0 < (int)local_28) {
              BitBlt(hdc_00,puVar1[6] + (int)param_2,puVar1[7] + (int)local_10,local_c,local_28,hdc,
                     (int)local_1c + local_30,(int)local_10 + local_2c,0xcc0020);
            }
            if (((int)local_8[0x39] < (int)local_8[0x3a]) &&
               (iVar3 = local_34 - local_8[0x3a], -1 < iVar3)) {
              iVar3 = iVar3 + puVar1[0x11];
              BitBlt(hdc_00,puVar1[6] + (int)param_2,puVar1[7] + iVar3,local_14,1,hdc,
                     (int)local_1c + local_30,iVar3 + local_2c,0xcc0020);
            }
            if (((int)local_8[0x3b] < (int)local_8[0x39]) &&
               (iVar3 = local_34 - local_8[0x3b], -1 < iVar3)) {
              iVar3 = iVar3 + puVar1[0x11];
              BitBlt(hdc_00,puVar1[6] + (int)param_2,puVar1[7] + iVar3,local_14,1,hdc,
                     (int)local_1c + local_24,iVar3 + (int)pvStack_20,0xcc0020);
            }
          }
          else {
            local_c8._0_4_ = puVar1[6] + (int)param_2;
            local_c8._4_4_ = puVar1[7] + uVar7;
            stack0xffffff40 = (double)CONCAT44(puVar1[9],local_c8._0_4_ + local_c);
            DrawEdge(hdc_00,(LPRECT)local_c8,2,0xf);
            InflateRect((LPRECT)local_c8,-1,-1);
            if (param_3 == (code *)0x0) {
              DVar2 = GetSysColor(0xf);
              local_8 = (uint *)SetBkColor(hdc_00,DVar2);
              local_144.top = local_c8._4_4_;
              local_144.left = local_c8._0_4_;
              local_144.right = local_c8._8_4_;
              local_144.bottom = uStack_bc;
              ExtTextOutA(hdc_00,0,0,2,&local_144,(LPCSTR)0x0,0,(INT *)0x0);
              SetBkColor(hdc_00,(COLORREF)local_8);
            }
            else {
              (*param_3)(puVar1,hdc_00,local_c8,1);
            }
          }
          if (local_48 == 0) {
LAB_01078dd7:
            if (local_38 != 0) {
              if ((param_1 == (uint *)0x0) && (0 < (int)puVar1[0x30])) {
                local_78 = puVar1[6];
                local_74 = puVar1[7] + puVar1[0x11];
                local_70 = local_78 + puVar1[0x30];
                local_6c = (byte *)puVar1[9];
                if (param_3 == (code *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  local_8 = (uint *)SetBkColor(hdc_00,DVar2);
                  local_f0.top = local_74;
                  local_f0.left = local_78;
                  local_f0.right = local_70;
                  local_f0.bottom = (LONG)local_6c;
                  ExtTextOutA(hdc_00,0,0,2,&local_f0,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)local_8);
                }
                else {
                  (*param_3)(puVar1,hdc_00,&local_78);
                }
              }
              if (((uint *)(puVar1[0x2a] - 1) == param_1) && (0 < (int)puVar1[0x30])) {
                local_58 = puVar1[0x32] * (int)param_1 + puVar1[0x31] + puVar1[0xc] + puVar1[6] +
                           puVar1[0x30];
                local_54 = puVar1[7] + puVar1[0x11];
                local_50 = (byte *)puVar1[8];
                local_4c = puVar1[9];
                if (param_3 == (code *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  local_8 = (uint *)SetBkColor(hdc_00,DVar2);
                  local_110.top = local_54;
                  local_110.left = local_58;
                  local_110.right = (LONG)local_50;
                  local_110.bottom = local_4c;
                  ExtTextOutA(hdc_00,0,0,2,&local_110,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)local_8);
                }
                else {
                  (*param_3)(puVar1,hdc_00,&local_58);
                }
              }
              if (param_1 < puVar1[0x2a] - 1) {
                if (((local_18 & 0x400) == 0) || ((HGDIOBJ)puVar1[0x17] == (HGDIOBJ)0x0)) {
                  local_88 = local_c + puVar1[6] + (int)param_2;
                  local_84 = puVar1[7] + puVar1[0x11];
                  local_7c = puVar1[9];
                  local_80 = (byte *)(puVar1[0xe] + puVar1[6] + local_c + (int)param_2);
                  if (param_3 == (code *)0x0) {
                    DVar2 = GetSysColor(0xf);
                    local_8 = (uint *)SetBkColor(hdc_00,DVar2);
                    local_b8.top = local_84;
                    local_b8.left = local_88;
                    local_b8.right = (LONG)local_80;
                    local_b8.bottom = local_7c;
                    ExtTextOutA(hdc_00,0,0,2,&local_b8,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc_00,(COLORREF)local_8);
                  }
                  else {
                    (*param_3)(puVar1,hdc_00,&local_88);
                  }
                }
                else {
                  local_10 = SelectObject(hdc,(HGDIOBJ)puVar1[0x17]);
                  uVar7 = puVar1[0xe];
                  if (param_3 == (code *)0x0) {
                    local_90 = uVar7 * 3;
                    local_8c = (byte *)puVar1[0xf];
                    puVar1[1] = puVar1[1] & 0xffffffbf;
                    local_98 = uVar7 * 2;
                    DVar2 = GetSysColor(0xf);
                    local_8 = (uint *)SetBkColor(hdc,DVar2);
                    local_120.left = local_98;
                    local_120.top = 0;
                    local_120.right = local_90;
                    local_120.bottom = (LONG)local_8c;
                    ExtTextOutA(hdc,0,0,2,&local_120,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc,(COLORREF)local_8);
                    iVar3 = local_90 - local_98;
                    uVar9 = 0;
                    uVar7 = local_98;
                    pbVar10 = local_8c;
                  }
                  else {
                    local_60 = uVar7 * 3;
                    local_5c = puVar1[0xf];
                    local_64 = 0;
                    puVar1[1] = puVar1[1] | 0x40;
                    local_68 = uVar7 * 2;
                    (*param_3)(puVar1,hdc,&local_68,1);
                    iVar3 = local_60 - local_68;
                    uVar7 = local_68;
                    uVar9 = local_64;
                    pbVar10 = (byte *)(local_5c - local_64);
                  }
                  BitBlt(hdc,uVar7,uVar9,iVar3,(int)pbVar10,hdc,0,0,0x8800c6);
                  BitBlt(hdc_00,puVar1[6] + local_c + (int)param_2,puVar1[7] + puVar1[0x11],
                         puVar1[0xe],(puVar1[9] - puVar1[7]) - puVar1[0x11],hdc,puVar1[0xe] * 2,0,
                         0xcc0020);
                  SelectObject(hdc,local_10);
                }
              }
            }
          }
          else {
            if ((((puVar1[1] & 0x100) != 0) && (uVar7 = puVar1[0x2a], 1 < uVar7)) && (local_44 != 0)
               ) {
              if (param_1 == (uint *)0x0) {
                puVar4 = (uint *)puVar1[0x36];
                if (1 < uVar7) {
                  local_8 = puVar1 + 0x3f;
                  local_10 = (HGDIOBJ)(uVar7 - 1);
                  do {
                    if ((int)puVar4 <= (int)*local_8) {
                      puVar4 = (uint *)*local_8;
                    }
                    local_8 = local_8 + 9;
                    local_10 = (HGDIOBJ)((int)local_10 + -1);
                  } while (local_10 != (HGDIOBJ)0x0);
                }
                local_10 = (HGDIOBJ)(((int)puVar4 <= (int)puVar1[0x21]) - 1 & local_24);
                local_8 = puVar4;
                if (local_38 == 0) {
                  local_100.top = 0;
                  local_100.left = (int)local_10 + (int)local_1c;
                  local_100.right = (int)(uVar7 * local_14 + (int)local_10) + (int)local_1c;
                  local_100.bottom = puVar1[0x11] - 1;
                  local_28 = local_100.left;
                  FUN_01079d60(puVar1,hdc,&local_100,puVar4,local_18);
                  BitBlt(hdc_00,puVar1[6] + (int)param_2,puVar1[7],local_14 * puVar1[0x2a],
                         puVar1[0x11],hdc,local_28,0,0xcc0020);
                  goto LAB_0107936a;
                }
                local_12c = puVar1[0x10];
                local_134 = 0;
                local_130 = 0;
                local_128 = puVar1[0x11];
                FUN_01079d60(puVar1,hdc,&local_134,puVar1[0x36],local_18);
                BitBlt(hdc_00,(int)((puVar1[8] - puVar1[0x10]) + puVar1[6]) / 2,puVar1[7],
                       puVar1[0x10],puVar1[0x11] - 1,hdc,0,0,0xcc0020);
              }
              goto LAB_01078dd7;
            }
            if (local_38 != 0) {
              local_8 = SelectObject(hdc,(HGDIOBJ)puVar1[0x18]);
              local_a0 = puVar1[0x10];
              local_9c = puVar1[0x11];
              local_a8 = 0;
              local_a4 = 0;
              if (param_3 != (code *)0x0) {
                puVar1[1] = puVar1[1] | 0x40;
                (*param_3)(puVar1,hdc,&local_a8,1);
              }
              FUN_01079d60(puVar1,hdc,&local_a8,puVar1[(int)param_1 * 9 + 0x36],local_18);
              BitBlt(hdc_00,(puVar1[6] - puVar1[0x30]) + (int)param_2,puVar1[7],puVar1[0x10],
                     puVar1[0x11] - 1,hdc,0,0,0xcc0020);
              SelectObject(hdc,local_8);
              goto LAB_01078dd7;
            }
            local_8 = (uint *)(((int)puVar1[(int)param_1 * 9 + 0x36] <= (int)puVar1[0x21]) - 1 &
                              local_24);
            if (local_44 != 0) {
              local_e0.top = 0;
              local_e0.left = ((int)local_8 - puVar1[0x30]) + (int)local_1c;
              local_e0.right =
                   (LONG)((byte *)((int)local_8 + puVar1[0x30] * 2) + (int)local_1c + local_14);
              local_e0.bottom = puVar1[0x11] - 1;
              FUN_01079d60(puVar1,hdc,&local_e0,puVar1[(int)param_1 * 9 + 0x36],local_18);
            }
            BitBlt(hdc_00,puVar1[6] + (int)param_2,puVar1[7],local_c,puVar1[0x11],hdc,
                   (int)((int)local_8 + (int)local_1c),0,0xcc0020);
          }
LAB_0107936a:
          param_1 = (uint *)((int)param_1 + 1);
        } while (param_1 < puVar1[0x2a]);
      }
    }
    SelectObject(hdc,local_124);
  }
  return;
}


