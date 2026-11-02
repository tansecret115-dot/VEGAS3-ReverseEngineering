/* Module: vegas30.exe
   Function: FUN_004b2d00
   Address: 004b2d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2d00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18 [6];
  
  local_18[0] = param_3;
  _SFSMPTE_NanoToSMPTE_12(param_1,param_2,local_18);
  _SFSMPTE_SMPTEToFrameCount_4(local_18);
  return;
}


