/* Module: g2plug.dll
   Function: FUN_5f80e980
   Address: 5f80e980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80e980(LPCSTR param_1,LPCLSID param_2)

{
  WCHAR local_100 [127];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_1,-1,local_100,0x80);
  local_2 = 0;
  CLSIDFromString(local_100,param_2);
  return;
}


