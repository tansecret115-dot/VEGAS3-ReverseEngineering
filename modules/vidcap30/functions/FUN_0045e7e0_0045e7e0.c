/* Module: vidcap30.exe
   Function: FUN_0045e7e0
   Address: 0045e7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0045e7e0(undefined4 *param_1)

{
  HDC hdc;
  int *lParam;
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  COLORREF color;
  undefined4 uVar4;
  uint *puVar5;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  RECT local_168;
  uint local_158;
  undefined4 uStack_154;
  RECT local_150;
  int local_140;
  undefined4 uStack_13c;
  COLORREF local_138;
  tagSIZE local_134;
  CHAR local_12c [8];
  undefined4 local_124;
  CHAR *local_118;
  undefined4 local_114;
  CHAR local_104 [260];
  
  lParam = (int *)0x0;
  if (param_1[1] != 0x4d1) {
    return lParam;
  }
  iVar2 = param_1[3];
  if (iVar2 == 1) {
    lParam = (int *)0x30;
  }
  else {
    if (iVar2 == 0x10001) {
      return (int *)0x20;
    }
    if ((iVar2 == 0x30001) && (param_1[0xe] == 2)) {
      if (&stack0x00000000 != (undefined1 *)0x178) {
        local_178 = 0;
        local_174 = 2;
        lParam = &local_178;
      }
      SendMessageA((HWND)*param_1,0x1038,param_1[9],(LPARAM)lParam);
      hdc = (HDC)param_1[4];
      DVar1 = GetSysColor(5);
      local_138 = SetBkColor(hdc,DVar1);
      local_150.top = local_174;
      local_150.left = local_178;
      local_150.right = local_170;
      local_150.bottom = local_16c;
      ExtTextOutA(hdc,0,0,2,&local_150,(LPCSTR)0x0,0,(INT *)0x0);
      local_170 = local_170 + -4;
      local_178 = local_178 + 4;
      local_118 = local_104;
      local_124 = 0;
      local_114 = 0x104;
      SendMessageA((HWND)*param_1,0x102d,param_1[9],(LPARAM)local_12c);
      iVar2 = lstrcmpA(local_104,"");
      if (iVar2 != 0) {
        iVar2 = FUN_0045b740(local_104);
        if (iVar2 != 0) {
          iVar2 = _SfGetDiskFreeSpace_8(local_104,0x100000);
          local_140 = iVar2;
          uVar3 = _SfGetDiskTotalSpace_8(local_104,0x100000);
          local_158 = 0;
          if (uVar3 != 0) {
            local_158 = (uint)(iVar2 * 100) / uVar3;
          }
          iVar2 = SfPrintF(local_12c,&DAT_0058c464,local_158);
          local_150.left = local_178;
          local_150.top = local_174;
          local_150.right = local_170;
          local_150.bottom = local_16c;
          GetTextExtentPoint32A(hdc,local_12c,iVar2,&local_134);
          local_150.left = local_150.right - local_134.cx;
          DrawTextA(hdc,local_12c,-1,&local_150,0x26);
          local_170 = local_150.left + -5;
          local_174 = local_174 +
                      ((int)((local_16c - local_174) + (local_16c - local_174 >> 0x1f & 3U)) >> 2);
          local_16c = local_16c -
                      ((int)((local_16c - local_174) + (local_16c - local_174 >> 0x1f & 3U)) >> 2);
          if (local_178 < local_170) {
            DVar1 = GetSysColor(8);
            color = SetBkColor(hdc,DVar1);
            local_168.left = local_178 + 1;
            local_168.top = local_174;
            local_168.bottom = local_174 + 1;
            local_168.right = (local_168.left - local_178) + -2 + local_170;
            ExtTextOutA(hdc,0,0,2,&local_168,(LPCSTR)0x0,0,(INT *)0x0);
            local_168.top = local_16c + -1;
            local_168.left = local_178 + 1;
            local_168.bottom = local_16c;
            local_168.right = (local_168.left - local_178) + -2 + local_170;
            ExtTextOutA(hdc,0,0,2,&local_168,(LPCSTR)0x0,0,(INT *)0x0);
            local_168.left = local_178;
            local_168.right = local_178 + 1;
            local_168.top = local_174 + 1;
            local_168.bottom = (local_168.top - local_174) + -2 + local_16c;
            ExtTextOutA(hdc,0,0,2,&local_168,(LPCSTR)0x0,0,(INT *)0x0);
            local_168.left = local_170 + -1;
            local_168.top = local_174 + 1;
            local_168.right = local_170;
            local_168.bottom = (local_168.top - local_174) + -2 + local_16c;
            ExtTextOutA(hdc,0,0,2,&local_168,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(hdc,color);
            local_178 = local_178 + 1;
            local_170 = local_170 + -1;
            local_174 = local_174 + 1;
            local_16c = local_16c + -1;
            if (local_178 < local_170) {
              local_170 = (int)((local_170 - local_178) * local_158) / 100 + local_178;
              SetBkColor(hdc,0xff00);
              puVar5 = &local_158;
              uVar4 = FUN_0043df30(puVar5);
              iVar2 = FUN_0043f790(uVar4,puVar5);
              if ((-1 < iVar2) && (_DAT_00589f10 != (double)CONCAT44(uStack_154,local_158))) {
                uStack_13c = 0;
                uVar3 = ftol();
                if (uVar3 < 600) {
                  SetBkColor(hdc,0xffff);
                }
                if (uVar3 < 300) {
                  SetBkColor(hdc,0xff);
                }
              }
              local_168.top = local_174;
              local_168.left = local_178;
              local_168.right = local_170;
              local_168.bottom = local_16c;
              ExtTextOutA(hdc,0,0,2,&local_168,(LPCSTR)0x0,0,(INT *)0x0);
            }
          }
        }
      }
      SetBkColor(hdc,local_138);
      return (int *)0x4;
    }
  }
  return lParam;
}


