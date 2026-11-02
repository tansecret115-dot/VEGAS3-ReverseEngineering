/* Module: vegas30k.dll
   Function: FUN_0113e2c0
   Address: 0113e2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113e2c0(HWND param_1,HWND param_2)

{
  WPARAM wParam;
  int iVar1;
  undefined4 *puVar2;
  tagPOINT local_34;
  tagRECT local_2c;
  undefined4 local_1c [6];
  int local_4;
  
  GetWindowLongA(param_1,8);
  wParam = SendMessageA(param_2,0x130b,0,0);
  puVar2 = local_1c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1c[0] = 8;
  SendMessageA(param_2,0x1305,wParam,(LPARAM)local_1c);
  if (local_4 != 0) {
    GetWindowRect(param_2,&local_2c);
    SendMessageA(param_2,0x1328,0,(LPARAM)&local_2c);
    local_34.x = local_2c.left;
    local_34.y = local_2c.top;
    ScreenToClient(param_1,&local_34);
    *(undefined4 *)(local_4 + 0x3c) = 1;
    FUN_01040850(param_1,local_4,&local_34,1);
  }
  return 0;
}


