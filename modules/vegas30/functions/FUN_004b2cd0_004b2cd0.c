/* Module: vegas30.exe
   Function: FUN_004b2cd0
   Address: 004b2cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2cd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18 [6];
  
  local_18[0] = param_2;
  _SFSMPTE_FrameCountToSMPTE_8(local_18,param_1);
  _SFSMPTE_SMPTEToNanos_4(local_18);
  return;
}


