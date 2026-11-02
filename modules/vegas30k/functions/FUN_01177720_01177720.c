/* Module: vegas30k.dll
   Function: FUN_01177720
   Address: 01177720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01177720(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  puVar2 = (undefined4 *)(param_1 + 0xd8);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 0;
}


