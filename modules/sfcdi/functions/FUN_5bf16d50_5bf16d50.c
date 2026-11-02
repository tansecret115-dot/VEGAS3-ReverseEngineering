/* Module: sfcdi.dll
   Function: FUN_5bf16d50
   Address: 5bf16d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16d50(int *param_1)

{
  param_1[0x4f] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  param_1[0x4d] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_5bf55418);
  (**(code **)(*param_1 + 0x14))(param_1,100,0);
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}


