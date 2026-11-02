/* Module: vegas30.exe
   Function: FUN_005a6e60
   Address: 005a6e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005a6e60(int param_1,undefined4 *param_2)

{
  HANDLE hEvent;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x90) + 1;
  *(int *)(param_1 + 0x90) = iVar1;
  if (1 < iVar1) {
    return 0x8000ffff;
  }
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x8c) = 1;
    SetEvent(*(HANDLE *)(param_1 + 4));
    return 0;
  }
  hEvent = *(HANDLE *)(param_1 + 4);
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  SetEvent(hEvent);
  return 0;
}


