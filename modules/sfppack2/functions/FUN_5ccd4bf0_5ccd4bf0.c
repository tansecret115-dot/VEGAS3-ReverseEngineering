/* Module: sfppack2.dll
   Function: FUN_5ccd4bf0
   Address: 5ccd4bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5ccd4bf0(undefined4 *param_1)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *puVar4;
  _SYSTEM_INFO local_24;
  
  *param_1 = &PTR_LAB_5cd51618;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x9e] = 1;
  param_1[0x9f] = 1;
  param_1[0xa0] = 0;
  param_1[0xa1] = 1;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *param_1 = &PTR_LAB_5cd51528;
  puVar4 = param_1 + 7;
  for (iVar3 = 0x97; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_1 + 0xa2;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_1 + 0xb4;
  for (iVar3 = 0x1f0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0xc4] = 0;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[0xc2] = pvVar2;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  param_1[0x208] = pvVar2;
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_5ccd4d10,param_1 + 0xb4,0,param_1 + 0xc3);
  param_1[0xc1] = pvVar2;
  GetSystemInfo(&local_24);
  if (local_24.dwNumberOfProcessors < 2) {
    param_1[0x2a2] = 1;
  }
  else {
    param_1[0x2a2] = 0;
  }
  puVar4 = param_1 + 0x2a7;
  for (iVar3 = 6; iVar1 = DAT_5cd679f8, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0xb1] = 0;
  param_1[0x2a6] = (uint)(iVar1 == 0);
  return param_1;
}


