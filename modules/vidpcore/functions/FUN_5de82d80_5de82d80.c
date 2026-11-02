/* Module: vidpcore.dll
   Function: FUN_5de82d80
   Address: 5de82d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de82d80(int param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  LRESULT LVar2;
  LRESULT LVar3;
  int *unaff_ESI;
  WPARAM wParam;
  int *local_8 [2];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_8[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17bd0,local_8);
  }
  (**(code **)(*local_8[0] + 0x20))(local_8[0],(int *)(param_1 + 0x4c),4);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x462);
  LVar2 = SendMessageA(hWnd,0x146,0,0);
  wParam = 0;
  if (0 < LVar2) {
    do {
      LVar3 = SendMessageA(hWnd,0x150,wParam,0);
      if (LVar3 == *(int *)(param_1 + 0x4c)) break;
      wParam = wParam + 1;
    } while ((int)wParam < LVar2);
  }
  SendMessageA(hWnd,0x14e,wParam,0);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


