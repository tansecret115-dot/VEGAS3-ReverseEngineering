/* Module: Setup.exe
   Function: _SfSpike2GetMachineCode@4
   Address: 0042ed50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSpike2GetMachineCode_4(void)

{
  uint uVar1;
  DWORD local_4;
  
                    /* 0x2ed50  336  _SfSpike2GetMachineCode@4 */
  local_4 = 0;
  if (DAT_0044f3a8 != 0) {
    return DAT_0044f3a4;
  }
  FUN_0042edc0(&local_4);
  uVar1 = FUN_0042e0a0(local_4,0);
  DAT_0044f3a4 = FUN_0042e0e0(0,uVar1);
  DAT_0044f3a8 = 1;
  return DAT_0044f3a4;
}


