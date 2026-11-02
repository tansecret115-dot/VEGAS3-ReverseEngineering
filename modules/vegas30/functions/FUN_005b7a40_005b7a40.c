/* Module: vegas30.exe
   Function: FUN_005b7a40
   Address: 005b7a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b7a40(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


