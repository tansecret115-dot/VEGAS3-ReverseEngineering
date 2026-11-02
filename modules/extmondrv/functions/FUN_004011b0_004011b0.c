/* Module: extmondrv.dll
   Function: FUN_004011b0
   Address: 004011b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004011b0(HMODULE param_1,int param_2)

{
  uchar local_104 [260];
  
  if (param_2 == 0) {
    FUN_00401160(param_1);
  }
  else if (param_2 == 1) {
    FUN_004010f0(param_1);
    local_104[0] = '\0';
    FUN_00414080(0,param_1,local_104,0x104);
    FUN_004140c0(0,(LPCSTR)local_104);
    FUN_00414080(1,param_1,local_104,0x104);
    FUN_004140c0(1,(LPCSTR)local_104);
    return 1;
  }
  return 1;
}


