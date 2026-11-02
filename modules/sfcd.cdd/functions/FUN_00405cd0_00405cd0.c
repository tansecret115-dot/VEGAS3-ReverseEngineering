/* Module: sfcd.cdd
   Function: FUN_00405cd0
   Address: 00405cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405cd0(int *param_1,SIZE_T param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  SIZE_T dwBytes;
  UINT uFlags;
  
  if ((LPCVOID)param_1[1] == (LPCVOID)0x0) {
    pvVar1 = GlobalAlloc(0x42,param_2);
    pvVar2 = GlobalLock(pvVar1);
  }
  else {
    pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar1);
    uFlags = 0x42;
    dwBytes = *param_1 + param_2;
    pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
    pvVar1 = GlobalReAlloc(pvVar1,dwBytes,uFlags);
    pvVar2 = GlobalLock(pvVar1);
  }
  if (pvVar2 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  param_1[1] = (int)pvVar2;
  *param_1 = *param_1 + param_2;
  return 0;
}


