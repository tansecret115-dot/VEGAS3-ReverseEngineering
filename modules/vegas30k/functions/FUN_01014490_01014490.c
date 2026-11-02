/* Module: vegas30k.dll
   Function: FUN_01014490
   Address: 01014490
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01014490(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  CHAR local_80 [128];
  
  FUN_010143e0(param_1,local_80);
  iVar1 = lstrcmpA(param_2,local_80);
  return iVar1 == 0;
}


