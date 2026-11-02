/* Module: vidcap30.exe
   Function: FUN_00499c50
   Address: 00499c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00499c50(HINSTANCE param_1,LPCSTR param_2)

{
  UnregisterClassA(param_2,param_1);
  return 1;
}


