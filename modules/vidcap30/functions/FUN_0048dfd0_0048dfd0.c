/* Module: vidcap30.exe
   Function: FUN_0048dfd0
   Address: 0048dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048dfd0(undefined4 param_1,LPCVOID param_2)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  if (param_2 == (LPCVOID)0x0) {
    return 0;
  }
  if (*(int *)((int)param_2 + 0x424) != 0) {
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_2 + 0x424) + 0x16);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_2 + 0x424) + 0x16));
      GlobalFree(pvVar2);
    }
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_2 + 0x424) + 0x3e);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_2 + 0x424) + 0x3e));
      GlobalFree(pvVar2);
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_2 + 0x424));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_2 + 0x424));
    GlobalFree(pvVar2);
  }
  if (*(int *)((int)param_2 + 0x428) != 0) {
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_2 + 0x428) + 0x48);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_2 + 0x428) + 0x48));
      GlobalFree(pvVar2);
    }
    if ((LPCVOID)**(undefined4 **)((int)param_2 + 0x428) != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)**(undefined4 **)((int)param_2 + 0x428));
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)**(undefined4 **)((int)param_2 + 0x428));
      GlobalFree(pvVar2);
    }
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_2 + 0x428) + 0x94);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_2 + 0x428) + 0x94));
      GlobalFree(pvVar2);
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_2 + 0x428));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_2 + 0x428));
    GlobalFree(pvVar2);
  }
  pvVar2 = GlobalHandle(param_2);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_2);
  GlobalFree(pvVar2);
  return 0;
}


