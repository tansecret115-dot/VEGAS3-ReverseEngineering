/* Module: sfmarket2.dll
   Function: FUN_00420820
   Address: 00420820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420820(HMODULE param_1,uchar *param_2,uint param_3)

{
  DWORD DVar1;
  uchar local_104 [260];
  
  *param_2 = '\0';
  DVar1 = GetModuleFileNameA(param_1,(LPSTR)local_104,0x104);
  if (DVar1 != 0) {
    FUN_00420570(local_104,param_2,param_3);
  }
  return;
}


