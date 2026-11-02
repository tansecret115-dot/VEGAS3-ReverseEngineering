/* Module: vidcap30.exe
   Function: FUN_004f7a20
   Address: 004f7a20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004f7a20(HWND param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint local_28 [10];
  
  puVar1 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_28[0] = 8;
  local_28[3] = 0x20;
  local_28[1] = param_2;
  SendMessageA(param_1,0x110c,0,(LPARAM)local_28);
  return local_28[2] & 0x20;
}


