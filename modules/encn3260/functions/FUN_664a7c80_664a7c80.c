/* Module: encn3260.dll
   Function: FUN_664a7c80
   Address: 664a7c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a7c80(int *param_1,HWND param_2,DWORD param_3)

{
  HMODULE hInstance;
  LPVOID lpParam;
  HWND local_28 [9];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
  FUN_664ac540();
  lpParam = (LPVOID)0x0;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_28[0] = CreateWindowExA(0,PTR_s_RMAVideoClass_664e33a4,PTR_s_RMAVideoWindow_664e33a8,param_3
                                ,0,0,0,0,param_2,(HMENU)0x0,hInstance,lpParam);
  if (local_28[0] == (HWND)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
    return 0x80004005;
  }
  (**(code **)(*param_1 + 0xc))(param_1,local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
  return 0;
}


