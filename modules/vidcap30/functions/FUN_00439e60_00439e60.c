/* Module: vidcap30.exe
   Function: FUN_00439e60
   Address: 00439e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439e60(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  HWND hWnd;
  WPARAM wParam;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar3 = param_2;
  piStack_2c = *(int **)(param_2 + 0x354);
  if (piStack_2c != (int *)0x0) {
    puStack_20 = local_8;
    iStack_1c = 0;
    puStack_24 = local_4;
    puStack_28 = &param_2;
    iVar1 = (**(code **)(*piStack_2c + 0x20))();
    if (-1 < iVar1) {
      while( true ) {
        (**(code **)(**(int **)(iVar3 + 0x354) + 0x30))
                  (*(int **)(iVar3 + 0x354),unaff_EBX,unaff_EDI,iStack_1c);
        if (iStack_1c == 1) {
          if (iVar3 != unaff_EBP + 0xd8) {
            return;
          }
          SendMessageA(*(HWND *)(unaff_EBP + 8),0x111,0x1d8,0);
          return;
        }
        if (iStack_1c == 3) break;
        if (iStack_1c == 2) {
          if (iVar3 != unaff_EBP + 0xa48) {
            return;
          }
          iVar3 = FUN_00428e00(iVar3);
          if (iVar3 == 0) {
            return;
          }
          PostMessageA(*(HWND *)(unaff_EBP + 8),0x111,0x1d8,0);
          return;
        }
        if (((iStack_1c == 0x12) && (iVar3 == unaff_EBP + 0xd8)) &&
           (iVar1 = FUN_00434a00(unaff_EBP), iVar1 != 0)) {
          iVar1 = FUN_0042b3b0(iVar3);
          iVar2 = FUN_0042b380(iVar3);
          if (iVar1 == 0) {
            if (iVar2 == 0) goto LAB_00439f2f;
            hWnd = *(HWND *)(unaff_EBP + 8);
            wParam = 0x1d1;
          }
          else {
            hWnd = *(HWND *)(unaff_EBP + 8);
            wParam = 0x1d8;
          }
          SendMessageA(hWnd,0x111,wParam,0);
        }
LAB_00439f2f:
        iVar1 = (**(code **)(**(int **)(iVar3 + 0x354) + 0x20))
                          (*(int **)(iVar3 + 0x354),&iStack_1c,&puStack_28,&piStack_2c,0);
        if (iVar1 < 0) {
          return;
        }
      }
      if ((iVar3 == unaff_EBP + 0xa48) && (iVar3 = FUN_00428e00(iVar3), iVar3 != 0)) {
        *(undefined4 *)(unaff_EBP + 0x1ac8) = 0;
        SendMessageA(*(HWND *)(unaff_EBP + 8),0x111,0x1d8,0);
        return;
      }
    }
  }
  return;
}


