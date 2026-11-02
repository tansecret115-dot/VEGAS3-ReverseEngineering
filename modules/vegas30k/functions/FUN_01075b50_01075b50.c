/* Module: vegas30k.dll
   Function: FUN_01075b50
   Address: 01075b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01075b50(HDC param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 local_3c;
  undefined1 local_38;
  RECT local_30;
  RECT local_20;
  RECT local_10;
  
  hdc = param_1;
  iVar4 = param_2[2] - *param_2;
  iVar10 = param_2[1];
  iVar11 = param_2[3] - iVar10;
  if ((iVar4 != 0) && (iVar11 != 0)) {
    uVar6 = param_3 >> 8 & 0xff;
    iVar1 = uVar6 * 0x10000;
    iVar9 = (param_3 & 0xff) * 0x10000;
    iVar2 = (int)((param_4 & 0xff) * 0x10000 + (param_3 & 0xff) * -0x10000) / iVar11;
    uVar7 = param_3 >> 0x10 & 0xff;
    iVar8 = uVar7 * 0x10000;
    iVar3 = (int)((param_4 >> 8 & 0xff) * 0x10000 + uVar6 * -0x10000) / iVar11;
    iVar11 = (int)((param_4 >> 0x10 & 0xff) * 0x10000 + uVar7 * -0x10000) / iVar11;
    param_3 = iVar1;
    if ((param_5 & 2) != 0) {
      SetBkColor(param_1,(uint)CONCAT11((char)((iVar8 >> 0x10) + 0xff >> 1),
                                        (char)((iVar1 >> 0x10) + 0xff >> 1)) << 8 |
                         (iVar9 >> 0x10) + 0xff >> 1);
      if ((param_5 & 4) == 0) {
        local_30.left = *param_2;
        local_30.right = local_30.left + iVar4;
      }
      else {
        local_30.left = *param_2;
        local_30.right = local_30.left + -1 + iVar4;
        local_30.bottom = iVar10 + 1;
        local_30.top = iVar10;
        ExtTextOutA(param_1,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(param_1,(uint)CONCAT11((char)(iVar8 >> 0x11),(char)(iVar1 >> 0x11)) << 8 |
                           iVar9 >> 0x11);
        local_30.left = *param_2 + -1 + iVar4;
        local_30.right = local_30.left + 1;
      }
      param_1 = (HDC)(iVar10 + 1);
      local_30.top = iVar10;
      local_30.bottom = (LONG)param_1;
      ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
      iVar9 = iVar9 + iVar2;
      param_3 = iVar1 + iVar3;
      iVar8 = iVar8 + iVar11;
      iVar10 = (int)param_1;
    }
    iVar1 = param_2[3];
    uVar6 = param_5 & 8;
    if (uVar6 != 0) {
      iVar1 = iVar1 + -1;
    }
    param_1 = (HDC)iVar10;
    switch(param_5 & 5) {
    case 0:
      iVar5 = param_3;
      while (param_3 = iVar5, iVar10 < iVar1) {
        param_3._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
        SetBkColor(hdc,(uint)CONCAT11((char)((uint)iVar8 >> 0x10),param_3._2_1_) << 8 |
                       iVar9 >> 0x10 & 0xffU);
        local_30.left = *param_2;
        local_30.right = local_30.left + iVar4;
        local_30.top = iVar10;
        local_30.bottom = iVar10 + 1;
        ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
        iVar9 = iVar9 + iVar2;
        iVar8 = iVar8 + iVar11;
        iVar5 = iVar5 + iVar3;
        iVar10 = iVar10 + 1;
      }
      break;
    case 1:
      for (; iVar10 < iVar1; iVar10 = iVar10 + 1) {
        param_1 = (HDC)((int)param_1 + 1);
        SetBkColor(hdc,(uint)CONCAT11((char)((iVar8 >> 0x10) + 0xff >> 1),
                                      (char)(((int)param_3 >> 0x10) + 0xff >> 1)) << 8 |
                       (int)((iVar9 >> 0x10) + 0xffU) >> 1 & 0xffU);
        local_30.left = *param_2;
        local_30.bottom = (LONG)param_1;
        local_30.right = local_30.left + 1;
        local_30.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
        local_3c = (undefined1)((uint)iVar8 >> 0x10);
        local_38 = (undefined1)(param_3 >> 0x10);
        SetBkColor(hdc,(uint)CONCAT11(local_3c,local_38) << 8 | iVar9 >> 0x10 & 0xffU);
        local_20.left = *param_2 + 1;
        local_20.right = iVar4 + -1 + local_20.left;
        local_20.bottom = (LONG)param_1;
        local_20.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
        iVar9 = iVar9 + iVar2;
        param_3 = param_3 + iVar3;
        iVar8 = iVar8 + iVar11;
      }
      break;
    case 4:
      param_5 = iVar10;
      iVar5 = param_3;
      for (; param_3 = iVar5, iVar10 < iVar1; iVar10 = iVar10 + 1) {
        param_5 = param_5 + 1;
        param_3._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
        SetBkColor(hdc,(uint)CONCAT11((char)((uint)iVar8 >> 0x10),param_3._2_1_) << 8 |
                       iVar9 >> 0x10 & 0xffU);
        local_20.left = *param_2;
        local_20.bottom = param_5;
        local_20.right = iVar4 + -1 + local_20.left;
        local_20.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(hdc,(uint)CONCAT11((char)(iVar8 >> 0x11),(char)(iVar5 >> 0x11)) << 8 |
                       iVar9 >> 0x11 & 0xffU);
        local_30.bottom = param_5;
        local_30.left = *param_2 + -1 + iVar4;
        local_30.right = local_30.left + 1;
        local_30.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
        iVar5 = iVar5 + iVar3;
        iVar9 = iVar9 + iVar2;
        iVar8 = iVar8 + iVar11;
      }
      break;
    case 5:
      for (; iVar10 < iVar1; iVar10 = iVar10 + 1) {
        param_1 = (HDC)((int)param_1 + 1);
        SetBkColor(hdc,(uint)CONCAT11((char)((iVar8 >> 0x10) + 0xff >> 1),
                                      (char)(((int)param_3 >> 0x10) + 0xff >> 1)) << 8 |
                       (int)((iVar9 >> 0x10) + 0xffU) >> 1 & 0xffU);
        local_20.left = *param_2;
        local_20.bottom = (LONG)param_1;
        local_20.right = local_20.left + 1;
        local_20.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
        local_3c = (undefined1)((uint)iVar8 >> 0x10);
        local_38 = (undefined1)(param_3 >> 0x10);
        SetBkColor(hdc,(uint)CONCAT11(local_3c,local_38) << 8 | iVar9 >> 0x10 & 0xffU);
        local_30.left = *param_2 + 1;
        local_30.right = iVar4 + -2 + local_30.left;
        local_30.bottom = (LONG)param_1;
        local_30.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(hdc,(uint)CONCAT11((char)(iVar8 >> 0x11),(char)((int)param_3 >> 0x11)) << 8 |
                       iVar9 >> 0x11 & 0xffU);
        local_10.left = *param_2 + -1 + iVar4;
        local_10.right = local_10.left + 1;
        local_10.bottom = (LONG)param_1;
        local_10.top = iVar10;
        ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        iVar9 = iVar9 + iVar2;
        iVar8 = iVar8 + iVar11;
        param_3 = param_3 + iVar3;
      }
    }
    if (uVar6 != 0) {
      SetBkColor(hdc,(uint)CONCAT11((char)(iVar8 >> 0x11),(char)((int)param_3 >> 0x11)) << 8 |
                     iVar9 >> 0x11 & 0xffU);
      local_10.left = *param_2;
      local_10.right = local_10.left + iVar4;
      local_10.bottom = iVar10 + 1;
      local_10.top = iVar10;
      ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  return;
}


