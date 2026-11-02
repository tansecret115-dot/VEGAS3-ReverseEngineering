/* Module: sfcdi.dll
   Function: FUN_5bf41b20
   Address: 5bf41b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf41b20(char *param_1,char *param_2)

{
  _TIME_ZONE_INFORMATION local_ac;
  
  *param_2 = *param_1 + -0x6c;
  param_2[1] = param_1[2];
  param_2[2] = param_1[6];
  param_2[3] = param_1[8];
  param_2[4] = param_1[10];
  param_2[5] = param_1[0xc];
  GetTimeZoneInformation(&local_ac);
  param_2[6] = ((char)(local_ac.Bias / 0xf) + (char)(local_ac.Bias >> 0x1f)) -
               (char)((longlong)local_ac.Bias * 0x88888889 >> 0x3f);
  return (int)((longlong)local_ac.Bias * -0x77777777);
}


