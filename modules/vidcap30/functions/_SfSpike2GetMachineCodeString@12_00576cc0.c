/* Module: vidcap30.exe
   Function: _SfSpike2GetMachineCodeString@12
   Address: 00576cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfSpike2GetMachineCodeString_12(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x176cc0  623  _SfSpike2GetMachineCodeString@12 */
  uVar1 = _SfSpike2GetMachineCode_4(param_1);
  FUN_00575020(uVar1,param_2,0xb);
  return;
}


