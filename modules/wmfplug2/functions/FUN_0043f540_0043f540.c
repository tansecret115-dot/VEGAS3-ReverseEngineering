/* Module: wmfplug2.dll
   Function: FUN_0043f540
   Address: 0043f540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f540(LPCSTR param_1,LPCLSID param_2)

{
  WCHAR local_50 [39];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_1,-1,local_50,0x28);
  local_2 = 0;
  CLSIDFromString(local_50,param_2);
  return;
}


