/* Module: vegas30.exe
   Function: FUN_0044c790
   Address: 0044c790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c790(int param_1)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x88) = DAT_0064b138;
    hWnd = GetFocus();
    switch(*(undefined4 *)(iVar1 + 0xa8)) {
    case 1:
      iVar2 = FUN_005d9aa0(*(undefined4 *)(iVar1 + 0x88),0,*(undefined4 *)(iVar1 + 0xa0),
                           *(undefined4 *)(iVar1 + 0xa4));
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xac) = iVar2;
        FUN_0044bfa0(iVar1,iVar2);
      }
      break;
    case 2:
      iVar2 = FUN_005cf4d0(*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0xa0));
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xac) = iVar2;
        FUN_0044c250(iVar1,iVar2,1);
      }
      break;
    case 3:
      iVar2 = FUN_005cf4d0(*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0xa0));
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xac) = iVar2;
        FUN_0044c250(iVar1,iVar2,0);
      }
      break;
    case 4:
      FUN_0044c4d0(iVar1,*(undefined4 *)(iVar1 + 0x88),1);
      break;
    case 5:
      iVar2 = FUN_005d9aa0(*(undefined4 *)(iVar1 + 0x88),0,*(undefined4 *)(iVar1 + 0xa0),
                           *(undefined4 *)(iVar1 + 0xa4));
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xac) = iVar2;
        FUN_0044c390(iVar1,iVar2);
      }
      break;
    case 6:
      FUN_005bad20(*(undefined4 *)(iVar1 + 0x88));
      iVar2 = FUN_005ed0e0(*(undefined4 *)(iVar1 + 0xa0),&param_1);
      if (-1 < iVar2) {
        *(int *)(iVar1 + 0xac) = param_1;
        FUN_0044c2f0(iVar1,param_1,*(uint *)(iVar1 + 0x9c) >> 9 & 1);
      }
      break;
    case 7:
      iVar2 = FUN_005d9aa0(*(undefined4 *)(iVar1 + 0x88),0,*(undefined4 *)(iVar1 + 0xa0),
                           *(undefined4 *)(iVar1 + 0xa4));
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xac) = iVar2;
        FUN_0044c030(iVar1,iVar2);
      }
      break;
    case 8:
      iVar2 = FUN_005d9aa0(*(undefined4 *)(iVar1 + 0x88),0,*(undefined4 *)(iVar1 + 0xa0),
                           *(undefined4 *)(iVar1 + 0xa4));
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0xac) = iVar2;
        FUN_0044c140(iVar1,iVar2);
      }
    }
    SetFocus(hWnd);
    if (*(int *)(iVar1 + 0xac) != 0) {
      return 0;
    }
  }
  PostMessageA(*(HWND *)(iVar1 + 8),0x10,0,0);
  return 0x15;
}


