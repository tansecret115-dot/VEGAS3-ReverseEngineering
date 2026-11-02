/* Module: vidcap30.exe
   Function: FUN_00467da0
   Address: 00467da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00467da0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE hObject;
  DWORD DVar1;
  HANDLE hEvent;
  
  hEvent = (HANDLE)0x0;
  hObject = OpenEventA(0x1f0003,0,"RenderEvent");
  if (hObject != (HANDLE)0x0) {
    hEvent = OpenEventA(0x1f0003,0,"NonRenderEvent");
    if (hEvent == (HANDLE)0x0) {
      CloseHandle(hObject);
    }
    else {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
      while( true ) {
        EnterCriticalSection(lpCriticalSection);
        *(undefined4 *)(param_1 + 0xa8) = 1;
        SetEvent(hEvent);
        LeaveCriticalSection(lpCriticalSection);
        DVar1 = WaitForSingleObject(hObject,0xffffffff);
        if (DVar1 != 0) break;
        EnterCriticalSection(lpCriticalSection);
        if (*(int *)(param_1 + 0xb8) != 0) {
          LeaveCriticalSection(lpCriticalSection);
          break;
        }
        *(undefined4 *)(param_1 + 0xa8) = 2;
        SetEvent(hEvent);
        LeaveCriticalSection(lpCriticalSection);
        FUN_00467c50();
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  if (hEvent != (HANDLE)0x0) {
    SetEvent(hEvent);
    CloseHandle(hEvent);
  }
  *(undefined4 *)(param_1 + 0xa8) = 3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return;
}


