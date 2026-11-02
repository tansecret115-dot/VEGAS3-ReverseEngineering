/* Module: vegas30.exe
   Function: FUN_004ee380
   Address: 004ee380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ee380(int param_1,int *param_2,int param_3,int param_4)

{
  HWND hWnd;
  int *piVar1;
  HMENU hMenu;
  int iVar2;
  int iVar3;
  
  hWnd = *(HWND *)(param_1 + 0x184);
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(hWnd,(LPPOINT)&param_3);
  }
  if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
    iVar2 = *(int *)param_2[2];
    piVar1 = *(int **)(iVar2 + 0x20c);
    iVar3 = *piVar1;
    if ((((iVar3 != 0xe && iVar3 != 5) && iVar3 != 4) && iVar3 != 2) && iVar3 != 1) {
      hMenu = (HMENU)FUN_004047d0(0x34b,0);
      FUN_004ed760(hWnd,hMenu);
      if ((*(uint *)(iVar2 + 0x210) & 0x80000) != 0) {
        EnableMenuItem(hMenu,0x145e,1);
      }
      if ((*(uint *)(iVar2 + 0x210) & 0x100000) != 0) {
        EnableMenuItem(hMenu,0x145f,1);
      }
      iVar2 = FUN_004ee240(param_1,iVar2);
      if (iVar2 == 0) {
        EnableMenuItem(hMenu,0x1463,1);
      }
      if (*piVar1 == 0xc) {
        EnableMenuItem(hMenu,0x1467,1);
      }
      if (hMenu != (HMENU)0x0) {
        iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2);
        if (iVar2 != 0) {
          iVar3 = FUN_004ed800(hWnd,iVar2);
          if ((iVar3 == 0) && (iVar2 == 0x1467)) {
            FUN_004edc50(hWnd,0,param_2);
          }
        }
      }
    }
  }
  return;
}


