/* Module: vegas30.exe
   Function: FUN_00448c50
   Address: 00448c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448c50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  WPARAM wParam;
  int iVar3;
  undefined8 uVar4;
  LPARAM lParam;
  tagRECT local_10;
  
  piVar1 = (int *)FUN_004452b0(param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((param_2 < 0) || (*piVar1 + -1 < param_2)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar1[2] + param_2 * 4);
    }
    FUN_00445080(param_1,1);
    if (iVar3 != 0) {
      FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
      iVar2 = _SfVideoFilterCache_InitView_16
                        (iVar3,DAT_006471fc,*(undefined4 *)(param_1 + 0x234),param_2 + 0x410);
      FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
      if (-1 < iVar2) {
        FUN_00448b30(param_1,iVar3);
        FUN_0044a160(param_1,0);
        FUN_00445cf0(param_1,&local_10);
        uVar4 = FUN_004581e0(*(undefined4 *)(param_1 + 0x80));
        FUN_0053eb50(*(undefined4 *)(param_1 + 0x80),&local_10);
        FUN_00448c20(param_1,uVar4);
        FUN_00445cb0(param_1);
        if (-1 < iVar2) {
          GetClientRect(*(HWND *)(param_1 + 0x84),&local_10);
          FUN_004475b0(param_1,local_10.right - local_10.left,local_10.bottom - local_10.top,0,0);
          lParam = 0;
          wParam = FUN_00445160(param_1);
          SendMessageA(*(HWND *)(param_1 + 0x144),0x602,wParam,lParam);
          InvalidateRect(*(HWND *)(param_1 + 0x84),(RECT *)0x0,0);
          return;
        }
      }
    }
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
    FUN_00445cf0(param_1,&local_10);
    FUN_0053eb50(*(undefined4 *)(param_1 + 0x80),&local_10);
    FUN_0044a160(param_1,0);
    FUN_00445cb0(param_1);
    return;
  }
  FUN_00445080(param_1,0);
  return;
}


