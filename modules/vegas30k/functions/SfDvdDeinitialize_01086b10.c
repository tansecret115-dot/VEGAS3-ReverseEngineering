/* Module: vegas30k.dll
   Function: SfDvdDeinitialize
   Address: 01086b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdDeinitialize(void *) */

long SfDvdDeinitialize(void *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0x86b10  363  ?SfDvdDeinitialize@@YGJPAX@Z */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (*(int *)((int)param_1 + 0x48) != 0) {
    _SfList_Destroy_4(*(int *)((int)param_1 + 0x48));
  }
  if (*(int *)((int)param_1 + 0x4c) != 0) {
    _SfList_Destroy_4(*(int *)((int)param_1 + 0x4c));
  }
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 0;
}


