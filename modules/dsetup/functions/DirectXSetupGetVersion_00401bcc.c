/* Module: dsetup.dll
   Function: DirectXSetupGetVersion
   Address: 00401bcc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXSetupGetVersion(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x1bcc  11  DirectXSetupGetVersion */
  local_c = 0;
  local_8 = 0;
  bVar1 = FUN_00401a26(&local_c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00401a9c(&local_c);
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = local_c;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_8;
  }
  return 1;
}


