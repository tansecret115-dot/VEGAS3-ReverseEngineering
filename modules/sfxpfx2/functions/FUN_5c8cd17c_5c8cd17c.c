/* Module: sfxpfx2.dll
   Function: FUN_5c8cd17c
   Address: 5c8cd17c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8cd17c(undefined4 param_1,LPWSTR param_2)

{
  CHAR local_24 [32];
  
  wsprintfA(local_24,"%d",param_1);
  MultiByteToWideChar(0,0,local_24,-1,param_2,0x20);
  return;
}


