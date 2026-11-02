/* Module: vidcap30.exe
   Function: FUN_0052f400
   Address: 0052f400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052f400(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


