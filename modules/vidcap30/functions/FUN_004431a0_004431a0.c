/* Module: vidcap30.exe
   Function: FUN_004431a0
   Address: 004431a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004431a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  WPARAM WVar2;
  int iVar3;
  LRESULT LVar4;
  WPARAM wParam;
  WPARAM wParam_00;
  WPARAM WVar5;
  int iVar6;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1042,0,0);
  wParam = SendMessageA(*(HWND *)(param_1 + 0x1668),0x100c,0xffffffff,2);
  local_14 = *param_2;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = param_2[1];
  puVar1 = (undefined4 *)(param_1 + 0x1668);
  param_1 = 0;
  wParam_00 = SendMessageA((HWND)*puVar1,0x100c,wParam,2);
  WVar2 = wParam;
  while (wParam_00 != 0xffffffff) {
    WVar5 = SendMessageA(*(HWND *)(iVar3 + 0x1668),0x100c,wParam_00,2);
    WVar2 = wParam_00;
    wParam_00 = WVar5;
  }
  iVar6 = SendMessageA(*(HWND *)(iVar3 + 0x1668),0x1012,0,(LPARAM)&local_14);
  if (local_10 < *(int *)(iVar3 + 0x17a4)) {
    iVar6 = 0;
  }
  else if (iVar6 == -1) {
    iVar6 = SendMessageA(*(HWND *)(iVar3 + 0x1668),0x1004,0,0);
  }
  if ((int)WVar2 < iVar6) {
    param_1 = iVar6 - WVar2;
  }
  else {
    if (iVar6 < (int)wParam) {
      param_1 = iVar6 - wParam;
      goto LAB_0044329b;
    }
    if ((iVar6 <= (int)wParam) || (param_1 = iVar6 - LVar4, param_1 < 1)) goto LAB_0044329b;
  }
  param_1 = param_1 + -1;
LAB_0044329b:
  FUN_00442ad0(iVar3,param_1);
  FUN_00443120(*(undefined4 *)(iVar3 + 0x1668),iVar3 + 0x17a0,0xffffffff);
  SetCursor(*(HCURSOR *)(iVar3 + 0x179c));
  *(undefined4 *)(iVar3 + 0x179c) = 0;
  *(undefined4 *)(iVar3 + 0x1798) = 0;
  return;
}


