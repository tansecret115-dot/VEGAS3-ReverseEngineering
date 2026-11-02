/* Module: vidcap30.exe
   Function: FUN_00497bf0
   Address: 00497bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00497bf0(int param_1,int param_2)

{
  int iVar1;
  WPARAM *pWVar2;
  WPARAM local_20 [8];
  
  pWVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pWVar2 = 0;
    pWVar2 = pWVar2 + 1;
  }
  local_20[0] = *(WPARAM *)(param_1 + 4);
  local_20[1] = *(WPARAM *)(param_1 + 0x2c);
  local_20[2] = 0x34 - (uint)(param_2 != 0);
  SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_20[1],(LPARAM)local_20);
  FUN_004fbc30(param_1);
  return;
}


