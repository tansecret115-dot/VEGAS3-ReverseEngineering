/* Module: vegas30.exe
   Function: FUN_00452d70
   Address: 00452d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452d70(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_2c [11];
  
  hWnd = *(HWND *)(param_1 + 0x210);
  puVar3 = local_2c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_2c[2] = *(undefined4 *)(param_1 + 4);
  local_2c[0] = 0x2c;
  local_2c[3] = 2;
  LVar1 = SendMessageA(hWnd,0x408,0,(LPARAM)local_2c);
  if (LVar1 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x210),0x411,0,(LPARAM)local_2c);
    SendMessageA(*(HWND *)(param_1 + 0x210),0x405,0,(LPARAM)local_2c);
  }
  KillTimer(*(HWND *)(param_1 + 4),3);
  return;
}


