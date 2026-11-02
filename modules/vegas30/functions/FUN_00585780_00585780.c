/* Module: vegas30.exe
   Function: FUN_00585780
   Address: 00585780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00585780(int *param_1,HMENU param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  int unaff_EBP;
  UINT item;
  int local_13c;
  tagMENUITEMINFOA atStack_130 [6];
  
  item = 0;
  local_13c = 0;
  bVar1 = false;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)(**(code **)(*param_1 + 8))();
    if (param_3 == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    bVar1 = true;
    local_13c = (**(code **)(*param_1 + 0xc))(param_3);
    if (local_13c < 0) goto LAB_005858cb;
  }
  iVar2 = GetMenuItemCount(param_2);
  if (0 < iVar2) {
    do {
      atStack_130[0].dwTypeData = (LPSTR)&atStack_130[0].hbmpItem;
      atStack_130[0].cbSize = 0x2c;
      atStack_130[0].fMask = 0x16;
      atStack_130[0].cch = 0x103;
      BVar3 = GetMenuItemInfoA(param_2,item,1,atStack_130);
      if (BVar3 != 0) {
        if (atStack_130[0].hSubMenu == (HMENU)0x0) {
          uVar4 = FUN_005859d0(param_3,atStack_130[0].wID,0);
          if ((uVar4 & 0x80000000) == 0) {
            atStack_130[0].fState = (-(uint)((uVar4 & 1) != 0) & 0xfffffffd) + 3;
            if (((uVar4 & 2) != 0) &&
               (atStack_130[0].fState = atStack_130[0].fState | 8, (uVar4 & 0x40000000) != 0)) {
              atStack_130[0].fType = atStack_130[0].fType | 0x200;
            }
            atStack_130[0].fMask = 0x11;
            SetMenuItemInfoA(param_2,item,1,atStack_130);
          }
        }
        else {
          local_13c = FUN_00585780(atStack_130[0].hSubMenu,0);
          if (local_13c < 0) break;
        }
      }
      item = item + 1;
    } while ((int)item < iVar2);
  }
  if (!bVar1) {
    return local_13c;
  }
LAB_005858cb:
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)*param_3)(1);
    local_13c = unaff_EBP;
  }
  return local_13c;
}


