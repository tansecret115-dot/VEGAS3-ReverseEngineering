/* Module: vegas30k.dll
   Function: FUN_0113ab50
   Address: 0113ab50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113ab50(undefined4 param_1,HWND param_2)

{
  int *piVar1;
  WPARAM wParam;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1c [6];
  int *local_4;
  
  wParam = SendMessageA(param_2,0x130b,0,0);
  puVar3 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_1c[0] = 8;
  SendMessageA(param_2,0x1305,wParam,(LPARAM)local_1c);
  if (local_4 != (int *)0x0) {
    iVar2 = *local_4;
    piVar1 = *(int **)(iVar2 + 0x24 + wParam * 0x44);
    (**(code **)(*piVar1 + 0x14))(piVar1);
    FUN_0113a720(iVar2 + wParam * 0x44);
  }
  return 0;
}


