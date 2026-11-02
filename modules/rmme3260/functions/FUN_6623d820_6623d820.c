/* Module: rmme3260.dll
   Function: FUN_6623d820
   Address: 6623d820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623d820(int *param_1,HWND param_2,DWORD param_3)

{
  HMODULE hInstance;
  LPVOID lpParam;
  HWND local_28 [9];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
  FUN_662421d0();
  lpParam = (LPVOID)0x0;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_28[0] = CreateWindowExA(0,PTR_s_RMAVideoClass_6626fe84,PTR_s_RMAVideoWindow_6626fe88,param_3
                                ,0,0,0,0,param_2,(HMENU)0x0,hInstance,lpParam);
  if (local_28[0] == (HWND)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
    return 0x80004005;
  }
  (**(code **)(*param_1 + 0xc))(param_1,local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
  return 0;
}


