/* Module: vegas30.exe
   Function: _SfSpike2GetMachineCode@4
   Address: 00607720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSpike2GetMachineCode_4(void)

{
  undefined4 uVar1;
  undefined4 local_4;
  
                    /* 0x207720  42  _SfSpike2GetMachineCode@4 */
  local_4 = 0;
  if (DAT_0065f610 != 0) {
    return DAT_0065f60c;
  }
  FUN_00607790(&local_4);
  uVar1 = FUN_00606a70(local_4,0);
  DAT_0065f60c = FUN_00606ab0(0,uVar1);
  DAT_0065f610 = 1;
  return DAT_0065f60c;
}


