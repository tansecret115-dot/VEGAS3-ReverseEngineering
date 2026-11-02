/* Module: rnco3260.dll
   Function: FUN_6375dd90
   Address: 6375dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375dd90(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,undefined4 *param_5,
            int param_6,uint param_7,int param_8)

{
  code *pcVar1;
  code *pcVar2;
  
  if (param_8 < 0) {
    param_5 = (undefined4 *)((int)param_5 + (param_7 * 2 + -1) * param_8 * -3);
  }
  pcVar2 = FUN_6374e530;
  if (DAT_637944e0 == 0) {
    pcVar2 = FUN_63739be0;
  }
  pcVar1 = FUN_6372a8c0;
  if (DAT_637944e0 == 0) {
    pcVar1 = FUN_6371db30;
  }
  FUN_6375ce30(param_5,0,0,param_6 * 2,param_7 * 2,param_8 * 3,3,param_1,param_2,param_3,0,0,param_6
               ,param_7,param_4,pcVar1,pcVar2);
  return;
}


