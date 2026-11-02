/* Module: vegas30k.dll
   Function: FUN_011aed20
   Address: 011aed20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011aed20(LPVOID param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x810) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    return 0x8007000e;
  }
  ResetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x818) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    return 0x8007000e;
  }
  ResetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x81c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    return 0x8007000e;
  }
  ResetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x820) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x81c));
    *(undefined4 *)((int)param_1 + 0x81c) = 0;
    return 0x8007000e;
  }
  ResetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x814) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x81c));
    *(undefined4 *)((int)param_1 + 0x81c) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x820));
    *(undefined4 *)((int)param_1 + 0x820) = 0;
    return 0x8007000e;
  }
  ResetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x828) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x81c));
    *(undefined4 *)((int)param_1 + 0x81c) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x820));
    *(undefined4 *)((int)param_1 + 0x820) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x814));
    *(undefined4 *)((int)param_1 + 0x814) = 0;
    return 0x8007000e;
  }
  ResetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x82c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x81c));
    *(undefined4 *)((int)param_1 + 0x81c) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x820));
    *(undefined4 *)((int)param_1 + 0x820) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x814));
    *(undefined4 *)((int)param_1 + 0x814) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x828));
    *(undefined4 *)((int)param_1 + 0x828) = 0;
    return 0x8007000e;
  }
  SetEvent(pvVar1);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x830) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x81c));
    *(undefined4 *)((int)param_1 + 0x81c) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x820));
    *(undefined4 *)((int)param_1 + 0x820) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x814));
    *(undefined4 *)((int)param_1 + 0x814) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x828));
    *(undefined4 *)((int)param_1 + 0x828) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x82c));
    *(undefined4 *)((int)param_1 + 0x82c) = 0;
    return 0x8007000e;
  }
  SetEvent(pvVar1);
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_011af260,param_1,0,
                        (LPDWORD)((int)param_1 + 0x838));
  *(HANDLE *)((int)param_1 + 0x834) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x810));
    *(undefined4 *)((int)param_1 + 0x810) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x818));
    *(undefined4 *)((int)param_1 + 0x818) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x81c));
    *(undefined4 *)((int)param_1 + 0x81c) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x820));
    *(undefined4 *)((int)param_1 + 0x820) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x814));
    *(undefined4 *)((int)param_1 + 0x814) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x828));
    *(undefined4 *)((int)param_1 + 0x828) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x82c));
    *(undefined4 *)((int)param_1 + 0x82c) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x830));
    *(undefined4 *)((int)param_1 + 0x830) = 0;
    return 0x8007000e;
  }
  *(undefined4 *)((int)param_1 + 0x690) = 0;
  *(undefined4 *)((int)param_1 + 0x694) = 0;
  *(undefined4 *)((int)param_1 + 0x8b0) = 1;
  return 0;
}


