/* Module: sfppack2.dll
   Function: FUN_5ccdf9d0
   Address: 5ccdf9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5ccdf9d0(undefined4 *param_1)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *puVar4;
  _SYSTEM_INFO local_24;
  
  *param_1 = &PTR_LAB_5cd5211c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xd] = 1;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_LAB_5cd520c0;
  puVar4 = param_1 + 7;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar4 = param_1 + 0x1a;
  for (iVar3 = 0x33; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x20] = 0;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[0x21] = pvVar2;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  param_1[0x41] = pvVar2;
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_5ccdf6a0,param_1 + 0x1a,0,param_1 + 0x23);
  param_1[0x22] = pvVar2;
  GetSystemInfo(&local_24);
  if (local_24.dwNumberOfProcessors < 2) {
    param_1[0x4c] = 1;
  }
  else {
    param_1[0x4c] = 0;
  }
  puVar4 = param_1 + 0x50;
  for (iVar3 = 6; iVar1 = DAT_5cd679f8, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x18] = 0;
  param_1[0x4f] = (uint)(iVar1 == 0);
  return param_1;
}


