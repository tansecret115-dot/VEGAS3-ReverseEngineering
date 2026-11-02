/* Module: sftrkfx1.dll
   Function: FUN_5cbc6680
   Address: 5cbc6680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc6680(uint *param_1,HDC param_2,undefined *param_3)

{
  HDC hdc;
  uint *puVar1;
  HDC hdc_00;
  DWORD DVar2;
  int iVar3;
  HFONT h;
  uint *puVar4;
  DWORD *pDVar5;
  HDC pHVar6;
  uint uVar7;
  int h_00;
  uint *puVar8;
  uint uVar9;
  uchar *puVar10;
  RECT local_144;
  RECT local_134;
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
  RECT local_a8;
  uint local_98;
  undefined1 *local_94;
  int local_90;
  uchar *local_8c;
  uint local_88;
  uint local_84;
  uchar *local_80;
  uchar *local_7c;
  uint local_78;
  undefined1 *local_74;
  int local_70;
  uchar *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uchar *local_50;
  uchar *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uchar *puStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uchar *local_2c;
  uint local_28;
  uint local_24;
  uchar *puStack_20;
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
        if ((*pDVar5 + DAT_5cc10b50 < DVar2) || ((int)pDVar5[-3] <= (int)pDVar5[-4])) {
          pDVar5[-3] = pDVar5[-4];
          *pDVar5 = DVar2;
          pDVar5[3] = 0xffffffff;
        }
        if ((pDVar5[1] + DAT_5cc10b50 < DVar2) || ((int)pDVar5[-4] <= (int)pDVar5[-2])) {
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
        FUN_5cbc6510((byte *)param_1,param_2);
      }
      iVar3 = FUN_5cbc4e50(param_1,local_18,param_1[0xc],param_1[0xd]);
      if (iVar3 == 0) {
        FUN_5cbc64e0(param_2,(RECT *)(param_1 + 6),0xff0000);
        return;
      }
    }
    hdc = DAT_5cc10b54;
    local_34 = param_1[0x1e];
    local_124 = SelectObject(DAT_5cc10b54,(HGDIOBJ)param_1[0x16]);
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
            uVar7 = FUN_5cbc63f0((int)puVar1,(double)(int)local_48 * *(double *)(puVar1 + 0x22));
            *puVar4 = uVar7;
          }
          param_1 = (uint *)((int)param_1 + 1);
          puVar4 = puVar4 + 9;
        } while (param_1 < (uint *)puVar1[0x2a]);
      }
    }
    else if (*puVar8 != 0) {
      param_2 = (HDC)(puVar1 + 0x39);
      do {
        iVar3 = FUN_5cbc63f0((int)puVar1,(double)(float)param_2[-6].unused);
        param_2->unused = iVar3;
        param_2 = param_2 + 9;
        param_1 = (uint *)((int)param_1 + 1);
      } while (param_1 < (uint *)puVar1[0x2a]);
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
      h = FUN_5cbdc9c0(0x6e);
      SelectObject(hdc,h);
      SetTextAlign(hdc,6);
      DVar2 = GetSysColor(8);
      SetTextColor(hdc,DVar2);
    }
    if ((puVar1[1] & 1) == 0) {
      local_c = (puVar1[10] - puVar1[0x10]) - 1;
      local_30 = puVar1[0x14];
      local_40 = 0;
      puStack_3c = (uchar *)0x0;
      local_2c = (uchar *)puVar1[0x15];
      if ((local_18 & 2) != 0) {
        local_40 = puVar1[0x14];
        local_30 = 0;
        local_2c = (uchar *)0x0;
        puStack_3c = (uchar *)puVar1[0x15];
      }
      local_24 = puVar1[0x2a];
      local_10 = (HGDIOBJ)0x0;
      puStack_20 = (uchar *)0x0;
      param_2 = (HDC)0x0;
      unique0x100009c9 = (double)(puVar1[0xb] - (local_24 - 1) * puVar1[0x1d]) / (double)local_24;
      if (((param_3 != (undefined *)0x0) && ((local_18 & 0x10) != 0)) && (local_44 != 0)) {
        local_b8.top = 0;
        local_b8.right = puVar1[0x10] + 1 + local_c;
        local_b8.bottom = (LONG)local_2c;
        local_b8.left = puVar1[10] - puVar1[0x10];
        (*(code *)param_3)(puVar1,hdc,&local_b8,1);
      }
      param_1 = (uint *)0x0;
      if (puVar1[0x2a] != 0) {
        local_48 = local_18 & 0x10;
        local_38 = local_18 & 0x80;
        do {
          if (local_38 == 0) {
            param_2 = (HDC)((int)&param_2->unused + (int)local_10);
            local_d0 = (double)(ulonglong)((int)param_1 + 1);
            iVar3 = ftol();
            local_1c = (HGDIOBJ)0x1;
            if (0 < iVar3 - (int)param_2) {
              local_1c = (HGDIOBJ)(iVar3 - (int)param_2);
            }
            if (param_1 < (uint *)(puVar1[0x2a] - 1)) {
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
            param_2 = (HDC)((int)&param_2->unused + uVar7);
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
             (BitBlt(hdc_00,local_14 + puVar1[6],(int)&param_2->unused + puVar1[7],
                     local_c - local_14,(int)local_10,hdc,local_14 + local_30,
                     (int)(local_2c + local_28),0xcc0020), 0 < (int)local_14)) {
            if ((*puVar1 & 0x80) == 0) {
              h_00 = (int)local_1c - (uint)((int)param_1 + 1U == puVar1[0x2a]);
              iVar3 = (uint)(param_1 == (uint *)0x0) + puVar1[7];
            }
            else {
              h_00 = (int)local_1c - 2;
              iVar3 = puVar1[7] + 1;
            }
            PatBlt(hdc_00,local_14 + puVar1[6],(int)&param_2->unused + iVar3,1,h_00,0x42);
          }
          uVar7 = local_14;
          if ((int)local_c < (int)local_14) {
            uVar7 = local_c;
          }
          if (0 < (int)uVar7) {
            BitBlt(hdc_00,puVar1[6],(int)&param_2->unused + puVar1[7],uVar7,(int)local_1c,hdc,
                   local_40,(int)(puStack_3c + local_28),0xcc0020);
          }
          if ((((int)local_8[0x39] < (int)local_8[0x3a]) &&
              (iVar3 = (local_8[0x3a] - local_34) + local_c, iVar3 < (int)local_c)) && (0 < iVar3))
          {
            BitBlt(hdc_00,iVar3 + puVar1[6],(int)&param_2->unused + puVar1[7],1,(int)local_1c,hdc,
                   iVar3 + local_40,(int)(puStack_3c + local_28),0xcc0020);
          }
          if ((((int)local_8[0x3b] < (int)local_8[0x39]) &&
              (iVar3 = (local_8[0x3b] - local_34) + local_c, iVar3 < (int)local_c)) && (0 < iVar3))
          {
            BitBlt(hdc_00,iVar3 + puVar1[6],(int)&param_2->unused + puVar1[7],1,(int)local_1c,hdc,
                   iVar3 + local_30,(int)(local_2c + local_28),0xcc0020);
          }
          if (local_48 == 0) {
LAB_5cbc78be:
            if (local_38 != 0) {
              if ((param_1 == (uint *)0x0) && (0 < (int)puVar1[0x30])) {
                local_84 = puVar1[7];
                local_88 = puVar1[6];
                local_7c = (uchar *)(local_84 + puVar1[0x30]);
                local_80 = (uchar *)(puVar1[8] - puVar1[0x10]);
                if (param_3 == (undefined *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  puStack_20 = (uchar *)SetBkColor(hdc_00,DVar2);
                  local_110.top = local_84;
                  local_110.left = local_88;
                  local_110.right = (LONG)local_80;
                  local_110.bottom = (LONG)local_7c;
                  ExtTextOutA(hdc_00,0,0,2,&local_110,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)puStack_20);
                }
                else {
                  (*(code *)param_3)(puVar1,hdc_00,&local_88,1);
                }
              }
              if (((uint *)(puVar1[0x2a] - 1) == param_1) && (0 < (int)puVar1[0x30])) {
                local_98 = puVar1[6];
                local_94 = (undefined1 *)
                           (puVar1[0x32] * (int)param_1 + puVar1[7] + puVar1[0x31] + puVar1[0xd] +
                           puVar1[0x30]);
                local_90 = puVar1[8] - puVar1[0x10];
                local_8c = (uchar *)puVar1[9];
                if (param_3 == (undefined *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  puStack_20 = (uchar *)SetBkColor(hdc_00,DVar2);
                  local_f0.top = (LONG)local_94;
                  local_f0.left = local_98;
                  local_f0.right = local_90;
                  local_f0.bottom = (LONG)local_8c;
                  ExtTextOutA(hdc_00,0,0,2,&local_f0,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)puStack_20);
                }
                else {
                  (*(code *)param_3)(puVar1,hdc_00,&local_98,1);
                }
              }
              if (param_1 < (uint *)(puVar1[0x2a] - 1)) {
                if (((local_18 & 0x400) == 0) || ((HGDIOBJ)puVar1[0x17] == (HGDIOBJ)0x0)) {
                  local_78 = puVar1[6];
                  local_74 = (undefined1 *)((int)local_10 + (int)((int)&param_2->unused + 1));
                  local_70 = puVar1[8] - puVar1[0x10];
                  local_6c = (uchar *)((int)local_10 + (int)&param_2->unused + puVar1[0xf] + 1);
                  if (param_3 == (undefined *)0x0) {
                    DVar2 = GetSysColor(0xf);
                    puStack_20 = (uchar *)SetBkColor(hdc_00,DVar2);
                    local_100.top = (LONG)local_74;
                    local_100.left = local_78;
                    local_100.right = local_70;
                    local_100.bottom = (LONG)local_6c;
                    ExtTextOutA(hdc_00,0,0,2,&local_100,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc_00,(COLORREF)puStack_20);
                  }
                  else {
                    (*(code *)param_3)(puVar1,hdc_00,&local_78,1);
                  }
                }
                else {
                  local_8 = SelectObject(hdc,(HGDIOBJ)puVar1[0x17]);
                  if (param_3 == (undefined *)0x0) {
                    local_50 = (uchar *)puVar1[0xe];
                    local_54 = puVar1[0xf] * 2;
                    local_4c = (uchar *)(puVar1[0xf] * 3);
                    puVar1[1] = puVar1[1] & 0xffffffbf;
                    DVar2 = GetSysColor(0xf);
                    puStack_20 = (uchar *)SetBkColor(hdc,DVar2);
                    local_e0.top = local_54;
                    local_e0.left = 0;
                    local_e0.right = (LONG)local_50;
                    local_e0.bottom = (LONG)local_4c;
                    ExtTextOutA(hdc,0,0,2,&local_e0,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc,(COLORREF)puStack_20);
                    iVar3 = (int)local_4c - local_54;
                    uVar7 = 0;
                    uVar9 = local_54;
                    puVar10 = local_50;
                  }
                  else {
                    local_60 = puVar1[0xe];
                    local_64 = puVar1[0xf] * 2;
                    local_68 = 0;
                    local_5c = puVar1[0xf] * 3;
                    puVar1[1] = puVar1[1] | 0x40;
                    (*(code *)param_3)(puVar1,hdc,&local_68,1);
                    iVar3 = local_5c - local_64;
                    uVar7 = local_68;
                    uVar9 = local_64;
                    puVar10 = (uchar *)(local_60 - local_68);
                  }
                  BitBlt(hdc,uVar7,uVar9,(int)puVar10,iVar3,hdc,0,0,0x8800c6);
                  BitBlt(hdc_00,puVar1[6],(int)((int)local_10 + (int)((int)&param_2->unused + 1)),
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
                local_1c = (HGDIOBJ)(((int)puVar4 <= (int)puVar1[0x21]) - 1 & (uint)local_2c);
                local_14 = (int)local_1c + local_28;
                puStack_20 = (uchar *)(puVar1[0xb] - 2);
                local_b8.top = local_14 + 1;
                local_b8.right = puVar1[0x10] + local_c;
                local_b8.bottom = (LONG)(puStack_20 + (int)local_1c + local_28);
                local_8 = puVar4;
                FUN_5cbc7e00((byte *)puVar1,hdc,&local_b8,(uchar *)puVar4);
                BitBlt(hdc_00,puVar1[6] + local_c,(int)&param_2->unused + puVar1[7],puVar1[0x10] + 1
                       ,(int)puStack_20,hdc,local_c + 1,local_14,0xcc0020);
              }
              goto LAB_5cbc78be;
            }
            if (local_38 != 0) {
              puStack_20 = SelectObject(hdc,(HGDIOBJ)puVar1[0x18]);
              local_a8.right = puVar1[0x10];
              local_a8.bottom = puVar1[0x11];
              local_a8.left = 0;
              local_a8.top = 0;
              if (param_3 != (undefined *)0x0) {
                puVar1[1] = puVar1[1] | 0x40;
                (*(code *)param_3)(puVar1,hdc,&local_a8,1);
              }
              FUN_5cbc7e00((byte *)puVar1,hdc,&local_a8,(uchar *)puVar1[(int)param_1 * 9 + 0x36]);
              BitBlt(hdc_00,puVar1[6] + local_c,(puVar1[7] - puVar1[0x30]) + (int)param_2,
                     puVar1[0x10],puVar1[0x11],hdc,0,0,0xcc0020);
              SelectObject(hdc,puStack_20);
              goto LAB_5cbc78be;
            }
            puStack_20 = (uchar *)puVar1[(int)param_1 * 9 + 0x36];
            local_8 = (uint *)(((int)puStack_20 <= (int)puVar1[0x21]) - 1 & (uint)local_2c);
            if (local_44 != 0) {
              local_120.left = local_c + 1;
              local_120.top = (int)local_8 + local_28;
              local_120.right = puVar1[0x10] + 1 + local_c;
              local_120.bottom = local_120.top + (int)local_1c;
              FUN_5cbc7e00((byte *)puVar1,hdc,&local_120,puStack_20);
            }
            BitBlt(hdc_00,puVar1[6] + local_c,(int)&param_2->unused + puVar1[7],puVar1[0x10] + 1,
                   (int)local_10,hdc,local_c,(int)((int)local_8 + local_28),0xcc0020);
          }
          param_1 = (uint *)((int)param_1 + 1);
        } while (param_1 < (uint *)puVar1[0x2a]);
      }
    }
    else {
      local_c = puVar1[0x11] + 1;
      local_24 = puVar1[0x14];
      local_30 = 0;
      puStack_20 = (uchar *)puVar1[0x15];
      local_2c = (uchar *)0x0;
      if ((local_18 & 2) != 0) {
        local_30 = puVar1[0x14];
        local_24 = 0;
        local_2c = (uchar *)puVar1[0x15];
        puStack_20 = (uchar *)0x0;
      }
      if (((param_3 != (undefined *)0x0) && (puVar1[1] = puVar1[1] | 0x40, (local_18 & 0x10) != 0))
         && (local_44 != 0)) {
        local_a8.left = 0;
        local_a8.top = 0;
        local_a8.right = local_24;
        local_a8.bottom = puVar1[0x11] - 1;
        (*(code *)param_3)(puVar1,hdc,&local_a8,1);
      }
      local_40 = puVar1[0x2a];
      puStack_3c = (uchar *)0x0;
      local_c = 0;
      param_2 = (HDC)0x0;
      param_1 = (uint *)0x0;
      local_d0 = (double)(puVar1[10] - (local_40 - 1) * puVar1[0x1d]) / (double)local_40;
      if (local_40 != 0) {
        local_48 = local_18 & 0x10;
        local_38 = local_18 & 0x80;
        do {
          if (local_38 == 0) {
            param_2 = (HDC)((int)&param_2->unused + local_c);
            puStack_3c = (uchar *)0x0;
            local_40 = (int)param_1 + 1;
            iVar3 = ftol();
            local_14 = 1;
            if (0 < iVar3 - (int)param_2) {
              local_14 = iVar3 - (int)param_2;
            }
            if (param_1 < (uint *)(puVar1[0x2a] - 1)) {
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
              pHVar6 = (HDC)puVar1[0x30];
              if ((int)puVar1[0x30] < 1) {
                pHVar6 = param_2;
              }
              uVar9 = puVar1[0x31];
              param_2 = pHVar6;
            }
            else {
              uVar9 = puVar1[0x32];
            }
            param_2 = (HDC)((int)&param_2->unused + uVar9);
            local_1c = (HGDIOBJ)0x0;
            local_14 = puVar1[0xc];
            local_c = local_14;
          }
          if ((puVar1[1] & 0x400) == 0) {
            if (0 < (int)local_10) {
              BitBlt(hdc_00,(int)&param_2->unused + puVar1[6],puVar1[7] + uVar7,local_c,
                     (int)local_10 - uVar7,hdc,(int)local_1c + local_24,(int)(puStack_20 + uVar7),
                     0xcc0020);
            }
            if ((int)local_10 < (int)puVar1[0xb]) {
              PatBlt(hdc_00,(int)&param_2->unused + puVar1[6] + 1,puVar1[7] + (int)local_10,
                     local_14 - 2,1,0x42);
            }
            local_10 = (HGDIOBJ)((int)local_10 + 1);
            local_28 = puVar1[0xb] - (int)local_10;
            if (0 < (int)local_28) {
              BitBlt(hdc_00,(int)&param_2->unused + puVar1[6],puVar1[7] + (int)local_10,local_c,
                     local_28,hdc,(int)local_1c + local_30,(int)((int)local_10 + (int)local_2c),
                     0xcc0020);
            }
            if (((int)local_8[0x39] < (int)local_8[0x3a]) &&
               (iVar3 = local_34 - local_8[0x3a], -1 < iVar3)) {
              iVar3 = iVar3 + puVar1[0x11];
              BitBlt(hdc_00,(int)&param_2->unused + puVar1[6],puVar1[7] + iVar3,local_14,1,hdc,
                     (int)local_1c + local_30,(int)(local_2c + iVar3),0xcc0020);
            }
            if (((int)local_8[0x3b] < (int)local_8[0x39]) &&
               (iVar3 = local_34 - local_8[0x3b], -1 < iVar3)) {
              iVar3 = iVar3 + puVar1[0x11];
              BitBlt(hdc_00,(int)&param_2->unused + puVar1[6],puVar1[7] + iVar3,local_14,1,hdc,
                     (int)local_1c + local_24,(int)(puStack_20 + iVar3),0xcc0020);
            }
          }
          else {
            local_c8._0_4_ = (int)&param_2->unused + puVar1[6];
            local_c8._4_4_ = puVar1[7] + uVar7;
            stack0xffffff40 = (double)CONCAT44(puVar1[9],local_c8._0_4_ + local_c);
            DrawEdge(hdc_00,(LPRECT)local_c8,2,0xf);
            InflateRect((LPRECT)local_c8,-1,-1);
            if (param_3 == (undefined *)0x0) {
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
              (*(code *)param_3)(puVar1,hdc_00,local_c8,1);
            }
          }
          if (local_48 == 0) {
LAB_5cbc6e77:
            if (local_38 != 0) {
              if ((param_1 == (uint *)0x0) && (0 < (int)puVar1[0x30])) {
                local_78 = puVar1[6];
                local_74 = (undefined1 *)(puVar1[7] + puVar1[0x11]);
                local_70 = local_78 + puVar1[0x30];
                local_6c = (uchar *)puVar1[9];
                if (param_3 == (undefined *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  local_8 = (uint *)SetBkColor(hdc_00,DVar2);
                  local_f0.top = (LONG)local_74;
                  local_f0.left = local_78;
                  local_f0.right = local_70;
                  local_f0.bottom = (LONG)local_6c;
                  ExtTextOutA(hdc_00,0,0,2,&local_f0,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)local_8);
                }
                else {
                  (*(code *)param_3)(puVar1,hdc_00,&local_78,1);
                }
              }
              if (((uint *)(puVar1[0x2a] - 1) == param_1) && (0 < (int)puVar1[0x30])) {
                local_58 = puVar1[0x32] * (int)param_1 + puVar1[0x31] + puVar1[0xc] + puVar1[6] +
                           puVar1[0x30];
                local_54 = puVar1[7] + puVar1[0x11];
                local_50 = (uchar *)puVar1[8];
                local_4c = (uchar *)puVar1[9];
                if (param_3 == (undefined *)0x0) {
                  DVar2 = GetSysColor(0xf);
                  local_8 = (uint *)SetBkColor(hdc_00,DVar2);
                  local_110.top = local_54;
                  local_110.left = local_58;
                  local_110.right = (LONG)local_50;
                  local_110.bottom = (LONG)local_4c;
                  ExtTextOutA(hdc_00,0,0,2,&local_110,(LPCSTR)0x0,0,(INT *)0x0);
                  SetBkColor(hdc_00,(COLORREF)local_8);
                }
                else {
                  (*(code *)param_3)(puVar1,hdc_00,&local_58,1);
                }
              }
              if (param_1 < (uint *)(puVar1[0x2a] - 1)) {
                if (((local_18 & 0x400) == 0) || ((HGDIOBJ)puVar1[0x17] == (HGDIOBJ)0x0)) {
                  local_88 = (int)&param_2->unused + local_c + puVar1[6];
                  local_84 = puVar1[7] + puVar1[0x11];
                  local_7c = (uchar *)puVar1[9];
                  local_80 = (uchar *)((int)&param_2->unused + puVar1[0xe] + puVar1[6] + local_c);
                  if (param_3 == (undefined *)0x0) {
                    DVar2 = GetSysColor(0xf);
                    local_8 = (uint *)SetBkColor(hdc_00,DVar2);
                    local_b8.top = local_84;
                    local_b8.left = local_88;
                    local_b8.right = (LONG)local_80;
                    local_b8.bottom = (LONG)local_7c;
                    ExtTextOutA(hdc_00,0,0,2,&local_b8,(LPCSTR)0x0,0,(INT *)0x0);
                    SetBkColor(hdc_00,(COLORREF)local_8);
                  }
                  else {
                    (*(code *)param_3)(puVar1,hdc_00,&local_88,1);
                  }
                }
                else {
                  local_10 = SelectObject(hdc,(HGDIOBJ)puVar1[0x17]);
                  uVar7 = puVar1[0xe];
                  if (param_3 == (undefined *)0x0) {
                    local_90 = uVar7 * 3;
                    local_8c = (uchar *)puVar1[0xf];
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
                    puVar10 = local_8c;
                  }
                  else {
                    local_60 = uVar7 * 3;
                    local_5c = puVar1[0xf];
                    local_64 = 0;
                    puVar1[1] = puVar1[1] | 0x40;
                    local_68 = uVar7 * 2;
                    (*(code *)param_3)(puVar1,hdc,&local_68,1);
                    iVar3 = local_60 - local_68;
                    uVar7 = local_68;
                    uVar9 = local_64;
                    puVar10 = (uchar *)(local_5c - local_64);
                  }
                  BitBlt(hdc,uVar7,uVar9,iVar3,(int)puVar10,hdc,0,0,0x8800c6);
                  BitBlt(hdc_00,(int)&param_2->unused + puVar1[6] + local_c,puVar1[7] + puVar1[0x11]
                         ,puVar1[0xe],(puVar1[9] - puVar1[7]) - puVar1[0x11],hdc,puVar1[0xe] * 2,0,
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
                  FUN_5cbc7e00((byte *)puVar1,hdc,&local_100,(uchar *)puVar4);
                  BitBlt(hdc_00,(int)&param_2->unused + puVar1[6],puVar1[7],local_14 * puVar1[0x2a],
                         puVar1[0x11],hdc,local_28,0,0xcc0020);
                  goto LAB_5cbc740a;
                }
                local_134.right = puVar1[0x10];
                local_134.left = 0;
                local_134.top = 0;
                local_134.bottom = puVar1[0x11];
                FUN_5cbc7e00((byte *)puVar1,hdc,&local_134,(uchar *)puVar1[0x36]);
                BitBlt(hdc_00,(int)((puVar1[8] - puVar1[0x10]) + puVar1[6]) / 2,puVar1[7],
                       puVar1[0x10],puVar1[0x11] - 1,hdc,0,0,0xcc0020);
              }
              goto LAB_5cbc6e77;
            }
            if (local_38 != 0) {
              local_8 = SelectObject(hdc,(HGDIOBJ)puVar1[0x18]);
              local_a8.right = puVar1[0x10];
              local_a8.bottom = puVar1[0x11];
              local_a8.left = 0;
              local_a8.top = 0;
              if (param_3 != (undefined *)0x0) {
                puVar1[1] = puVar1[1] | 0x40;
                (*(code *)param_3)(puVar1,hdc,&local_a8,1);
              }
              FUN_5cbc7e00((byte *)puVar1,hdc,&local_a8,(uchar *)puVar1[(int)param_1 * 9 + 0x36]);
              BitBlt(hdc_00,(puVar1[6] - puVar1[0x30]) + (int)param_2,puVar1[7],puVar1[0x10],
                     puVar1[0x11] - 1,hdc,0,0,0xcc0020);
              SelectObject(hdc,local_8);
              goto LAB_5cbc6e77;
            }
            local_8 = (uint *)(((int)puVar1[(int)param_1 * 9 + 0x36] <= (int)puVar1[0x21]) - 1 &
                              local_24);
            if (local_44 != 0) {
              local_e0.top = 0;
              local_e0.left = ((int)local_8 - puVar1[0x30]) + (int)local_1c;
              local_e0.right =
                   (LONG)((uchar *)((int)local_8 + puVar1[0x30] * 2) + (int)local_1c + local_14);
              local_e0.bottom = puVar1[0x11] - 1;
              FUN_5cbc7e00((byte *)puVar1,hdc,&local_e0,(uchar *)puVar1[(int)param_1 * 9 + 0x36]);
            }
            BitBlt(hdc_00,(int)&param_2->unused + puVar1[6],puVar1[7],local_c,puVar1[0x11],hdc,
                   (int)((int)local_8 + (int)local_1c),0,0xcc0020);
          }
LAB_5cbc740a:
          param_1 = (uint *)((int)param_1 + 1);
        } while (param_1 < (uint *)puVar1[0x2a]);
      }
    }
    SelectObject(hdc,local_124);
  }
  return;
}


