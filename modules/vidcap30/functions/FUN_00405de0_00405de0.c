/* Module: vidcap30.exe
   Function: FUN_00405de0
   Address: 00405de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_2c [8];
  undefined4 local_c;
  undefined4 local_8;
  
  hWnd = *(HWND *)(param_1 + 0x98);
  if (hWnd != (HWND)0x0) {
    puVar1 = local_2c;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_2c[3] = param_3;
    local_2c[2] = param_2;
    local_2c[0] = 0x2c;
    local_c = DAT_005ba298;
    local_8 = 0xffffffff;
    SendMessageA(hWnd,0x404,0,(LPARAM)local_2c);
  }
  return;
}


