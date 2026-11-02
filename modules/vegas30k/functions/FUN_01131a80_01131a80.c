/* Module: vegas30k.dll
   Function: FUN_01131a80
   Address: 01131a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01131a80(int param_1)

{
  WPARAM *pWVar1;
  int iVar2;
  WPARAM local_20 [5];
  int local_c;
  
  pWVar1 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pWVar1 = 0;
    pWVar1 = pWVar1 + 1;
  }
  local_20[2] = 10;
  local_20[0] = *(WPARAM *)(param_1 + 4);
  local_c = param_1 + 0x4f0;
  local_20[1] = *(WPARAM *)(param_1 + 0x2c);
  SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_20[1],(LPARAM)local_20);
  return;
}


