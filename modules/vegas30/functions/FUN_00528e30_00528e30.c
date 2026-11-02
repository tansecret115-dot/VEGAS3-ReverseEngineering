/* Module: vegas30.exe
   Function: FUN_00528e30
   Address: 00528e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00528e30(int param_1,int *param_2,int param_3,int param_4)

{
  HWND hWnd;
  HMENU hMenu;
  int iVar1;
  
  hWnd = *(HWND *)(param_1 + 0xb0);
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(hWnd,(LPPOINT)&param_3);
  }
  if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
    hMenu = (HMENU)FUN_004047d0(0x34f,0);
    FUN_004ed760(hWnd,hMenu);
    iVar1 = *(int *)param_2[2];
    if ((*(uint *)(iVar1 + 0x210) & 0x80000) != 0) {
      EnableMenuItem(hMenu,0x145e,1);
    }
    if ((*(uint *)(iVar1 + 0x210) & 0x100000) != 0) {
      EnableMenuItem(hMenu,0x145f,1);
    }
    if (hMenu != (HMENU)0x0) {
      iVar1 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2);
      if (iVar1 != 0) {
        FUN_004ed800(hWnd,iVar1);
      }
    }
  }
  return;
}


