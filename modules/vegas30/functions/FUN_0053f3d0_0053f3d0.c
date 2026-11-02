/* Module: vegas30.exe
   Function: FUN_0053f3d0
   Address: 0053f3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053f3d0(int param_1,HDC param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  HGDIOBJ h;
  uint uVar3;
  UINT UVar4;
  undefined4 uVar5;
  int x;
  int iVar6;
  DWORD color;
  int iVar7;
  int iVar8;
  CHAR *pCVar9;
  undefined1 *puVar10;
  int nIndex;
  tagRECT local_174;
  DWORD local_164;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  UINT local_150;
  int local_14c;
  int local_148;
  COLORREF local_144;
  HGDIOBJ local_140;
  tagRECT local_13c;
  RECT local_12c;
  tagRECT local_11c;
  undefined1 local_10c [4];
  int local_108;
  CHAR local_104 [260];
  
  local_144 = SetTextColor(param_2,0);
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  local_140 = SelectObject(param_2,h);
  local_150 = SetTextAlign(param_2,8);
  local_14c = SetBkMode(param_2,1);
  local_158 = FUN_0053add0(param_1 + 0xe80);
  FUN_0044e9f0(param_2,param_1 + 0x38c,0,&DAT_0064b188);
  iVar8 = *(int *)(param_1 + 0xba8);
  local_15c = *(int *)(param_1 + 0xbac) + 1 + iVar8;
  if (*(int *)(param_1 + 0x674) <= local_15c) {
    local_15c = *(int *)(param_1 + 0x674);
  }
  if (iVar8 < local_15c) {
    do {
      if ((-1 < iVar8) && (iVar8 < local_158)) {
        local_160 = (uint)(iVar8 == *(int *)(param_1 + 0xe88));
        local_174.left = *(int *)(param_1 + 0x38c);
        local_174.top = *(LONG *)(param_1 + 0x390);
        local_174.right = *(LONG *)(param_1 + 0x394);
        local_174.bottom = *(LONG *)(param_1 + 0x398);
        local_174.bottom = FUN_005382e0(1);
        local_174.top =
             (iVar8 - *(int *)(param_1 + 0xba8)) * local_174.bottom + *(int *)(param_1 + 0xac4);
        local_174.bottom = local_174.top + local_174.bottom;
        local_154 = local_174.bottom;
        local_164 = GetSysColor(0xf);
        uVar1 = ftol();
        uVar2 = ftol();
        uVar3 = ftol();
        SetBkColor(param_2,(uint)CONCAT11(uVar1,uVar2) << 8 | uVar3 & 0xff);
        local_12c.top = local_174.top;
        local_12c.left = local_174.left;
        local_12c.right = local_174.right;
        local_12c.bottom = local_174.bottom;
        ExtTextOutA(param_2,0,0,2,&local_12c,(LPCSTR)0x0,0,(INT *)0x0);
        local_174.left = local_174.left + 3;
        if (iVar8 == local_158 + -1) {
          local_174.bottom = local_174.bottom + 2;
          local_154 = local_174.bottom;
          DrawEdge(param_2,&local_174,6,0xd);
          local_174.bottom = local_174.bottom + -2;
        }
        DrawEdge(param_2,&local_174,6,0x2007);
        if (local_160 != 0) {
          FUN_0044e9f0(param_2,&local_174,&DAT_0061aa30,&DAT_0064b1a8);
        }
        iVar7 = *(int *)(param_1 + 0xe8c);
        if ((iVar7 != 0) && ((iVar7 == 400 || (iVar7 == 0x191)))) {
          if (iVar7 == 0x191) {
            local_164 = FUN_0050c130(param_1 + 0xe80);
            iVar7 = (local_174.bottom - local_174.top) + -2;
            if (iVar8 != 0) {
              local_11c.left = local_174.left + 2;
              local_11c.right = local_11c.left + iVar7;
              local_11c.top = (local_174.bottom + local_174.top) / 2 + iVar7 / 2;
              uVar3 = 0;
              local_11c.bottom = local_11c.top + iVar7;
              if (iVar8 == 1) {
                uVar3 = ~*(uint *)(local_164 + 4) >> 2;
LAB_0053f724:
                uVar3 = uVar3 & 1;
              }
              else if (iVar8 == 2) {
                uVar3 = ~*(uint *)(local_164 + 4) >> 3;
                goto LAB_0053f724;
              }
              DrawFrameControl(param_2,&local_11c,4,-(uint)(uVar3 != 0) & 0x400);
            }
            local_174.left = local_174.left + 4 + iVar7;
          }
          iVar7 = FUN_0053aea0(param_1 + 0xe80,iVar8,local_104,0x104,&local_148);
          if (iVar7 != 0) {
            UVar4 = lstrlenA(local_104);
            puVar10 = local_10c;
            pCVar9 = local_104;
            local_160 = UVar4;
            uVar5 = _SfGetUIFont_4(100);
            _SfGetTextExtent_16(uVar5,pCVar9,UVar4,puVar10);
            x = local_174.left + 1;
            iVar7 = local_174.bottom + local_174.top;
            iVar6 = local_108 / 2;
            if (local_148 == 0) {
              nIndex = 0x11;
            }
            else {
              nIndex = 8;
            }
            color = GetSysColor(nIndex);
            SetTextColor(param_2,color);
            ExtTextOutA(param_2,x,iVar7 / 2 + iVar6,4,&local_174,local_104,local_160,(INT *)0x0);
          }
        }
        if (*(int *)(param_1 + 0xacc) < local_154) {
          local_13c.left = *(LONG *)(param_1 + 0x38c);
          local_13c.top = *(LONG *)(param_1 + 0x390);
          local_13c.right = *(LONG *)(param_1 + 0x394);
          local_13c.bottom = *(int *)(param_1 + 0xacc);
          DrawEdge(param_2,&local_13c,2,8);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_15c);
  }
  SetBkMode(param_2,local_14c);
  SetTextAlign(param_2,local_150);
  SelectObject(param_2,local_140);
  SetTextColor(param_2,local_144);
  return;
}


