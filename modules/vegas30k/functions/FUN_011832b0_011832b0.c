/* Module: vegas30k.dll
   Function: FUN_011832b0
   Address: 011832b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011832b0(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = Mixer_Prepare();
  if (-1 < lVar1) {
    (**(code **)(*DAT_012b09c8 + 0xfc))(DAT_012b09c8,param_1,param_2);
  }
  return;
}


