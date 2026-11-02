/* Module: sftrans1.dll
   Function: FUN_00492080
   Address: 00492080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00492080(int *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  LONG LVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  HGDIOBJ pvVar8;
  double *pdVar9;
  double *pdVar10;
  short sVar11;
  undefined8 *puVar12;
  bool bVar13;
  HDC pHVar14;
  RECT local_31c;
  RECT local_30c;
  tagRECT local_2fc;
  uint local_2ec;
  uint local_2e8;
  int local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  COLORREF local_2d8;
  undefined4 local_2d4;
  HDC local_2cc;
  int local_2c8 [3];
  COLORREF local_2bc;
  int local_2b8;
  int iStack_2b4;
  undefined8 local_2b0 [42];
  int local_160;
  int iStack_15c;
  undefined8 local_158 [42];
  
  if (param_3 < 0x112) {
    if (param_3 != 0x111) {
      if (param_3 == 0x4e) {
        if (((param_5 != (undefined4 *)0x0) && (param_1[0xc] != 0)) && (param_5[1] == 0x6b8)) {
          iVar5 = FUN_00485e60(param_1[0xb]);
          bVar13 = *(int *)(iVar5 + 0x10) != 0xe9;
          if (param_5[2] == 0x837) {
            iVar5 = param_1[0xc];
            local_160 = -0x66666666;
            iStack_15c = 0x3fb99999;
            *(undefined4 *)(iVar5 + 0x18) = 0x9999999a;
            *(undefined4 *)(iVar5 + 0x1c) = 0x3fb99999;
            iVar5 = param_1[0xc];
            local_2b8 = -0x33333333;
            iStack_2b4 = 0x3feccccc;
            *(undefined4 *)(iVar5 + 0x20) = 0xcccccccd;
            *(undefined4 *)(iVar5 + 0x24) = 0x3feccccc;
            uVar2 = _DAT_00562458;
            local_2b0[0] = _DAT_00557838;
            if (bVar13) {
              iVar5 = param_1[0xc];
              *(undefined4 *)(iVar5 + 0x28) = 0x33333333;
              *(undefined4 *)(iVar5 + 0x2c) = 0x3fd33333;
              local_2b0[0] = uVar2;
            }
            local_158[0] = local_2b0[0];
            SendMessageA((HWND)*param_5,0x810,2,0);
            SendMessageA((HWND)*param_5,0x804,0,(LPARAM)&local_160);
            SendMessageA((HWND)*param_5,0x804,1,(LPARAM)&local_2b8);
            piVar1 = (int *)param_1[0xd];
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x2c))(piVar1);
            }
            SendMessageA((HWND)*param_5,0x801,0,0);
            return 1;
          }
          if (param_5[2] == 0x838) {
            local_160 = 0;
            iStack_15c = 0;
            puVar12 = local_158;
            for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)puVar12 = 0;
              puVar12 = (undefined8 *)((int)puVar12 + 4);
            }
            SendMessageA((HWND)*param_5,0x805,0,(LPARAM)&local_160);
            local_2b8 = 0;
            iStack_2b4 = 0;
            puVar12 = local_2b0;
            for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)puVar12 = 0;
              puVar12 = (undefined8 *)((int)puVar12 + 4);
            }
            SendMessageA((HWND)*param_5,0x805,1,(LPARAM)&local_2b8);
            iVar5 = param_5[3];
            if (iVar5 == 0) {
              pdVar10 = (double *)(param_1[0xc] + 0x18);
              if (_DAT_00555910 <= (double)CONCAT44(iStack_15c,local_160)) {
                if ((double)CONCAT44(iStack_2b4,local_2b8) < (double)CONCAT44(iStack_15c,local_160))
                {
                  local_160 = local_2b8;
                  iStack_15c = iStack_2b4;
                }
              }
              else {
                local_160 = iVar5;
                iStack_15c = iVar5;
              }
            }
            else {
              pdVar10 = (double *)(param_1[0xc] + 0x20);
              if ((double)CONCAT44(iStack_15c,local_160) <= (double)CONCAT44(iStack_2b4,local_2b8))
              {
                if (_DAT_00555908 < (double)CONCAT44(iStack_2b4,local_2b8)) {
                  local_2b8 = 0;
                  iStack_2b4 = 0x3ff00000;
                }
              }
              else {
                local_2b8 = local_160;
                iStack_2b4 = iStack_15c;
              }
            }
            pdVar9 = (double *)&local_160;
            if (iVar5 != 0) {
              pdVar9 = (double *)&local_2b8;
            }
            if ((*pdVar10 != *pdVar9) || (*(double *)(param_1[0xc] + 0x28) != pdVar9[1])) {
              *(undefined4 *)pdVar10 = *(undefined4 *)pdVar9;
              *(undefined4 *)((int)pdVar10 + 4) = *(undefined4 *)((int)pdVar9 + 4);
              if (bVar13) {
                iVar5 = param_1[0xc];
                *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(pdVar9 + 1);
                *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)((int)pdVar9 + 0xc);
              }
              piVar1 = (int *)param_1[0xd];
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 0x2c))(piVar1);
              }
            }
            if (bVar13) {
              local_2d8 = *(undefined4 *)(param_1[0xc] + 0x28);
              local_2d4 = *(undefined4 *)(param_1[0xc] + 0x2c);
            }
            else {
              local_2d8 = 0;
              local_2d4 = 0x3fe00000;
            }
            iVar5 = param_1[0xc];
            FUN_00491e30(*param_5,*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),
                         *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),local_2d8,
                         local_2d4);
            return 1;
          }
        }
      }
      else if (param_3 == 0x53) {
        uVar4 = FUN_00493250(0x53,param_4,param_5);
        return uVar4;
      }
      return 0;
    }
    sVar11 = (short)param_4;
    if ((uint)param_4 >> 0x10 == 1) {
      if (param_1[0xc] == 0) {
        return 0;
      }
      if (sVar11 != 0x6b5) {
        return 1;
      }
      iVar5 = FUN_004915e0(param_5,param_1[0xc] + 8);
      if (iVar5 == 0) {
        return 1;
      }
      piVar1 = (int *)param_1[0xd];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
      }
      FUN_00486140(*(undefined4 *)(param_1[0xc] + 8));
      iVar5 = FUN_00485e60(param_1[0xb]);
      if (*(int *)(iVar5 + 0x10) == 0xe9) {
        local_2d8 = 0;
        local_2d4 = 0x3fe00000;
      }
      else {
        local_2d8 = *(undefined4 *)(param_1[0xc] + 0x28);
        local_2d4 = *(undefined4 *)(param_1[0xc] + 0x2c);
      }
      iVar5 = param_1[0xc];
      FUN_00491e30(param_5,*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),
                   *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),local_2d8,local_2d4);
      return 1;
    }
    if ((uint)param_4 >> 0x10 != 0x200) {
      return 0;
    }
    FUN_00485e60(param_1[0xb]);
    if (sVar11 == 0x6b6) {
      iVar5 = param_1[0xc];
      iVar5 = FUN_00491610(param_5,iVar5 + 0x18,0,0,*(undefined4 *)(iVar5 + 0x20),
                           *(undefined4 *)(iVar5 + 0x24));
    }
    else {
      if (sVar11 != 0x6d1) {
        if (sVar11 != 0x6b7) {
          return 0;
        }
        iVar5 = FUN_00491610(param_5,param_1[0xc] + 0x28,0,0,0,0x3ff00000);
        if (iVar5 != 0) {
          piVar1 = (int *)param_1[0xd];
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          (**(code **)(*piVar1 + 0x2c))(piVar1);
          return 0;
        }
        (**(code **)(*param_1 + 8))();
        return 0;
      }
      iVar5 = param_1[0xc];
      iVar5 = FUN_00491610(param_5,iVar5 + 0x20,*(undefined4 *)(iVar5 + 0x18),
                           *(undefined4 *)(iVar5 + 0x1c),0,0x3ff00000);
    }
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 8))();
      return 0;
    }
    piVar1 = (int *)param_1[0xd];
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piVar1 + 0x2c))(piVar1);
    return 0;
  }
  if (param_3 != 0x820) {
    return 0;
  }
  local_2b8 = 0;
  iStack_2b4 = 0;
  puVar12 = local_2b0;
  for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)puVar12 = 0;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
  }
  local_160 = 0;
  iStack_15c = 0;
  puVar12 = local_158;
  for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)puVar12 = 0;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
  }
  SendMessageA((HWND)*param_4,0x805,0,(LPARAM)&local_2b8);
  SendMessageA((HWND)*param_4,0x805,1,(LPARAM)&local_160);
  local_2c8[2] = SetBkMode((HDC)param_4[5],2);
  local_2d8 = SetBkColor((HDC)param_4[5],0x404040);
  uVar6 = ftol();
  local_2ec = ftol();
  iVar5 = ftol();
  iVar7 = FUN_00485e60(param_1[0xb]);
  local_2e0 = 0;
  local_2e4 = iVar5;
  if (*(int *)(iVar7 + 0x10) == 0xe9) {
    local_2e4 = param_4[2];
  }
  local_2dc = param_4[4];
  local_2e8 = uVar6;
  if ((int)local_2ec <= (int)uVar6) {
    local_2e8 = ((int)(local_2ec - 1) < 1) - 1 & local_2ec - 1;
  }
  SetBkColor((HDC)param_4[5],0x808080);
  pHVar14 = (HDC)param_4[5];
  if ((((int)param_4[1] <= (int)local_2e8) && ((int)param_4[2] <= local_2e4)) &&
     (((int)local_2ec <= (int)param_4[3] && (local_2dc <= (int)param_4[4])))) {
    local_30c.right = param_4[3];
    local_30c.bottom = local_2e4;
    local_30c.left = param_4[1];
    local_30c.top = param_4[2];
    ExtTextOutA(pHVar14,0,0,2,&local_30c,(LPCSTR)0x0,0,(INT *)0x0);
    local_30c.left = param_4[1];
    local_30c.right = param_4[3];
    local_30c.top = local_2dc;
    local_30c.bottom = param_4[4];
    ExtTextOutA(pHVar14,0,0,2,&local_30c,(LPCSTR)0x0,0,(INT *)0x0);
    local_30c.left = param_4[1];
    local_30c.top = local_2e4;
    local_30c.right = local_2e8;
    local_30c.bottom = local_2dc;
    ExtTextOutA(pHVar14,0,0,2,&local_30c,(LPCSTR)0x0,0,(INT *)0x0);
    local_30c.right = param_4[3];
    local_30c.top = local_2e4;
    local_30c.left = local_2ec;
    local_30c.bottom = local_2dc;
    ExtTextOutA(pHVar14,0,0,2,&local_30c,(LPCSTR)0x0,0,(INT *)0x0);
  }
  local_2fc.top = local_2e4;
  local_2fc.left = local_2e8;
  local_2fc.right = local_2ec;
  local_2fc.bottom = local_2dc;
  InflateRect(&local_2fc,-1,-1);
  local_2bc = SetTextColor((HDC)param_4[5],0xffffff);
  if ((local_2fc.right - local_2fc.left < 7) || (local_2fc.bottom - local_2fc.top < 7)) {
    SetBkColor((HDC)param_4[5],0);
    local_31c.top = local_2e4;
    local_31c.right = local_2ec;
    local_31c.left = local_2e8;
    local_31c.bottom = local_2dc;
    ExtTextOutA((HDC)param_4[5],0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor((HDC)param_4[5],0x800000);
    local_31c.top = local_2fc.top;
    local_31c.left = local_2fc.left;
    pHVar14 = (HDC)param_4[5];
    local_31c.bottom = local_2fc.bottom;
  }
  else {
    SetBkColor((HDC)param_4[5],0);
    pHVar14 = (HDC)param_4[5];
    if (((((int)local_2e8 <= local_2fc.left) && (local_2e4 <= local_2fc.top)) &&
        (local_2fc.right <= (int)local_2ec)) && (local_2fc.bottom <= local_2dc)) {
      local_31c.left = local_2e8;
      local_31c.top = local_2e4;
      local_2cc = (HDC)local_2ec;
      local_31c.right = local_2ec;
      local_31c.bottom = local_2fc.top;
      ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
      local_31c.top = local_2fc.bottom;
      local_31c.right = (LONG)local_2cc;
      local_31c.left = local_2e8;
      local_31c.bottom = local_2dc;
      ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
      local_31c.top = local_2fc.top;
      local_31c.right = local_2fc.left;
      local_31c.left = local_2e8;
      local_31c.bottom = local_2fc.bottom;
      ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
      local_31c.top = local_2fc.top;
      local_31c.right = local_2ec;
      local_31c.left = local_2fc.right;
      local_31c.bottom = local_2fc.bottom;
      ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
    }
    SetBkColor((HDC)param_4[5],0x800000);
    local_30c.top = local_2fc.top;
    local_30c.left = local_2fc.left;
    local_30c.right = local_2fc.right;
    local_30c.bottom = local_2fc.bottom;
    InflateRect(&local_30c,-3,-3);
    local_2cc = GetDC((HWND)param_1[1]);
    pvVar8 = GetCurrentObject(local_2cc,6);
    ReleaseDC((HWND)param_1[1],local_2cc);
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    FUN_004e4d70(pvVar8,"Credit Text",0xffffffff,local_2c8);
    LVar3 = local_2fc.left;
    local_2cc = (HDC)(local_2fc.right - local_2fc.left);
    uVar6 = ftol();
    local_30c.left = LVar3;
    if ((LVar3 <= (int)uVar6) && (local_30c.left = uVar6, local_2fc.right < (int)uVar6)) {
      local_30c.left = local_2fc.right;
    }
    uVar6 = local_30c.left + local_2c8[0];
    if ((int)uVar6 < LVar3) {
      local_30c.right = LVar3;
    }
    else {
      local_30c.right = local_2fc.right;
      if ((int)uVar6 <= local_2fc.right) {
        local_30c.right = uVar6;
      }
    }
    FUN_00492ca0(param_4[5],pvVar8,&local_30c,"Credit Text");
    pHVar14 = (HDC)param_4[5];
    if (((local_30c.left < local_2fc.left) || (local_30c.top < local_2fc.top)) ||
       ((local_2fc.right < local_30c.right || (local_2fc.bottom < local_30c.bottom))))
    goto LAB_00492c5d;
    local_31c.left = local_2fc.left;
    local_31c.top = local_2fc.top;
    local_31c.right = local_2fc.right;
    local_31c.bottom = local_30c.top;
    ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
    local_31c.top = local_30c.bottom;
    local_31c.left = local_2fc.left;
    local_31c.right = local_2fc.right;
    local_31c.bottom = local_2fc.bottom;
    ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
    local_31c.top = local_30c.top;
    local_31c.left = local_2fc.left;
    local_31c.right = local_30c.left;
    local_31c.bottom = local_30c.bottom;
    ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
    local_31c.top = local_30c.top;
    local_31c.left = local_30c.right;
    local_31c.bottom = local_30c.bottom;
  }
  local_31c.right = local_2fc.right;
  ExtTextOutA(pHVar14,0,0,2,&local_31c,(LPCSTR)0x0,0,(INT *)0x0);
LAB_00492c5d:
  SetTextColor((HDC)param_4[5],local_2bc);
  SetBkMode((HDC)param_4[5],local_2c8[2]);
  SetBkColor((HDC)param_4[5],local_2d8);
  return 1;
}


