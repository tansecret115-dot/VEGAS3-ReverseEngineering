/* Module: vegas30.exe
   Function: FUN_005a6d80
   Address: 005a6d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005a6d80(undefined4 *param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DVar1 = GetCurrentThreadId();
  param_1[0x25] = DVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[1] = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    param_1[2] = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_005a6ca0,param_1,0,param_1 + 3);
      *param_1 = pvVar2;
      if (pvVar2 != (HANDLE)0x0) {
        return 0;
      }
    }
  }
  FUN_005a6e00(param_1);
  return 0x8007000e;
}


