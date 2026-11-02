/* Module: vegas30k.dll
   Function: _SfCleanMenu@12
   Address: 010c41e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfCleanMenu_12(HMENU param_1,HMENU param_2,UINT param_3)

{
  HMENU hMenu;
  HMENU pHVar1;
  int iVar2;
  uint uVar3;
  HMENU pHVar4;
  UINT UVar5;
  UINT UVar6;
  UINT uId;
  int nPos;
  UINT uId_00;
  int local_14;
  
                    /* 0xc41e0  784  _SfCleanMenu@12 */
  hMenu = param_1;
  local_14 = GetMenuItemCount(param_1);
  if (0 < local_14) {
    uId_00 = 0;
    if (0 < local_14) {
      nPos = -1;
      param_1 = (HMENU)(local_14 - 1);
      uId = 1;
      do {
        pHVar1 = GetSubMenu(hMenu,uId_00);
        if (pHVar1 == (HMENU)0x0) {
          UVar5 = GetMenuState(hMenu,uId_00,0x400);
          if (((nPos == -1) || ((HMENU)uId_00 == param_1)) && ((UVar5 & 0x800) != 0)) {
LAB_010c4313:
            DeleteMenu(hMenu,uId_00,0x400);
            uId_00 = uId_00 - 1;
            nPos = nPos + -1;
            uId = uId - 1;
            local_14 = local_14 + -1;
            param_1 = (HMENU)((int)param_1 - 1);
          }
          else if ((int)uId_00 < (int)param_1) {
            UVar6 = GetMenuState(hMenu,uId_00 - 1,0x400);
            uVar3 = GetMenuState(hMenu,uId,0x400);
            pHVar1 = GetSubMenu(hMenu,nPos);
            pHVar4 = GetSubMenu(hMenu,uId);
            if ((((UVar5 & 0x800) != 0) && (pHVar1 == (HMENU)0x0)) && ((UVar6 & 0x800) != 0))
            goto LAB_010c4313;
            if ((UVar5 & 0x800) != 0) goto joined_r0x010c4308;
          }
        }
        else {
          iVar2 = _SfCleanMenu_12(pHVar1,hMenu,uId_00);
          if (iVar2 != 0) {
            uId_00 = uId_00 - 1;
            nPos = nPos + -1;
            uId = uId - 1;
            local_14 = local_14 + -1;
            param_1 = (HMENU)((int)param_1 - 1);
            if ((HMENU)uId_00 == param_1) {
              uVar3 = GetMenuState(hMenu,uId_00,0x400);
              pHVar4 = GetSubMenu(hMenu,uId_00);
joined_r0x010c4308:
              if ((pHVar4 == (HMENU)0x0) && ((uVar3 & 0x800) != 0)) goto LAB_010c4313;
            }
          }
        }
        uId_00 = uId_00 + 1;
        nPos = nPos + 1;
        uId = uId + 1;
      } while ((int)uId_00 < local_14);
    }
    if (local_14 != 0) {
      return 0;
    }
  }
  DeleteMenu(param_2,param_3,0x400);
  return 1;
}


