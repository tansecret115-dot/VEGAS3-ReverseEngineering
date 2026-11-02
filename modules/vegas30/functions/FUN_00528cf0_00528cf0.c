/* Module: vegas30.exe
   Function: FUN_00528cf0
   Address: 00528cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00528cf0(int param_1,int *param_2,int param_3,int param_4)

{
  HWND hWnd;
  int iVar1;
  HMENU hMenu;
  int iVar2;
  int iVar3;
  
  hWnd = *(HWND *)(param_1 + 0xb0);
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(hWnd,(LPPOINT)&param_3);
  }
  if ((param_2 == (int *)0x0) || (iVar2 = *param_2, iVar2 == 0)) {
    hMenu = (HMENU)FUN_004047d0(0x34c,0);
    SendMessageA(*(HWND *)(param_1 + 0xb0),0x60e,0,(LPARAM)param_2);
    if (((param_2 == (int *)0x0) || (*param_2 != 1)) ||
       ((*(uint *)(*(int *)param_2[2] + 0x210) & 0x40000) != 0)) {
      EnableMenuItem(hMenu,0x1461,1);
    }
  }
  else {
    hMenu = (HMENU)FUN_004047d0(0x34d,0);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(param_2[2] + iVar3 * 4);
        if ((iVar3 == 0) && ((*(uint *)(iVar1 + 0x210) & 0x100000) != 0)) {
          EnableMenuItem(hMenu,0x145f,1);
        }
        if ((*(uint *)(iVar1 + 0x210) & 0x80000) != 0) {
          EnableMenuItem(hMenu,0x145e,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  FUN_004ed760(hWnd,hMenu);
  if ((hMenu != (HMENU)0x0) &&
     (iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2), iVar2 != 0)) {
    FUN_004ed800(hWnd,iVar2);
  }
  return;
}


