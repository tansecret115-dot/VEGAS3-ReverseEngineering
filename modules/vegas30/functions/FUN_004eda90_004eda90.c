/* Module: vegas30.exe
   Function: FUN_004eda90
   Address: 004eda90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004eda90(int param_1,int param_2,int param_3,int *param_4)

{
  HWND hWnd;
  int *piVar1;
  HMENU hMenu;
  int iVar2;
  int iVar3;
  
  hWnd = *(HWND *)(param_1 + 0x184);
  if ((param_2 == 0) && (param_3 == 0)) {
    param_2 = 4;
    param_3 = 4;
    ClientToScreen(hWnd,(LPPOINT)&param_2);
  }
  hMenu = (HMENU)FUN_004047d0(0x351,0);
  if (hMenu != (HMENU)0x0) {
    FUN_004ed760(hWnd,hMenu);
    piVar1 = param_4;
    if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
      EnableMenuItem(hMenu,0xa7bb,1);
    }
    else {
      FUN_004ec4f0(param_4,1,&param_4,1);
      if (((uint)param_4 & 0x1c) == 0) {
        EnableMenuItem(hMenu,0xa7bb,1);
        if ((DAT_00647e30 != 1) || (((uint)param_4 & 0x18) == 0)) {
          DeleteMenu(hMenu,0x146b,0);
        }
        if (((uint)param_4 & 0x10014) == 0) {
          DeleteMenu(hMenu,0x1468,0);
        }
        else {
          FUN_004ed9e0(hMenu,0x1468);
        }
      }
    }
    iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&param_2,2);
    if (iVar2 != 0) {
      iVar3 = FUN_004ed800(hWnd,iVar2);
      if ((iVar3 == 0) && (iVar2 == 0xa7bb)) {
        FUN_004edbb0(piVar1,0);
      }
    }
  }
  return;
}


