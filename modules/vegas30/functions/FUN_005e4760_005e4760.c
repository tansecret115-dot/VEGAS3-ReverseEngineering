/* Module: vegas30.exe
   Function: FUN_005e4760
   Address: 005e4760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e4760(int param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    if (*param_3 < 0x30) {
      return 0x8000ffff;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    puVar2 = (undefined4 *)(param_1 + 8);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  *param_3 = 0x30;
  return 0;
}


