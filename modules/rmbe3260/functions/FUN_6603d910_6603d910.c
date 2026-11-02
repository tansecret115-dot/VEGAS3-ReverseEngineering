/* Module: rmbe3260.dll
   Function: FUN_6603d910
   Address: 6603d910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6603d910(undefined4 *param_1)

{
  LPDWORD lpThreadId;
  HANDLE hThread;
  int iVar1;
  int local_8;
  
  FUN_6605c3e0(param_1 + 1);
  *param_1 = &PTR_FUN_66067fc8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_6605cda0(param_1 + 0xd);
  param_1[0x11] = 0;
  CMap<>(param_1 + 0x12,10);
  FUN_6605cda0(param_1 + 0x19);
  lpThreadId = param_1 + 0x29;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *lpThreadId = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = &PTR_FUN_66067fb8;
  hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_6603e4f0,param_1,0,lpThreadId);
  param_1[0x28] = hThread;
  SetThreadPriority(hThread,0);
  local_8 = 0;
  iVar1 = PostThreadMessageA(*lpThreadId,0x402,0,0);
  while ((iVar1 == 0 && (local_8 < 10))) {
    Sleep(100);
    iVar1 = PostThreadMessageA(*lpThreadId,0x402,0,0);
    local_8 = local_8 + 1;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  return param_1;
}


