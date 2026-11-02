/* Module: aifplug.dll
   Function: FUN_5fbd8310
   Address: 5fbd8310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd8310(HANDLE param_1,LPCVOID param_2,undefined4 *param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  *param_3 = 0;
  if (param_2 != (LPCVOID)0x0) {
    iVar1 = FUN_5fbe0150(param_1,0x64696361,param_2,0x18,&local_4);
    if (iVar1 < 0) {
      return iVar1;
    }
    *param_3 = 0x20;
  }
  return 0;
}


