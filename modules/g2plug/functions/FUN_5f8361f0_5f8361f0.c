/* Module: g2plug.dll
   Function: FUN_5f8361f0
   Address: 5f8361f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8361f0(LPCSTR param_1,LPCLSID param_2)

{
  WCHAR local_50 [39];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_1,-1,local_50,0x28);
  local_2 = 0;
  CLSIDFromString(local_50,param_2);
  return;
}


