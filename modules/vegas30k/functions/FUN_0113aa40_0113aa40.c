/* Module: vegas30k.dll
   Function: FUN_0113aa40
   Address: 0113aa40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113aa40(HWND param_1,HWND param_2)

{
  WPARAM wParam;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  tagPOINT local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  tagRECT local_2c;
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
    local_4[2] = wParam;
    iVar2 = *local_4 + wParam * 0x44;
    iVar1 = FUN_0113a650(param_1,iVar2);
    if (iVar1 == 0) {
      return 1;
    }
    GetWindowRect(param_2,&local_2c);
    SendMessageA(param_2,0x1328,0,(LPARAM)&local_2c);
    local_44.x = local_2c.left;
    local_44.y = local_2c.top;
    ScreenToClient(param_1,&local_44);
    local_3c = local_44.x;
    local_38 = local_44.y;
    local_34 = *(int *)(iVar2 + 8) + local_44.x;
    local_30 = *(int *)(iVar2 + 0xc) + local_44.y;
    (**(code **)(**(int **)(iVar2 + 0x24) + 0x10))(*(int **)(iVar2 + 0x24),param_1,&local_3c,1);
    *(undefined4 *)(iVar2 + 0x38) = 1;
    (**(code **)(**(int **)(iVar2 + 0x24) + 0x20))(*(int **)(iVar2 + 0x24),5);
  }
  return 0;
}


