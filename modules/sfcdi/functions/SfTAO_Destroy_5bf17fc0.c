/* Module: sfcdi.dll
   Function: SfTAO_Destroy
   Address: 5bf17fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfTAO_Destroy(void *) */

long SfTAO_Destroy(void *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
                    /* 0x17fc0  134  ?SfTAO_Destroy@@YGJPAX@Z */
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x94) != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x18) + 0x10))();
      SfCDBurn_Destroy(*(HSFBURN__ **)((int)param_1 + 0x94));
      *(undefined4 *)((int)param_1 + 0x94) = 0;
    }
    piVar1 = *(int **)((int)param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return 0;
}


