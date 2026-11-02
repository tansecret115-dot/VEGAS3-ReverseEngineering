/* Module: vidcap30.exe
   Function: FUN_0052f1a0
   Address: 0052f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052f1a0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  UnmapViewOfFile((LPCVOID)param_1[1]);
  CloseHandle((HANDLE)*param_1);
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


