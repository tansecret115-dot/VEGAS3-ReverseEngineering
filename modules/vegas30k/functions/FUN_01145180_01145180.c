/* Module: vegas30k.dll
   Function: FUN_01145180
   Address: 01145180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01145180(HWND param_1)

{
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24 [8];
  void *local_4;
  
  LVar1 = SendMessageA(param_1,0x146,0,0);
  iVar3 = 0;
  piVar4 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_24[0] = 0x20;
  if (0 < LVar1) {
    do {
      local_24[1] = iVar3;
      SendMessageA(param_1,0x404,0,(LPARAM)local_24);
      free(local_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < LVar1);
  }
  SendMessageA(param_1,0x14b,0,0);
  return;
}


