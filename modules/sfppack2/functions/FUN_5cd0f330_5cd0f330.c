/* Module: sfppack2.dll
   Function: FUN_5cd0f330
   Address: 5cd0f330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0f330(HDC param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  RECT *lprect;
  undefined4 local_44;
  int local_40;
  undefined1 local_38;
  undefined1 local_34;
  RECT local_30;
  RECT local_20;
  RECT local_10;
  
  iVar8 = param_2[2] - *param_2;
  iVar3 = param_2[3] - param_2[1];
  if ((iVar8 != 0) && (iVar3 != 0)) {
    uVar9 = param_3 >> 8 & 0xff;
    uVar4 = param_3 >> 0x10 & 0xff;
    iVar5 = uVar4 * 0x10000;
    iVar13 = (param_3 & 0xff) * 0x10000;
    iVar12 = uVar9 * 0x10000;
    iVar6 = (int)((param_4 & 0xff) * 0x10000 + (param_3 & 0xff) * -0x10000) / iVar8;
    iVar7 = (int)((param_4 >> 8 & 0xff) * 0x10000 + uVar9 * -0x10000) / iVar8;
    iVar8 = (int)((param_4 >> 0x10 & 0xff) * 0x10000 + uVar4 * -0x10000) / iVar8;
    if (param_5 == 0) {
      param_4 = param_2[2] - 1;
      if (*param_2 <= (int)param_4) {
        do {
          local_44._2_1_ = (undefined1)((uint)iVar12 >> 0x10);
          SetBkColor(param_1,(uint)CONCAT11((char)((uint)iVar5 >> 0x10),local_44._2_1_) << 8 |
                             iVar13 >> 0x10 & 0xffU);
          local_30.top = param_2[1];
          local_30.left = param_4;
          local_30.right = param_4 + 1;
          local_30.bottom = local_30.top + iVar3;
          ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
          iVar5 = iVar5 + iVar8;
          iVar13 = iVar13 + iVar6;
          iVar12 = iVar12 + iVar7;
          param_4 = param_4 - 1;
        } while (*param_2 <= (int)param_4);
        return;
      }
    }
    else if ((param_5 & 10) < 0xb) {
      uVar4 = iVar13 >> 0x11;
      uVar2 = (undefined1)(iVar5 >> 0x11);
      uVar11 = (undefined1)(iVar12 >> 0x11);
      switch(param_5 & 10) {
      case 0:
        iVar1 = param_2[2];
        uVar9 = iVar1 - 1;
        iVar10 = *param_2;
        if ((param_5 & 1) != 0) {
          iVar10 = iVar10 + 1;
        }
        if ((param_5 & 4) != 0) {
          SetBkColor(param_1,(uint)CONCAT11(uVar2,uVar11) << 8 | uVar4);
          local_30.top = param_2[1];
          local_30.bottom = local_30.top + iVar3;
          local_30.left = uVar9;
          local_30.right = iVar1;
          ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
          iVar13 = iVar13 + iVar6;
          iVar12 = iVar12 + iVar7;
          iVar5 = iVar5 + iVar8;
          uVar9 = iVar1 - 2;
        }
        for (; iVar10 <= (int)uVar9; uVar9 = uVar9 - 1) {
          local_44._2_1_ = (undefined1)((uint)iVar12 >> 0x10);
          SetBkColor(param_1,(uint)CONCAT11((char)((uint)iVar5 >> 0x10),local_44._2_1_) << 8 |
                             iVar13 >> 0x10 & 0xffU);
          local_30.top = param_2[1];
          local_30.right = uVar9 + 1;
          local_30.bottom = local_30.top + iVar3;
          local_30.left = uVar9;
          ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
          iVar5 = iVar5 + iVar8;
          iVar13 = iVar13 + iVar6;
          iVar12 = iVar12 + iVar7;
        }
        if ((param_5 & 1) == 0) {
          return;
        }
        SetBkColor(param_1,(uint)CONCAT11((char)((iVar5 >> 0x10) + 0xff >> 1),
                                          (char)((iVar12 >> 0x10) + 0xff >> 1)) << 8 |
                           (int)((iVar13 >> 0x10) + 0xffU) >> 1 & 0xffU);
        local_30.top = param_2[1];
        local_30.right = uVar9 + 1;
        local_30.bottom = local_30.top + iVar3;
        lprect = &local_30;
        local_30.left = uVar9;
        break;
      case 2:
        iVar1 = param_2[2];
        param_4 = iVar1 - 1;
        iVar10 = *param_2;
        if ((param_5 & 1) != 0) {
          iVar10 = iVar10 + 1;
        }
        if ((param_5 & 4) != 0) {
          SetBkColor(param_1,(uint)CONCAT11(uVar2,uVar11) << 8 | uVar4);
          local_30.top = param_2[1];
          local_30.bottom = local_30.top + iVar3;
          local_30.left = param_4;
          local_30.right = iVar1;
          ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
          iVar13 = iVar13 + iVar6;
          iVar12 = iVar12 + iVar7;
          iVar5 = iVar5 + iVar8;
          param_4 = iVar1 - 2;
        }
        if (iVar10 <= (int)param_4) {
          local_40 = param_4 + 1;
          do {
            SetBkColor(param_1,(uint)CONCAT11((char)((iVar5 >> 0x10) + 0xff >> 1),
                                              (char)((iVar12 >> 0x10) + 0xff >> 1)) << 8 |
                               (int)((iVar13 >> 0x10) + 0xffU) >> 1 & 0xffU);
            local_30.top = param_2[1];
            local_30.left = param_4;
            local_30.bottom = local_30.top + 1;
            local_30.right = local_40;
            ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
            local_38 = (undefined1)((uint)iVar5 >> 0x10);
            local_34 = (undefined1)((uint)iVar12 >> 0x10);
            SetBkColor(param_1,(uint)CONCAT11(local_38,local_34) << 8 | iVar13 >> 0x10 & 0xffU);
            local_20.left = param_4;
            local_20.top = param_2[1] + 1;
            local_20.right = local_40;
            local_20.bottom = iVar3 + -1 + local_20.top;
            ExtTextOutA(param_1,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
            iVar13 = iVar13 + iVar6;
            iVar12 = iVar12 + iVar7;
            iVar5 = iVar5 + iVar8;
            param_4 = param_4 - 1;
            local_40 = local_40 + -1;
          } while (iVar10 <= (int)param_4);
        }
        if ((param_5 & 1) == 0) {
          return;
        }
        SetBkColor(param_1,(uint)CONCAT11((char)((iVar5 >> 0x10) + 0xff >> 1),
                                          (char)((iVar12 >> 0x10) + 0xff >> 1)) << 8 |
                           (iVar13 >> 0x10) + 0xff >> 1 & 0xffU);
        local_20.top = param_2[1];
        local_20.left = param_4;
        local_20.right = param_4 + 1;
        local_20.bottom = local_20.top + iVar3;
        lprect = &local_20;
        break;
      default:
        goto switchD_5cd0f49b_caseD_4;
      case 8:
        iVar1 = param_2[2];
        param_4 = iVar1 - 1;
        iVar10 = *param_2;
        if ((param_5 & 1) != 0) {
          iVar10 = iVar10 + 1;
        }
        if ((param_5 & 4) != 0) {
          SetBkColor(param_1,(uint)CONCAT11(uVar2,uVar11) << 8 | uVar4);
          local_20.top = param_2[1];
          local_20.bottom = local_20.top + iVar3;
          local_20.left = param_4;
          local_20.right = iVar1;
          ExtTextOutA(param_1,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
          iVar13 = iVar13 + iVar6;
          iVar12 = iVar12 + iVar7;
          iVar5 = iVar5 + iVar8;
          param_4 = iVar1 - 2;
        }
        if (iVar10 <= (int)param_4) {
          local_40 = param_4 + 1;
          local_44 = iVar12;
          do {
            SetBkColor(param_1,(uint)CONCAT11((char)((uint)iVar5 >> 0x10),local_44._2_1_) << 8 |
                               iVar13 >> 0x10 & 0xffU);
            local_20.top = param_2[1];
            local_20.left = param_4;
            local_20.right = local_40;
            local_20.bottom = iVar3 + -1 + local_20.top;
            ExtTextOutA(param_1,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(param_1,(uint)CONCAT11((char)(iVar5 >> 0x11),(char)(local_44 >> 0x11)) << 8 |
                               iVar13 >> 0x11 & 0xffU);
            local_30.top = param_2[1] + -1 + iVar3;
            local_30.bottom = local_30.top + 1;
            local_30.left = param_4;
            local_30.right = local_40;
            ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
            iVar12 = local_44 + iVar7;
            iVar13 = iVar13 + iVar6;
            iVar5 = iVar5 + iVar8;
            param_4 = param_4 - 1;
            local_40 = local_40 + -1;
            local_44 = iVar12;
          } while (iVar10 <= (int)param_4);
        }
        if ((param_5 & 1) == 0) {
          return;
        }
        SetBkColor(param_1,(uint)CONCAT11((char)((iVar5 >> 0x10) + 0xff >> 1),
                                          (char)((iVar12 >> 0x10) + 0xff >> 1)) << 8 |
                           (iVar13 >> 0x10) + 0xff >> 1 & 0xffU);
        local_20.top = param_2[1];
        local_20.left = param_4;
        local_20.bottom = local_20.top + -1 + iVar3;
        local_20.right = param_4 + 1;
        ExtTextOutA(param_1,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(param_1,(uint)CONCAT11((char)(iVar5 >> 0x11),(char)(iVar12 >> 0x11)) << 8 |
                           iVar13 >> 0x11 & 0xffU);
        local_20.left = param_4;
        local_20.top = param_2[1] + -1 + iVar3;
        local_20.bottom = local_20.top + 1;
        lprect = &local_20;
        local_20.right = param_4 + 1;
        break;
      case 10:
        iVar1 = param_2[2];
        param_4 = iVar1 - 1;
        iVar10 = *param_2;
        if ((param_5 & 1) != 0) {
          iVar10 = iVar10 + 1;
        }
        if ((param_5 & 4) != 0) {
          SetBkColor(param_1,(uint)CONCAT11(uVar2,uVar11) << 8 | uVar4);
          local_20.top = param_2[1];
          local_20.bottom = local_20.top + iVar3;
          local_20.left = param_4;
          local_20.right = iVar1;
          ExtTextOutA(param_1,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
          iVar13 = iVar13 + iVar6;
          iVar12 = iVar12 + iVar7;
          iVar5 = iVar5 + iVar8;
          param_4 = iVar1 - 2;
        }
        if (iVar10 <= (int)param_4) {
          local_40 = param_4 + 1;
          do {
            SetBkColor(param_1,(uint)CONCAT11((char)((iVar5 >> 0x10) + 0xff >> 1),
                                              (char)((iVar12 >> 0x10) + 0xff >> 1)) << 8 |
                               (int)((iVar13 >> 0x10) + 0xffU) >> 1 & 0xffU);
            local_20.top = param_2[1];
            local_20.left = param_4;
            local_20.bottom = local_20.top + 1;
            local_20.right = local_40;
            ExtTextOutA(param_1,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
            local_38 = (undefined1)((uint)iVar5 >> 0x10);
            local_34 = (undefined1)((uint)iVar12 >> 0x10);
            SetBkColor(param_1,(uint)CONCAT11(local_38,local_34) << 8 | iVar13 >> 0x10 & 0xffU);
            local_30.left = param_4;
            local_30.top = param_2[1] + 1;
            local_30.right = local_40;
            local_30.bottom = iVar3 + -2 + local_30.top;
            ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(param_1,(uint)CONCAT11((char)(iVar5 >> 0x11),(char)(iVar12 >> 0x11)) << 8 |
                               iVar13 >> 0x11 & 0xffU);
            local_10.top = param_2[1] + -1 + iVar3;
            local_10.bottom = local_10.top + 1;
            local_10.left = param_4;
            local_10.right = local_40;
            ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
            iVar12 = iVar12 + iVar7;
            iVar5 = iVar5 + iVar8;
            iVar13 = iVar13 + iVar6;
            param_4 = param_4 - 1;
            local_40 = local_40 + -1;
          } while (iVar10 <= (int)param_4);
        }
        if ((param_5 & 1) == 0) {
          return;
        }
        SetBkColor(param_1,(uint)CONCAT11((char)((iVar5 >> 0x10) + 0xff >> 1),
                                          (char)((iVar12 >> 0x10) + 0xff >> 1)) << 8 |
                           (iVar13 >> 0x10) + 0xff >> 1 & 0xffU);
        local_10.top = param_2[1];
        local_10.left = param_4;
        local_10.bottom = local_10.top + -1 + iVar3;
        local_10.right = param_4 + 1;
        ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(param_1,(uint)CONCAT11((char)(iVar5 >> 0x11),(char)(iVar12 >> 0x11)) << 8 |
                           iVar13 >> 0x11 & 0xffU);
        local_10.left = param_4;
        local_10.top = param_2[1] + -1 + iVar3;
        local_10.bottom = local_10.top + 1;
        lprect = &local_10;
        local_10.right = param_4 + 1;
      }
      ExtTextOutA(param_1,0,0,2,lprect,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
switchD_5cd0f49b_caseD_4:
  return;
}


