/* Module: sftrans1.dll
   Function: FUN_004ae730
   Address: 004ae730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ae730(int param_1)

{
  WPARAM *pWVar1;
  undefined4 *puVar2;
  WPARAM WVar3;
  HWND pHVar4;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  LPARAM LVar5;
  undefined *puVar6;
  double dVar7;
  BOOL bEnable;
  BOOL bEnable_00;
  WPARAM wParam;
  int *piStack_18;
  BOOL BStack_10;
  int *local_c [3];
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_c[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00554d80,local_c);
  }
  pWVar1 = (WPARAM *)(param_1 + 0x4c);
  (**(code **)(*local_c[0] + 0x34))(local_c[0],pWVar1,0x1c);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6df);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e2);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e5);
  hWnd_01 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e7);
  LVar5 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar5);
  LVar5 = ftol();
  SendMessageA(hWnd,0x610,1,LVar5);
  SendMessageA(hWnd_00,0x14e,*pWVar1,0);
  SendMessageA(hWnd_01,0x703,0,param_1 + 0x58);
  dVar7 = (double)*(float *)(param_1 + 0x50);
  puVar6 = &DAT_00565bc0;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e0);
  FUN_004c84a0(pHVar4,puVar6,dVar7);
  dVar7 = (double)*(float *)(param_1 + 0x54);
  puVar6 = &DAT_00565bc0;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e3);
  FUN_004c84a0(pHVar4,puVar6,dVar7);
  WVar3 = *pWVar1;
  bEnable_00 = 1;
  BStack_10 = 1;
  wParam = 1;
  if (WVar3 == 0) {
    bEnable_00 = 0;
    BStack_10 = 0;
  }
  else if (WVar3 != 1) {
    if (WVar3 == 2) {
      bEnable_00 = 0;
    }
    goto LAB_004ae8b6;
  }
  wParam = 0;
LAB_004ae8b6:
  EnableWindow(hWnd,bEnable_00);
  bEnable = bEnable_00;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e3);
  EnableWindow(pHVar4,bEnable);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e1);
  EnableWindow(pHVar4,bEnable_00);
  SendMessageA(hWnd_01,0x709,wParam,0);
  EnableWindow(hWnd_01,BStack_10);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e6);
  EnableWindow(pHVar4,BStack_10);
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(piStack_18);
  }
  return;
}


