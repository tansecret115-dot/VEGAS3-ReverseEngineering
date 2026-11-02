/* Module: mp3plug.dll
   Function: FUN_5f681ba0
   Address: 5f681ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f681ba0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


