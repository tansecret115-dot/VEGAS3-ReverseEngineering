/* Module: sfpagepeel.dll
   Function: FUN_0040d0f0
   Address: 0040d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040d0f0(int param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  HWND pHVar3;
  HWND pHVar4;
  HWND pHVar5;
  LPARAM LVar6;
  UINT Msg;
  longlong lVar7;
  int *piStack_128;
  uchar auStack_114 [272];
  
  if ((undefined4 *)**(int **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(param_1 + 8))();
  }
  (**(code **)(iRam00000000 + 0xc))(0,param_1 + 0x68);
  lVar7 = (ulonglong)(param_1 + 0x90) << 0x20;
  Msg = 0x703;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e3);
  SendMessageA(pHVar1,Msg,(WPARAM)lVar7,(LPARAM)((ulonglong)lVar7 >> 0x20));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5de);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e1);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5df);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e0);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e2);
  FUN_00425020(auStack_114,"%.3f");
  SetWindowTextA(pHVar1,(LPCSTR)auStack_114);
  FUN_00425020(auStack_114,"%.3f");
  SetWindowTextA(pHVar2,(LPCSTR)auStack_114);
  FUN_00425020(auStack_114,"%.3f");
  SetWindowTextA(pHVar3,(LPCSTR)auStack_114);
  FUN_00425020(auStack_114,"%.3f");
  SetWindowTextA(pHVar4,(LPCSTR)auStack_114);
  FUN_00425020(auStack_114,"%.3f");
  SetWindowTextA(pHVar5,(LPCSTR)auStack_114);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5d9);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5dc);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5da);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5db);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5dd);
  LVar6 = ftol();
  SendMessageA(pHVar1,0x610,1,LVar6);
  LVar6 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar6);
  LVar6 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar6);
  LVar6 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar6);
  LVar6 = ftol();
  SendMessageA(pHVar5,0x610,1,LVar6);
  if (piStack_128 != (int *)0x0) {
    (**(code **)(*piStack_128 + 8))();
  }
  return;
}


