/* Module: vidcap30.exe
   Function: FUN_00555050
   Address: 00555050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00555050(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,"SfArchive2.Semaphore");
  *(HANDLE *)(param_1 + 8) = pvVar1;
  return;
}


