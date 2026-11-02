/* Module: sfpublish.dll
   Function: FUN_00416d30
   Address: 00416d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416d30(HMODULE param_1,uchar *param_2,uint param_3)

{
  DWORD DVar1;
  uchar local_104 [260];
  
  *param_2 = '\0';
  DVar1 = GetModuleFileNameA(param_1,(LPSTR)local_104,0x104);
  if (DVar1 != 0) {
    FUN_00416a80(local_104,param_2,param_3);
  }
  return;
}


