/* Module: vegas30.exe
   Function: FUN_0056d0f0
   Address: 0056d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_0056d0f0(int param_1)

{
  HMENU hmenu;
  long lVar1;
  int iVar2;
  ulong unaff_EBX;
  undefined4 unaff_ESI;
  undefined1 *item;
  MENUITEMINFOA *pMVar3;
  UINT *pUStack_d4;
  MENUITEMINFOA local_c8 [2];
  char acStack_4c [76];
  
  pUStack_d4 = (UINT *)0x501f;
  local_c8[0].fMask = _SfGetString_8(DAT_00647204);
  item = (undefined1 *)0x0;
  pUStack_d4 = &local_c8[0].fType;
  local_c8[0].cbSize = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))(*(int **)(param_1 + 4),0x32);
  Mixer_GetFXBusAssignment(unaff_EBX,(ulong *)&pUStack_d4);
  hmenu = CreatePopupMenu();
  if (hmenu != (HMENU)0x0) {
    pMVar3 = local_c8;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      pMVar3->cbSize = 0;
      pMVar3 = (MENUITEMINFOA *)&pMVar3->fMask;
    }
    local_c8[0].cbSize = 0x2c;
    local_c8[0].fType = 0;
    local_c8[0].fMask = 0x12;
    lVar1 = Mixer_NumBusTypePorts(1);
    if (0 < lVar1) {
      do {
        Mixer_GetDeviceDisplayName(acStack_4c,0x40,1,(ulong)item,1);
        if (item == (undefined1 *)0x0) {
          SfPrintF(&local_c8[0].hbmpItem,"Master (%s)",acStack_4c);
        }
        else {
          SfPrintF(&local_c8[0].hbmpItem,unaff_ESI,item + 0x40,acStack_4c);
        }
        local_c8[0].dwTypeData = (LPSTR)&local_c8[0].hbmpItem;
        local_c8[0].cch = lstrlenA((LPCSTR)&local_c8[0].hbmpItem);
        local_c8[0].wID = (UINT)(item + 0x1970);
        InsertMenuItemA(hmenu,(UINT)item,1,local_c8);
        if ((UINT *)item == pUStack_d4) {
          CheckMenuRadioItem(hmenu,0x1970,0x1a6f,local_c8[0].wID,0);
        }
        item = item + 1;
        lVar1 = Mixer_NumBusTypePorts(1);
      } while ((int)item < lVar1);
    }
    return hmenu;
  }
  return (HMENU)0x0;
}


