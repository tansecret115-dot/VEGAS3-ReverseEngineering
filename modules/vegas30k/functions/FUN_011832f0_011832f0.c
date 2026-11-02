/* Module: vegas30k.dll
   Function: FUN_011832f0
   Address: 011832f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011832f0(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = Mixer_Prepare();
  if (-1 < lVar1) {
    iVar2 = FUN_011832b0(param_1,param_2);
    if (-1 < iVar2) {
      (**(code **)(*DAT_012b09c8 + 0x114))(DAT_012b09c8,param_1,param_2);
    }
  }
  return;
}


