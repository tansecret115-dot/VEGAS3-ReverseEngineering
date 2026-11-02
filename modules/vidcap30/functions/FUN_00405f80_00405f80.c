/* Module: vidcap30.exe
   Function: FUN_00405f80
   Address: 00405f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  HWND hWnd;
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  hWnd = *(HWND *)(param_1 + 0x98);
  if (hWnd != (HWND)0x0) {
    puVar1 = local_2c;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_2c[3] = param_3;
    local_2c[0] = 0x2c;
    local_2c[2] = param_2;
    if (param_4 != (undefined4 *)0x0) {
      local_1c = *param_4;
      local_18 = param_4[1];
      local_14 = param_4[2];
      local_10 = param_4[3];
    }
    local_c = DAT_005ba298;
    local_8 = &DAT_00586c70;
    SendMessageA(hWnd,0x406,0,(LPARAM)local_2c);
  }
  return;
}


