/* Module: vidcap30.exe
   Function: FUN_0048f420
   Address: 0048f420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048f420(undefined4 param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_2);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_2);
  GlobalFree(pvVar1);
  return;
}


