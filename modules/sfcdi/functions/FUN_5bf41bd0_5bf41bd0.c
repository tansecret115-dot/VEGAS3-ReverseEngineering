/* Module: sfcdi.dll
   Function: FUN_5bf41bd0
   Address: 5bf41bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf41bd0(ushort *param_1,LPSTR param_2)

{
  _TIME_ZONE_INFORMATION local_ac;
  
  wsprintfA(param_2,"%04u%02u%02u%02u%02u%02u00",(uint)*param_1,(uint)param_1[1],(uint)param_1[3],
            (uint)param_1[4],(uint)param_1[5],(uint)param_1[6]);
  GetTimeZoneInformation(&local_ac);
  param_2[0x10] =
       ((char)(local_ac.Bias / 0xf) + (char)(local_ac.Bias >> 0x1f)) -
       (char)((longlong)local_ac.Bias * 0x88888889 >> 0x3f);
  return (int)((longlong)local_ac.Bias * -0x77777777);
}


