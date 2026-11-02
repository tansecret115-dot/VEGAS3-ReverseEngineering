/* Module: vidcap30.exe
   Function: _SfGetSubmenuByID@12
   Address: 0047a7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU _SfGetSubmenuByID_12(HMENU param_1,UINT param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  HMENU pHVar3;
  int iVar4;
  UINT UVar5;
  int nPos;
  HMENU local_8;
  int local_4;
  
                    /* 0x7a7c0  433  _SfGetSubmenuByID@12 */
  nPos = 0;
  local_8 = (HMENU)0x0;
  local_4 = -1;
  iVar2 = GetMenuItemCount(param_1);
  iVar1 = local_4;
  if (0 < iVar2) {
    do {
      pHVar3 = GetSubMenu(param_1,nPos);
      if (pHVar3 == (HMENU)0x0) {
        UVar5 = GetMenuItemID(param_1,nPos);
        if (UVar5 == param_2) {
          local_8 = param_1;
          iVar1 = local_4;
          break;
        }
      }
      else {
        iVar4 = _SfFindSubMenu_16(pHVar3,param_2,&local_8,&local_4);
        iVar1 = nPos;
        if (iVar4 != 0) break;
      }
      nPos = nPos + 1;
      iVar1 = local_4;
    } while (nPos < iVar2);
  }
  local_4 = iVar1;
  if (param_3 != (int *)0x0) {
    *param_3 = local_4;
  }
  return local_8;
}


