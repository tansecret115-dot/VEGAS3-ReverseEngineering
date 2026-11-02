/* Module: vegas30k.dll
   Function: _SfMetric_DeleteAllService@8
   Address: 01055830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_DeleteAllService_8(undefined4 param_1,uint param_2)

{
  CHAR local_104 [260];
  
                    /* 0x55830  1117  _SfMetric_DeleteAllService@8 */
  wsprintfA(local_104,"SYSTEM\\CurrentControlSet\\Services\\%s\\%d.%d\\Metrics",param_1,
            param_2 >> 0x18,param_2 >> 0x10 & 0xff);
  _SfRegDeleteKey_8(&DAT_80000002,local_104);
  return 0;
}


