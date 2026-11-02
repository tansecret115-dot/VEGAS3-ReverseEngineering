/* Module: Setup.exe
   Function: _SfSpike2GetMachineCodeString@12
   Address: 0042eda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfSpike2GetMachineCodeString_12(undefined4 param_1,uchar *param_2)

{
  uint uVar1;
  
                    /* 0x2eda0  337  _SfSpike2GetMachineCodeString@12 */
  uVar1 = _SfSpike2GetMachineCode_4();
  FUN_0042f120(uVar1,param_2);
  return;
}


