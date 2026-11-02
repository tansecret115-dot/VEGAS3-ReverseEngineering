/* Module: vidcap30.exe
   Function: FUN_004f2b50
   Address: 004f2b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2b50(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_28[2] = param_3;
  local_14 = param_4;
  local_28[1] = param_2;
  local_28[0] = 1;
  local_10 = param_5;
  SendMessageA(param_1,0x1005,0,(LPARAM)local_28);
  return;
}


