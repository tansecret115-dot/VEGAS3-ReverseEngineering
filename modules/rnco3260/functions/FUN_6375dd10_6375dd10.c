/* Module: rnco3260.dll
   Function: FUN_6375dd10
   Address: 6375dd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375dd10(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,undefined4 *param_5,
            int param_6,uint param_7,int param_8)

{
  code *pcVar1;
  code *pcVar2;
  
  if (param_8 < 0) {
    param_5 = param_5 + -((param_7 * 2 + -1) * param_8);
  }
  pcVar2 = FUN_637487e0;
  if (DAT_637944e0 == 0) {
    pcVar2 = FUN_637340d0;
  }
  pcVar1 = FUN_63726be0;
  if (DAT_637944e0 == 0) {
    pcVar1 = FUN_6371a0d0;
  }
  FUN_6375ce30(param_5,0,0,param_6 * 2,param_7 * 2,param_8 << 2,4,param_1,param_2,param_3,0,0,
               param_6,param_7,param_4,pcVar1,pcVar2);
  return;
}


