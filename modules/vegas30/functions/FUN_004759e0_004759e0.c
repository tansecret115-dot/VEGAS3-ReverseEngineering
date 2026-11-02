/* Module: vegas30.exe
   Function: FUN_004759e0
   Address: 004759e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004759e0(int param_1,HDC param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UINT c;
  COLORREF color;
  DWORD DVar4;
  COLORREF color_00;
  HGDIOBJ pvVar5;
  int iVar6;
  uint uVar7;
  int x;
  int iVar8;
  RECT local_68;
  tagSIZE local_58;
  CHAR local_50 [80];
  
  if ((DAT_0064be7c & 4) != 0) {
    iVar6 = *(int *)(param_1 + 0xcec);
    x = *(int *)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0xac);
    uVar7 = *(uint *)(param_1 + 0x174) & 0xff;
    if (iVar6 != 0) {
      local_50[0] = '\0';
      c = FUN_00475780(local_50,0x50,iVar6,uVar7);
      if (c != 0) {
        iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x69c);
        iVar8 = *(int *)(iVar6 + 0x18);
        iVar2 = *(int *)(iVar6 + 0x1c);
        iVar3 = *(int *)(iVar6 + 0x20);
        iVar6 = *(int *)(iVar6 + 0x24);
        if (param_2 != (HDC)0x0) {
          color = SetBkColor(param_2,0);
          DVar4 = GetSysColor(0x17);
          color_00 = SetTextColor(param_2,DVar4);
          SetTextAlign(param_2,0);
          pvVar5 = (HGDIOBJ)_SfGetUIFont_4(100);
          pvVar5 = SelectObject(param_2,pvVar5);
          GetTextExtentPointA(param_2,local_50,c,&local_58);
          if (iVar3 < local_58.cx + 3 + x) {
            x = (iVar3 - local_58.cx) + -3;
          }
          if (x < iVar8) {
            x = iVar8;
          }
          iVar8 = iVar1 + 0x14;
          if (uVar7 == 8) {
            iVar8 = iVar1 + 0x1c;
          }
          if ((iVar6 < iVar8 + 2 + local_58.cy) &&
             (iVar6 = (iVar6 - local_58.cy) + -2, iVar8 = iVar2, iVar2 <= iVar6)) {
            iVar8 = iVar6;
          }
          if (((*(int *)(param_1 + 0x5e4) < iVar8 + 2 + local_58.cy) &&
              (iVar8 = (*(int *)(param_1 + 0x5e4) - local_58.cy) + -2, iVar8 < iVar2)) ||
             (iVar8 < iVar2)) {
            iVar8 = iVar2;
          }
          DAT_0064be68 = x + -3;
          _DAT_0064be74 = iVar8 + 2 + local_58.cy;
          DAT_0064be70 = local_58.cx + 3 + x;
          _DAT_0064be6c = iVar8 + -2;
          local_68.left = DAT_0064be68;
          local_68.top = _DAT_0064be6c;
          local_68.right = DAT_0064be70;
          local_68.bottom = _DAT_0064be74;
          ExtTextOutA(param_2,0,0,2,&local_68,(LPCSTR)0x0,0,(INT *)0x0);
          InflateRect(&local_68,-1,-1);
          DVar4 = GetSysColor(0x18);
          SetBkColor(param_2,DVar4);
          ExtTextOutA(param_2,x,iVar8,6,&local_68,local_50,c,(INT *)0x0);
          SetTextColor(param_2,color_00);
          SetBkColor(param_2,color);
          SelectObject(param_2,pvVar5);
        }
      }
    }
  }
  return;
}


