/* Module: vegas30k.dll
   Function: _SfMetric_DeleteAll@8
   Address: 01055790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_DeleteAll_8(undefined4 param_1,uint param_2)

{
  uint uVar1;
  CHAR local_104 [260];
  
                    /* 0x55790  1116  _SfMetric_DeleteAll@8 */
  uVar1 = param_2 >> 0x10 & 0xff;
  wsprintfA(local_104,"Software\\Sonic Foundry\\%s\\%d.%d\\Metrics",param_1,param_2 >> 0x18,uVar1);
  _SfRegDeleteKey_8(&DAT_80000002,local_104);
  wsprintfA(local_104,"Software\\Sonic Foundry\\%s\\%d.%d\\Metrics",param_1,param_2 >> 0x18,uVar1);
  _SfRegDeleteKey_8(0x80000001,local_104);
  return 0;
}


