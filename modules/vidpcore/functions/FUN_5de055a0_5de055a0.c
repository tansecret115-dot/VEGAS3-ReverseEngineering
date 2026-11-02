/* Module: vidpcore.dll
   Function: FUN_5de055a0
   Address: 5de055a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5de055a0(int param_1)

{
  HANDLE pvVar1;
  
  FUN_5de9f070();
  *(undefined ***)(param_1 + 0xbc) = &PTR_LAB_5df184a4;
  *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_5df18494;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe4));
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0xd0) = pvVar1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return param_1;
}


