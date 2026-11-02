/* Module: vegas30k.dll
   Function: _SfFindSubMenu@16
   Address: 010c40c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfFindSubMenu_16(HMENU param_1,UINT param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  HMENU pHVar2;
  int iVar3;
  UINT UVar4;
  int nPos;
  
                    /* 0xc40c0  931  _SfFindSubMenu@16 */
  iVar1 = GetMenuItemCount(param_1);
  nPos = 0;
  if (iVar1 < 1) {
    return 0;
  }
  do {
    pHVar2 = GetSubMenu(param_1,nPos);
    if (pHVar2 == (HMENU)0x0) {
      UVar4 = GetMenuItemID(param_1,nPos);
      if (UVar4 == param_2) {
        *param_3 = param_1;
        return 1;
      }
    }
    else {
      iVar3 = _SfFindSubMenu_16(pHVar2,param_2,param_3,param_4);
      if (iVar3 != 0) {
        *param_4 = nPos;
        return 0;
      }
    }
    nPos = nPos + 1;
  } while (nPos < iVar1);
  return 0;
}


