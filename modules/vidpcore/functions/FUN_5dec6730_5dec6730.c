/* Module: vidpcore.dll
   Function: FUN_5dec6730
   Address: 5dec6730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dec6730(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = s__I64d_5df3e3e4;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
    if ((param_5 & 1) == 0) {
      pcVar2 = (&PTR_s__I64d_5df34968)[uVar1];
    }
    else {
      pcVar2 = (&PTR_s__I64d_5df349b0)[uVar1];
    }
  }
  FUN_5dec61e0(param_1,param_2,param_3,param_4,pcVar2,param_5);
  return;
}


