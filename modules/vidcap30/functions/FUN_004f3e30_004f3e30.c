/* Module: vidcap30.exe
   Function: FUN_004f3e30
   Address: 004f3e30
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_004f3e30(int param_1)

{
  LRESULT LVar1;
  int iVar2;
  WPARAM *pWVar3;
  WPARAM local_20 [8];
  
  if (*(int *)(param_1 + 0x4bc) != 0) {
    KillTimer(*(HWND *)(param_1 + 4),4);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    return 1;
  }
  pWVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pWVar3 = 0;
    pWVar3 = pWVar3 + 1;
  }
  local_20[1] = *(WPARAM *)(param_1 + 0x2c);
  local_20[0] = *(WPARAM *)(param_1 + 4);
  local_20[2] = 0xb;
  LVar1 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_20[1],(LPARAM)local_20);
  return LVar1;
}


