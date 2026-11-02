/* Module: vidcap30.exe
   Function: FUN_00404200
   Address: 00404200
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_00404200(undefined2 param_1,UINT param_2)

{
  HMENU hMenu;
  HMENU pHVar1;
  
  hMenu = (HMENU)_SfLoadMenu_8(DAT_005ba2a0,param_1);
  if (hMenu != (HMENU)0x0) {
    pHVar1 = GetSubMenu(hMenu,param_2);
    RemoveMenu(hMenu,param_2,0x400);
    DestroyMenu(hMenu);
    return pHVar1;
  }
  return (HMENU)0x0;
}


