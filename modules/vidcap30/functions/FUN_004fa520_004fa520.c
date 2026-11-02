/* Module: vidcap30.exe
   Function: FUN_004fa520
   Address: 004fa520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa520(int param_1,LPCSTR param_2)

{
  int iVar1;
  WPARAM *pWVar2;
  WPARAM local_20 [5];
  LPCSTR local_c;
  
  SetWindowTextA(*(HWND *)(param_1 + 4),param_2);
  pWVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pWVar2 = 0;
    pWVar2 = pWVar2 + 1;
  }
  local_20[1] = *(WPARAM *)(param_1 + 0x2c);
  local_20[0] = *(WPARAM *)(param_1 + 4);
  local_20[2] = 0x32;
  local_c = param_2;
  SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_20[1],(LPARAM)local_20);
  return;
}


