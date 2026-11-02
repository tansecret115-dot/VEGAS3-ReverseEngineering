/* Module: sftrans1.dll
   Function: FUN_004813f0
   Address: 004813f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004813f0(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  int *piVar1;
  uint uVar2;
  HWND pHVar3;
  UINT UVar4;
  HWND hWnd;
  int iVar5;
  uint uVar6;
  WPARAM wParam;
  LPARAM lParam;
  
  pHVar3 = param_4;
  uVar2 = param_3;
  uVar6 = param_3 & 0xffff;
  param_4 = (HWND)GetDlgCtrlID(param_4);
  if ((uVar6 != 9) && (uVar6 != 8)) {
    GetDlgItemInt((HWND)param_1[1],0x663,(BOOL *)&param_3,1);
    UVar4 = GetDlgItemInt((HWND)param_1[1],0x663,(BOOL *)&param_3,1);
    if (UVar4 < 0x3e9) {
      UVar4 = GetDlgItemInt((HWND)param_1[1],0x663,(BOOL *)&param_3,1);
    }
    else {
      UVar4 = 1000;
    }
    if ((param_3 != 0) && (UVar4 != *(UINT *)(param_1[0xc] + 0xac))) {
      *(UINT *)(param_1[0xc] + 0xac) = UVar4;
      lParam = *(LPARAM *)(param_1[0xc] + 0xac);
      wParam = 0;
      UVar4 = 0x610;
      hWnd = GetDlgItem((HWND)param_1[1],0x664);
      SendMessageA(hWnd,UVar4,wParam,lParam);
      piVar1 = (int *)param_1[0xd];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
      }
    }
    if (param_4 == (HWND)0x664) {
      iVar5 = FUN_004bfba0(0x115,uVar2,pHVar3,1,5,*(undefined4 *)(param_1[0xc] + 0xac));
      if (iVar5 == *(int *)(param_1[0xc] + 0xac)) {
        (**(code **)(*param_1 + 8))();
      }
      else {
        *(int *)(param_1[0xc] + 0xac) = iVar5;
        piVar1 = (int *)param_1[0xd];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x2c))(piVar1);
          return 0;
        }
      }
    }
  }
  return 0;
}


