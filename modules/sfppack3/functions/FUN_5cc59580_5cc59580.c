/* Module: sfppack3.dll
   Function: FUN_5cc59580
   Address: 5cc59580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cc59580(int param_1,HDC param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int h;
  int w;
  HBRUSH pHVar4;
  int w_00;
  uint uVar5;
  HGDIOBJ h_00;
  int *piVar6;
  uint local_98;
  HGDIOBJ local_94;
  HBRUSH local_8c;
  HGDIOBJ local_88;
  uint local_7c;
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0xc) & 0x81) != 0) {
    return 0;
  }
  local_7c = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar6 = (int *)(param_1 + 0xbc);
    do {
      piVar1 = piVar6 + -1;
      h = piVar6[2] - *piVar6;
      w = piVar6[1] - *piVar1;
      local_10.left = *piVar1;
      local_10.top = *piVar6;
      local_10.right = piVar6[1];
      local_10.bottom = piVar6[2];
      InflateRect(&local_10,-*(int *)(param_1 + 0x84),-*(int *)(param_1 + 0x88));
      pHVar4 = FUN_5cc69630(0xf);
      FillRect(param_2,&local_10,pHVar4);
      pHVar4 = FUN_5cc69630(6);
      local_88 = SelectObject(param_2,pHVar4);
      PatBlt(param_2,*piVar1,*piVar6,w,1,0xf00021);
      PatBlt(param_2,*piVar1,piVar6[2] + -1,w,1,0xf00021);
      PatBlt(param_2,*piVar1,*piVar6,1,h,0xf00021);
      PatBlt(param_2,piVar6[1] + -1,*piVar6,1,h,0xf00021);
      if ((*(uint *)(param_1 + 0xc) & 0x400) == 0) {
        pHVar4 = FUN_5cc69630(0x10);
        SelectObject(param_2,pHVar4);
        PatBlt(param_2,piVar6[1] + -2,*piVar6 + 1,1,h + -2,0xf00021);
        PatBlt(param_2,*piVar1 + 1,piVar6[2] + -2,w + -2,1,0xf00021);
        pHVar4 = FUN_5cc69630(0x14);
        SelectObject(param_2,pHVar4);
        PatBlt(param_2,*piVar1 + 1,*piVar6 + 1,1,h + -2,0xf00021);
        PatBlt(param_2,*piVar1 + 1,*piVar6 + 1,w + -2,1,0xf00021);
      }
      else {
        GetSysColor(0x10);
        GetSysColor(0xf);
        GetSysColor(0x14);
        pHVar4 = FUN_5cc69630(6);
        local_88 = SelectObject(param_2,pHVar4);
        w_00 = w + -2;
        PatBlt(param_2,*piVar1 + 1,*piVar6,w_00,1,0xf00021);
        PatBlt(param_2,*piVar1 + 1,piVar6[2] + -1,w_00,1,0xf00021);
        PatBlt(param_2,*piVar1,*piVar6 + 1,1,h + -2,0xf00021);
        PatBlt(param_2,piVar6[1] + -1,*piVar6 + 1,1,h + -2,0xf00021);
        local_8c = CreateSolidBrush(0);
        local_94 = SelectObject(param_2,local_8c);
        local_98 = 0;
        if (h != 2) {
          do {
            uVar5 = ftol();
            uVar2 = ftol();
            uVar3 = ftol();
            SelectObject(param_2,local_94);
            DeleteObject(local_8c);
            pHVar4 = CreateSolidBrush((uint)CONCAT11(uVar3,uVar2) << 8 | uVar5 & 0xff);
            h_00 = SelectObject(param_2,pHVar4);
            PatBlt(param_2,*piVar1 + 1,*piVar6 + 1 + local_98,w_00,1,0xf00021);
            uVar5 = ftol();
            uVar2 = ftol();
            uVar3 = ftol();
            SelectObject(param_2,h_00);
            DeleteObject(pHVar4);
            local_8c = CreateSolidBrush((uint)CONCAT11(uVar3,uVar2) << 8 | uVar5 & 0xff);
            local_94 = SelectObject(param_2,local_8c);
            if ((local_98 != 0) && (local_98 < h - 3U)) {
              PatBlt(param_2,*piVar1 + 2,*piVar6 + 1 + local_98,w + -4,1,0xf00021);
            }
            local_98 = local_98 + 1;
          } while (local_98 < h - 2U);
        }
        pHVar4 = FUN_5cc69630(0x14);
        SelectObject(param_2,pHVar4);
        PatBlt(param_2,*piVar1 + 1,*piVar6 + 1,1,h + -3,0xf00021);
        PatBlt(param_2,*piVar1 + 1,*piVar6 + 1,w_00,1,0xf00021);
        SelectObject(param_2,local_94);
        DeleteObject(local_8c);
        SelectObject(param_2,local_88);
      }
      SelectObject(param_2,local_88);
      piVar6 = piVar6 + 9;
      local_7c = local_7c + 1;
    } while (local_7c < *(uint *)(param_1 + 0x24));
  }
  return 1;
}


