/* Module: sfcdi.dll
   Function: SfCDBurn_Destroy
   Address: 5bf045a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDBurn_Destroy(struct HSFBURN__ *) */

int SfCDBurn_Destroy(HSFBURN__ *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0x45a0  25  ?SfCDBurn_Destroy@@YGHPAUHSFBURN__@@@Z */
  if (param_1 != (HSFBURN__ *)0x0) {
    if ((((byte)*(undefined4 *)(param_1 + 0x58) & 1) == 1) &&
       (*(HANDLE *)(param_1 + 0x108) != (HANDLE)0xffffffff)) {
      CloseHandle(*(HANDLE *)(param_1 + 0x108));
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
    if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x18));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return -0x7ff8ffa9;
}


