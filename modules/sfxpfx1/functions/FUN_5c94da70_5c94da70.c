/* Module: sfxpfx1.dll
   Function: FUN_5c94da70
   Address: 5c94da70
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU __fastcall FUN_5c94da70(int param_1)

{
  int *piVar1;
  HMENU hMenu;
  int iVar2;
  int iVar3;
  UINT_PTR uIDNewItem;
  int *piStack_320;
  int local_314 [61];
  undefined1 uStack_21d;
  WCHAR aWStack_21c [270];
  
  piStack_320 = (int *)0x5c94da80;
  hMenu = CreatePopupMenu();
  if (hMenu != (HMENU)0x0) {
    piVar1 = *(int **)(param_1 + 0x30);
    piStack_320 = local_314;
    iVar2 = (**(code **)*piVar1)();
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piStack_320 + 0xc))(piStack_320,&stack0xfffffce4);
      if (-1 < iVar2) {
        uIDNewItem = 0x9e34;
        iVar2 = 1;
        do {
          iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,iVar2,aWStack_21c,0x104);
          if (-1 < iVar3) {
            if ((&stack0x00000000 == (undefined1 *)0x21c) || (aWStack_21c[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_21c,-1,(LPSTR)&piStack_320,0x104,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x320) {
              piStack_320 = (int *)((uint)piStack_320 & 0xffffff00);
            }
            uStack_21d = 0;
            AppendMenuA(hMenu,0,uIDNewItem,(LPCSTR)&piStack_320);
            uIDNewItem = uIDNewItem + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 41000);
      }
      (**(code **)(*piVar1 + 8))(piVar1);
      return hMenu;
    }
  }
  return hMenu;
}


