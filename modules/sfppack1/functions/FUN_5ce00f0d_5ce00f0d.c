/* Module: sfppack1.dll
   Function: FUN_5ce00f0d
   Address: 5ce00f0d
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce00f0d(undefined4 param_1,LPWSTR param_2)

{
  CHAR local_24 [32];
  
  wsprintfA(local_24,"%d",param_1);
  MultiByteToWideChar(0,0,local_24,-1,param_2,0x20);
  return;
}


