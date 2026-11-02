/* Module: vegas30k.dll
   Function: FUN_0103c9a0
   Address: 0103c9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_0103c9a0(undefined4 *param_1)

{
  HANDLE hEvent;
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0xd8] = 3000000;
  *param_1 = &PTR_LAB_011dcfbc;
  param_1[1] = 3;
  param_1[2] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0xffffffff;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  puVar2 = param_1 + 0x10;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0xffffffff;
  param_1[0xf1] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[7] = 0;
  hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[0x50] = hEvent;
  SetEvent(hEvent);
  param_1[0xf2] = 0;
  param_1[9] = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x51));
  return param_1;
}


