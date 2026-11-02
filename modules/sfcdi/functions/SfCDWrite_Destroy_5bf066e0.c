/* Module: sfcdi.dll
   Function: SfCDWrite_Destroy
   Address: 5bf066e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDWrite_Destroy(struct HSFCDWRITE__ *) */

long SfCDWrite_Destroy(HSFCDWRITE__ *param_1)

{
  HANDLE hObject;
  HGLOBAL pvVar1;
  
                    /* 0x66e0  53  ?SfCDWrite_Destroy@@YGJPAUHSFCDWRITE__@@@Z */
  if (param_1 == (HSFCDWRITE__ *)0x0) {
    return 0;
  }
  hObject = *(HANDLE *)(param_1 + 0x30);
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  if (*(LPCVOID *)(param_1 + 0x1cec) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1cec));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1cec));
    GlobalFree(pvVar1);
  }
  if (*(HANDLE *)(param_1 + 0x1cf4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1cf4));
  }
  if (*(HANDLE *)(param_1 + 0x1cf8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1cf8));
  }
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 0;
}


