/* Module: mp3plug.dll
   Function: FUN_5f696950
   Address: 5f696950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f696950(undefined4 *param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  
  hMem = GlobalAlloc(0x42,0x80a);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (iVar2 = 0x202; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)param_1;
  return;
}


