/* Module: vegas30.exe
   Function: FUN_004fae10
   Address: 004fae10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fae10(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puVar1 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_28[1] = param_2;
  local_14 = param_4;
  local_10 = param_5;
  local_28[3] = param_6;
  local_28[0] = 0xd;
  local_28[2] = 0;
  local_8 = param_3;
  SendMessageA(param_1,0x1007,0,(LPARAM)local_28);
  return;
}


