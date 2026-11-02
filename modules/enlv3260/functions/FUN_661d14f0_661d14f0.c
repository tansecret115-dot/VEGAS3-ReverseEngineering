/* Module: enlv3260.dll
   Function: FUN_661d14f0
   Address: 661d14f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d14f0(LPVOID param_1)

{
  void *pvVar1;
  HANDLE pvVar2;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    return 0x80004005;
  }
  if (*(int *)((int)param_1 + 0x34) == 0) {
    pvVar1 = operator_new(0x18);
    *(void **)((int)param_1 + 0x34) = pvVar1;
  }
  InitializeCriticalSection(*(LPCRITICAL_SECTION *)((int)param_1 + 0x34));
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x14) = pvVar2;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x18) = pvVar2;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x1c) = pvVar2;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x20) = pvVar2;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x24) = pvVar2;
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_661d17d0,param_1,0,
                        (LPDWORD)((int)param_1 + 0x10));
  *(HANDLE *)((int)param_1 + 0xc) = pvVar2;
  return 0;
}


