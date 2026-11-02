/* Module: sfppack2.dll
   Function: FUN_5ccfc0c0
   Address: 5ccfc0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_5ccfc0c0(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  POINT pt;
  LONG LVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  HWND pHVar6;
  UINT_PTR UVar7;
  BOOL BVar8;
  LRESULT LVar9;
  HWND pHVar10;
  BYTE *pBVar11;
  short sVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  UINT UVar18;
  HFONT pHVar19;
  uint *puVar20;
  LPARAM lParam;
  uint uStack_16c;
  HFONT local_168;
  uint local_164;
  uint local_160;
  tagPOINT local_15c;
  uint local_154;
  int iStack_150;
  int local_14c;
  int local_148;
  int local_144;
  uchar local_140 [40];
  tagRECT local_118;
  int local_108 [31];
  int iStack_8c;
  undefined1 local_88 [4];
  uint auStack_84 [32];
  
  sVar2 = (short)param_4;
  sVar12 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x114) {
    if (param_2 == 0x113) {
      if (param_3 != 100) {
        return 0;
      }
      pHVar6 = GetDlgItem(param_1,0x7e2);
      if (pHVar6 == (HWND)0x0) {
        return 1;
      }
      GetCursorPos(&local_15c);
      GetWindowRect(pHVar6,&local_118);
      pt.y = local_15c.y;
      pt.x = local_15c.x;
      BVar8 = PtInRect(&local_118,pt);
      if (BVar8 != 0) {
        return 1;
      }
      SetDlgItemTextA(param_1,0x7de,"");
      return 1;
    }
    if (param_2 < 0x7c) {
      if (param_2 == 0x7b) {
        FUN_5ccfbf80(this,param_1,param_3,(int)sVar2,(int)sVar12);
        return 0;
      }
      if (param_2 == 2) {
        piVar14 = *(int **)((int)this + 0x30);
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0x18))(piVar14,*(undefined4 *)((int)this + 0x14),0);
        }
        if (*(UINT_PTR *)((int)this + 0x2c) != 0) {
          KillTimer(param_1,*(UINT_PTR *)((int)this + 0x2c));
        }
        FUN_5cd289a0(0,*(HWND *)((int)this + 0x14),0,0,(uchar *)0x0);
        *(undefined4 *)((int)this + 0x14) = 0;
        return 0;
      }
      if (param_2 == 0x14) {
        FUN_5cd45010(DAT_5cd67a00,(int *)&local_168,&local_15c.x,2);
        pHVar19 = local_168;
        DAT_5cd67a04 = 0;
        iVar3 = FUN_5cd45010(DAT_5cd67a00,(int *)&local_154,(int *)&local_164,2);
        if (-1 < iVar3) {
          DAT_5cd67a04 = local_164 & 0xff;
        }
        if ((pHVar19 == (HFONT)0x0) || (uVar4 = 1, (int)DAT_5cd67a04 < 1)) {
          uVar4 = FUN_5cd05aa0();
        }
        DAT_5cd679f8 = uVar4;
        FUN_5cd45010(DAT_5cd67a00,(int *)&local_168,&local_15c.x,2);
        DAT_5cd679fc = local_168;
        piVar14 = *(int **)((int)this + 0x30);
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 100))(piVar14,DAT_5cd679f8 == 0);
          (**(code **)(**(int **)((int)this + 0x30) + 0x6c))(*(int **)((int)this + 0x30),0);
        }
        return 0;
      }
      if (param_2 != 0x53) {
        return 0;
      }
      FUN_5cd28790(0,param_1,0,param_4[2].unused,(int *)&DAT_5cd53dc8,(uchar *)0x0);
      return 1;
    }
    if (param_2 == 0x110) {
      piVar14 = *(int **)((int)this + 0x30);
      *(HWND *)((int)this + 0x14) = param_1;
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0x18))(piVar14,param_1,0x7fbc);
      }
      local_168 = FUN_5cd2ba40(0x6e);
      piVar14 = &DAT_5cd626e0;
      do {
        lParam = 0;
        UVar18 = 0x30;
        pHVar19 = local_168;
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),*piVar14);
        SendMessageA(pHVar6,UVar18,(WPARAM)pHVar19,lParam);
        piVar14 = piVar14 + 1;
      } while ((int)piVar14 < 0x5cd62724);
      (**(code **)(*(int *)this + 0x50))();
      (**(code **)(*(int *)this + 0x54))(0);
      UVar7 = SetTimer(param_1,100,0x2ee,(TIMERPROC)0x0);
      *(UINT_PTR *)((int)this + 0x2c) = UVar7;
      FUN_5cd45010(DAT_5cd67a00,(int *)&local_168,(int *)&local_160,2);
      DAT_5cd67a04 = 0;
      iVar3 = FUN_5cd45010(DAT_5cd67a00,(int *)&local_160,(int *)&uStack_16c,2);
      if (-1 < iVar3) {
        DAT_5cd67a04 = uStack_16c & 0xff;
      }
      if ((local_168 == (HFONT)0x0) || ((int)DAT_5cd67a04 < 1)) {
        FUN_5cd05aa0();
      }
      FUN_5cd45010(DAT_5cd67a00,(int *)&uStack_16c,(int *)&local_160,2);
      DAT_5cd679fc = (HFONT)uStack_16c;
      if (DAT_5cd67a08 != 0) {
        return 1;
      }
      if (uStack_16c == 0xffffffff) {
        return 1;
      }
      if (*(int *)((int)DAT_5cd67a00 + 0x680) != 0) {
        return 1;
      }
      PostMessageA(*(HWND *)((int)this + 0x14),0x632,0,0);
      return 1;
    }
    if (param_2 != 0x111) {
      return 0;
    }
    if (*(int *)((int)this + 0x30) == 0) {
      return 1;
    }
    uVar13 = param_3 & 0xffff;
    uVar4 = param_3 >> 0x10;
    if ((uVar13 < 0x9e34) || (40999 < uVar13)) {
      if (0x7e4 < uVar13) {
        if (uVar13 == 0x7fbc) {
          if (uVar4 == 100) {
            uVar13 = 0;
          }
        }
        else {
          if (uVar13 == 41000) {
            FUN_5cd289a0(1,param_1,0,0,(uchar *)0x0);
            (**(code **)(*(int *)this + 0x54))(41000);
            return 1;
          }
          if (uVar13 == 0xa029) {
            local_168 = (HFONT)(uint)(DAT_5cd679f8 == 0);
            FUN_5ccd1d00(param_1);
            piVar14 = *(int **)((int)this + 0x30);
            bVar16 = DAT_5cd679f8 == 0;
            if (piVar14 != (int *)0x0) {
              (**(code **)(*piVar14 + 100))(piVar14,bVar16);
              (**(code **)(**(int **)((int)this + 0x30) + 0x6c))(*(int **)((int)this + 0x30),0);
            }
            if ((!bVar16) && (local_168 != (HFONT)0x0)) {
              FUN_5ccfb880(*(HWND *)((int)this + 0x14),2);
              (**(code **)(*(int *)this + 0x54))(0xa029);
              return 1;
            }
          }
        }
        goto switchD_5ccfc2d3_caseD_7d9;
      }
      if (uVar13 == 0x7e4) {
        if (uVar4 != 0x200) {
          return 1;
        }
        if (*(HWND *)((int)this + 0x14) != (HWND)0x0) {
          GetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7e4,(LPSTR)local_140,10);
          FUN_5cd29fb0((LPCSTR)local_140,(undefined4 *)0x0);
          iVar3 = **(int **)((int)this + 0x30);
          uVar5 = ftol();
          (**(code **)(iVar3 + 0x30))(*(undefined4 *)((int)this + 0x30),uVar5);
          (**(code **)(*(int *)this + 0x54))(0x7e4);
          return 1;
        }
        goto switchD_5ccfc2d3_caseD_7d9;
      }
    }
    else {
      FUN_5ccfbe20((int)this);
      uVar13 = 0;
    }
    switch(uVar13) {
    case 0x7d7:
      UVar18 = IsDlgButtonChecked(*(HWND *)((int)this + 0x14),uVar13);
      (**(code **)(**(int **)((int)this + 0x30) + 0x38))(*(int **)((int)this + 0x30),UVar18 != 0);
      (**(code **)(*(int *)this + 0x54))(uVar13);
      return 1;
    case 0x7d8:
      UVar18 = IsDlgButtonChecked(*(HWND *)((int)this + 0x14),uVar13);
      (**(code **)(**(int **)((int)this + 0x30) + 0x40))(*(int **)((int)this + 0x30),UVar18 != 0);
      (**(code **)(*(int *)this + 0x54))(uVar13);
      return 1;
    case 0x7df:
      local_108[3] = 0xffffff2e;
      local_108[2] = 0xffffff2e;
      local_108[1] = 0xfffffcb8;
      local_108[5] = 0;
      local_108[4] = 0;
      local_108[0] = -0x348;
      iVar3 = FUN_5ccfb190(local_108,3,&local_144);
      iVar15 = FUN_5ccfb240((int)local_108,3,local_144);
      (**(code **)(**(int **)((int)this + 0x30) + 0x5c))(*(int **)((int)this + 0x30),local_108,3);
      (**(code **)(**(int **)((int)this + 0x30) + 0x50))(*(int **)((int)this + 0x30),iVar3);
      (**(code **)(**(int **)((int)this + 0x30) + 0x58))(*(int **)((int)this + 0x30),iVar15);
      (**(code **)(*(int *)this + 0x54))(0);
      return 1;
    case 0x7e3:
      if (uVar4 != 0x200) {
        return 1;
      }
      if (*(HWND *)((int)this + 0x14) != (HWND)0x0) {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),uVar13,(LPSTR)local_140,10);
        FUN_5cd29fb0((LPCSTR)local_140,(undefined4 *)0x0);
        iVar3 = **(int **)((int)this + 0x30);
        uVar5 = ftol();
        (**(code **)(iVar3 + 0x28))(*(undefined4 *)((int)this + 0x30),uVar5);
        (**(code **)(*(int *)this + 0x54))(uVar13);
        return 1;
      }
    }
switchD_5ccfc2d3_caseD_7d9:
    (**(code **)(*(int *)this + 0x54))(uVar13);
    return 1;
  }
  if (0x614 < param_2) {
    if (param_2 != 0x618) {
      if (param_2 == 0x632) {
        bVar16 = DAT_5cd679f8 == 0;
        FUN_5cd057e0((undefined2 *)&local_160);
        FUN_5cd45010(DAT_5cd67a00,&local_15c.x,&local_148,1);
        LVar1 = local_15c.x;
        DAT_5cd67a04 = 0;
        iVar3 = FUN_5cd45010(DAT_5cd67a00,(int *)&local_168,(int *)&local_154,1);
        if (-1 < iVar3) {
          DAT_5cd67a04 = local_154 & 0xff;
        }
        if ((LVar1 == 0) || (uVar4 = 1, (int)DAT_5cd67a04 < 1)) {
          uVar4 = FUN_5cd05aa0();
        }
        DAT_5cd679f8 = uVar4;
        FUN_5cd45010(DAT_5cd67a00,&local_15c.x,(int *)&local_154,1);
        DAT_5cd679fc = (HFONT)local_15c.x;
        piVar14 = *(int **)((int)this + 0x30);
        bVar17 = DAT_5cd679f8 == 0;
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 100))(piVar14,bVar17);
          (**(code **)(**(int **)((int)this + 0x30) + 0x6c))(*(int **)((int)this + 0x30),0);
        }
        if ((!bVar17) && (bVar16)) {
          FUN_5ccfb880(*(HWND *)((int)this + 0x14),2);
        }
      }
      return 0;
    }
    iVar15 = (int)sVar12;
    iVar3 = iVar15 - sVar2;
    local_15c.x = (LONG)FUN_5cd2b690(iVar3,1,iVar3 + -1," dB");
    FUN_5cd2b690((int)sVar2,1,0,(uchar *)0x0);
    FUN_5cd2b690(iVar15,1,iVar15 + -1," dB");
    pBVar11 = FUN_5cd08210(DAT_5cd67a38,0x40a);
    FUN_5cd20ca0(local_140,pBVar11);
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7de,(LPCSTR)local_140);
    return 1;
  }
  if (param_2 == 0x614) {
    bVar16 = DAT_5cd679f8 != 0;
    FUN_5ccd1d00(param_1);
    piVar14 = *(int **)((int)this + 0x30);
    bVar17 = DAT_5cd679f8 == 0;
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 100))(piVar14,bVar17);
      (**(code **)(**(int **)((int)this + 0x30) + 0x6c))(*(int **)((int)this + 0x30),0);
    }
    if (bVar17) {
      return 0;
    }
    if (bVar16) {
      return 0;
    }
    FUN_5ccfb880(*(HWND *)((int)this + 0x14),2);
    return 0;
  }
  if (param_2 != 0x114) {
    if (param_2 != 0x115) {
      if (param_2 != 0x612) {
        return 0;
      }
      pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7e2);
      LVar9 = SendMessageA(pHVar6,0x603,0x10,(LPARAM)local_108);
      iVar3 = FUN_5ccfb190(local_108,LVar9,(int *)&local_168);
      local_164 = FUN_5ccfb240((int)local_108,LVar9,(int)local_168);
      (**(code **)(**(int **)((int)this + 0x30) + 0x50))(*(int **)((int)this + 0x30),iVar3);
      (**(code **)(**(int **)((int)this + 0x30) + 0x58))(*(int **)((int)this + 0x30),uStack_16c);
      (**(code **)(**(int **)((int)this + 0x30) + 0x5c))
                (*(int **)((int)this + 0x30),&local_118,LVar9);
      (**(code **)(*(int *)this + 0x54))(0x7e2);
      return 1;
    }
    if (*(int *)((int)this + 0x30) == 0) {
      return 1;
    }
    iVar3 = GetDlgCtrlID(param_4);
    if (iVar3 == 0x7d6) {
      uVar5 = FUN_5cd1f090(0x115,param_3,param_4,1,10);
      (**(code **)(**(int **)((int)this + 0x30) + 0x20))(*(int **)((int)this + 0x30),uVar5);
    }
    (**(code **)(*(int *)this + 0x54))(iVar3);
    return 1;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    return 1;
  }
  local_15c.x = GetDlgCtrlID(param_4);
  switch(local_15c.x) {
  case 0x7d2:
    uVar5 = FUN_5cd19300(0x114,param_3,param_4,1,100);
    (**(code **)(**(int **)((int)this + 0x30) + 0x28))(*(int **)((int)this + 0x30),uVar5);
    (**(code **)(*(int *)this + 0x54))(local_164);
    return 1;
  case 0x7d3:
    uVar5 = FUN_5cd19300(0x114,param_3,param_4,1,100);
    (**(code **)(**(int **)((int)this + 0x30) + 0x30))(*(int **)((int)this + 0x30),uVar5);
    (**(code **)(*(int *)this + 0x54))(local_164);
    return 1;
  case 0x7d4:
    iVar3 = FUN_5cd19300(0x114,param_3,param_4,1,10);
    pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7e2);
    local_160 = SendMessageA(pHVar6,0x603,0x10,(LPARAM)local_88);
    (**(code **)(**(int **)((int)this + 0x30) + 0x4c))(*(int **)((int)this + 0x30),&local_14c);
    iVar15 = iVar3 - local_14c;
    if (iVar15 == 0) goto switchD_5ccfc849_default;
    puVar20 = &local_160;
    piVar14 = (int *)local_88;
    pHVar10 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7e2);
    FUN_5ccfb3f0(pHVar10,piVar14,puVar20,iVar15);
    (**(code **)(**(int **)((int)this + 0x30) + 0x50))(*(int **)((int)this + 0x30),iVar3);
    if (pHVar6 == (HWND)0x0) goto switchD_5ccfc849_default;
    local_14c = FUN_5ccfb190((int *)local_88,local_160,(int *)&local_168);
    local_164 = auStack_84[(int)local_168 * 2];
    (**(code **)(**(int **)((int)this + 0x30) + 0x54))(*(int **)((int)this + 0x30),&iStack_150);
    uVar4 = local_160;
    if (iStack_150 < 10) {
      iStack_150 = 10;
    }
    else if (500 < iStack_150) {
      iStack_150 = 500;
    }
    iVar3 = (&iStack_8c)[local_160 * 2];
    uVar13 = local_164;
    if (iStack_150 != 500) {
      uVar13 = ftol();
    }
    if ((int)uVar13 < -0x348) {
      uVar13 = 0xfffffcb8;
    }
    else {
      uVar13 = uVar13 & (0 < (int)uVar13) - 1;
    }
    iVar3 = uVar13 - iVar3;
    piVar14 = (int *)local_88;
    pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7e2);
    local_160 = FUN_5ccfb2c0(pHVar6,piVar14,uVar4,(uint)local_168,iVar3);
    break;
  case 0x7d5:
    uVar4 = FUN_5cd19300(0x114,param_3,param_4,1,10);
    local_154 = uVar4;
    (**(code **)(**(int **)((int)this + 0x30) + 0x58))(*(int **)((int)this + 0x30),uVar4);
    pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7e2);
    if (pHVar6 == (HWND)0x0) goto switchD_5ccfc849_default;
    local_160 = SendMessageA(pHVar6,0x603,0x10,(LPARAM)local_88);
    local_148 = FUN_5ccfb190((int *)local_88,local_160,(int *)&local_168);
    uVar13 = auStack_84[(int)local_168 * 2];
    local_164 = uVar13;
    if (uVar4 != 500) {
      uVar13 = ftol();
    }
    if ((int)uVar13 < -0x348) {
      uVar13 = 0xfffffcb8;
    }
    else {
      uVar13 = uVar13 & (0 < (int)uVar13) - 1;
    }
    piVar14 = (int *)local_88;
    iVar3 = uVar13 - (&iStack_8c)[local_160 * 2];
    uVar4 = local_160;
    pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7e2);
    local_160 = FUN_5ccfb2c0(pHVar6,piVar14,uVar4,(uint)local_168,iVar3);
    break;
  default:
    goto switchD_5ccfc849_default;
  }
  if (local_160 == 0xffffffff) {
    local_160 = 3;
  }
  (**(code **)(**(int **)((int)this + 0x30) + 0x5c))(*(int **)((int)this + 0x30),local_88,local_160)
  ;
switchD_5ccfc849_default:
  (**(code **)(*(int *)this + 0x54))(local_15c.x);
  return 1;
}


