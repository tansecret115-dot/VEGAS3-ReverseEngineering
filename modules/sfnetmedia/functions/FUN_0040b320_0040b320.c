/* Module: sfnetmedia.dll
   Function: FUN_0040b320
   Address: 0040b320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040b320(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HANDLE hObject;
  HGLOBAL pvVar2;
  
  pvVar1 = (LPCVOID)param_1[0x17];
  *param_1 = &PTR_LAB_0043566c;
  param_1[7] = &PTR_LAB_0043564c;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  pvVar1 = (LPCVOID)param_1[0x18];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  param_1[0x1f] = &PTR_LAB_0043569c;
  if (param_1[0x26] != 0) {
    hObject = *(HANDLE *)(param_1[0x26] + 0xda4);
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
      *(undefined4 *)(param_1[0x26] + 0xda4) = 0;
    }
    if (*(HANDLE *)(param_1[0x26] + 0xdac) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1[0x26] + 0xdac));
      *(undefined4 *)(param_1[0x26] + 0xdac) = 0;
    }
  }
  return;
}


