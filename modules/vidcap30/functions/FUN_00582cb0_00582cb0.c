/* Module: vidcap30.exe
   Function: FUN_00582cb0
   Address: 00582cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00582cb0(undefined4 param_1,LPWSTR param_2)

{
  CHAR local_20 [32];
  
  wsprintfA(local_20,"%d",param_1);
  MultiByteToWideChar(0,0,local_20,-1,param_2,0x20);
  return;
}


