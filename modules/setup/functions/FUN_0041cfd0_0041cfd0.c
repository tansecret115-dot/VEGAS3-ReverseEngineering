/* Module: Setup.exe
   Function: FUN_0041cfd0
   Address: 0041cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041cfd0(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,"SfArchive2.Semaphore");
  *(HANDLE *)(param_1 + 8) = pvVar1;
  return;
}


