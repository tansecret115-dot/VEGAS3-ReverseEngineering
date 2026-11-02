/* Module: vidcap30.exe
   Function: _SfSpike2GetMachineCode@4
   Address: 00576c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSpike2GetMachineCode_4(void)

{
  undefined4 uVar1;
  undefined4 local_4;
  
                    /* 0x176c70  622  _SfSpike2GetMachineCode@4 */
  local_4 = 0;
  if (DAT_00663558 != 0) {
    return DAT_00663554;
  }
  FUN_00576ce0(&local_4);
  uVar1 = FUN_00575fc0(local_4,0);
  DAT_00663554 = FUN_00576000(0,uVar1);
  DAT_00663558 = 1;
  return DAT_00663554;
}


