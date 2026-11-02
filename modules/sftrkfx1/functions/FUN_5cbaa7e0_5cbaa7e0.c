/* Module: sftrkfx1.dll
   Function: FUN_5cbaa7e0
   Address: 5cbaa7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa7e0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  HMENU hMenu;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  uint uFlags;
  bool bVar6;
  
  SetFocus((HWND)*param_1);
  if ((((param_2 & 1) == 0) && ((uint)param_1[0x16] < (uint)param_1[0x20])) &&
     (iVar5 = param_1[param_1[0x16] + 0x21], iVar5 != 0)) {
    FUN_5cbaa240();
    uVar2 = FUN_5cba9ee0((int)param_1,iVar5,param_3,param_4);
    if (uVar2 < *(uint *)(iVar5 + 0x28)) {
      FUN_5cbaa110(param_1,iVar5,uVar2);
      iVar3 = *(int *)(uVar2 * 0x20 + 0x44 + iVar5);
      hMenu = CreatePopupMenu();
      if (hMenu != (HMENU)0x0) {
        bVar6 = iVar3 == 0;
        if (bVar6) {
          AppendMenuA(hMenu,0,0x1393,"Enable");
        }
        else {
          AppendMenuA(hMenu,0,0x1393,"Disable");
        }
        uFlags = (uint)bVar6;
        AppendMenuA(hMenu,0,0x1394,"Reset");
        AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
        AppendMenuA(hMenu,uFlags,0x1395,"Low Shelf");
        AppendMenuA(hMenu,uFlags,0x1396,"Band");
        AppendMenuA(hMenu,uFlags,0x1397,"High Shelf");
        iVar3 = (uVar2 + 2) * 0x20;
        piVar1 = (int *)(iVar3 + iVar5);
        CheckMenuItem(hMenu,0x1395,(-(uint)(*(int *)(iVar3 + iVar5) != 1) & 0xfffffff8) + 8);
        CheckMenuItem(hMenu,0x1396,(*piVar1 != 2) - 1 & 8);
        CheckMenuItem(hMenu,0x1397,(*piVar1 != 3) - 1 & 8);
        ClientToScreen((HWND)*param_1,(LPPOINT)&param_3);
        BVar4 = TrackPopupMenu(hMenu,0x102,param_3,param_4,0,(HWND)*param_1,(RECT *)0x0);
        DestroyMenu(hMenu);
        if ((BVar4 != 0) && (iVar5 = FUN_5cbaa6e0((int)param_1,BVar4,iVar5,uVar2), iVar5 != 0)) {
          FUN_5cbaa3a0(param_1);
          FUN_5cbaa380(param_1);
          return;
        }
        FUN_5cbaa6d0(param_1);
        FUN_5cbaa380(param_1);
      }
    }
  }
  return;
}


