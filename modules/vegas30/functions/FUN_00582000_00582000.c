/* Module: vegas30.exe
   Function: FUN_00582000
   Address: 00582000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00582000(HMENU param_1,int param_2)

{
  ULONG_PTR pMem;
  int iVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  int iVar4;
  UINT item;
  UINT *pUVar5;
  tagMENUITEMINFOA *ptVar6;
  tagMENUITEMINFOA local_130 [6];
  
  iVar1 = GetMenuItemCount(param_1);
  item = 0;
  if (0 < iVar1) {
    do {
      local_130[0].dwTypeData = (LPSTR)&local_130[0].hbmpItem;
      local_130[0].cbSize = 0x2c;
      local_130[0].fMask = 0x34;
      local_130[0].cch = 0x104;
      BVar2 = GetMenuItemInfoA(param_1,item,1,local_130);
      pMem = local_130[0].dwItemData;
      if ((((BVar2 != 0) && ((local_130[0].fType & 4) == 0)) && (0 < param_2)) &&
         ((undefined4 *)local_130[0].dwItemData != (undefined4 *)0x0)) {
        pUVar5 = (UINT *)(local_130[0].dwItemData + 8);
        ptVar6 = local_130;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar6->cbSize = *pUVar5;
          pUVar5 = pUVar5 + 1;
          ptVar6 = (tagMENUITEMINFOA *)&ptVar6->fMask;
        }
        if ((local_130[0].fType & 0x100) == 0) {
          _mbscpy((uchar *)&local_130[0].hbmpItem,*(uchar **)pMem);
          local_130[0].dwTypeData = (LPSTR)&local_130[0].hbmpItem;
        }
        local_130[0].fMask = local_130[0].fMask & 0xfffffffb;
        SetMenuItemInfoA(param_1,item,1,local_130);
        FUN_00580a90();
        pvVar3 = GlobalHandle((LPCVOID)pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)pMem);
        GlobalFree(pvVar3);
      }
      item = item + 1;
    } while ((int)item < iVar1);
  }
  return;
}


