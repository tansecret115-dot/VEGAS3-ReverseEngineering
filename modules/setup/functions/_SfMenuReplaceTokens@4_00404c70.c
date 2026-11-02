/* Module: Setup.exe
   Function: _SfMenuReplaceTokens@4
   Address: 00404c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMenuReplaceTokens_4(HMENU param_1)

{
  int iVar1;
  int iVar2;
  UINT item;
  UINT *pUVar3;
  tagMENUITEMINFOA local_158 [3];
  uchar local_c8 [200];
  
                    /* 0x4c70  268  _SfMenuReplaceTokens@4 */
  iVar1 = GetMenuItemCount(param_1);
  item = 0;
  local_158[0].cbSize = 0x2c;
  local_158[0].fMask = 0x16;
  pUVar3 = &local_158[0].fType;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pUVar3 = 0;
    pUVar3 = pUVar3 + 1;
  }
  if (0 < iVar1) {
    do {
      local_158[0].dwTypeData = (LPSTR)&local_158[0].hbmpItem;
      local_158[0].cch = 100;
      GetMenuItemInfoA(param_1,item,1,local_158);
      if ((local_158[0].fType & 0x800) == 0) {
        GetMenuStringA(param_1,item,(LPSTR)&local_158[0].hbmpItem,100,0x400);
        SfPrintF(local_c8,(BYTE *)&local_158[0].hbmpItem);
        ModifyMenuA(param_1,item,0x400,local_158[0].wID,(LPCSTR)local_c8);
        if (local_158[0].hSubMenu != (HMENU)0x0) {
          _SfMenuReplaceTokens_4(local_158[0].hSubMenu);
        }
      }
      item = item + 1;
    } while ((int)item < iVar1);
  }
  return;
}


