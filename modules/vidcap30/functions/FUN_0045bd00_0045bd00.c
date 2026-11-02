/* Module: vidcap30.exe
   Function: FUN_0045bd00
   Address: 0045bd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0045bd00(int param_1,int param_2,int param_3)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  pMem = *(LPCVOID *)(*(int *)(param_2 + 8) + param_3 * 4);
  _SfList_DeleteList_16(param_2,param_3,1,0);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


