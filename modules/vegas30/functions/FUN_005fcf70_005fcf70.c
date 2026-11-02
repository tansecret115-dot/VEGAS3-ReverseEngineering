/* Module: vegas30.exe
   Function: FUN_005fcf70
   Address: 005fcf70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fcf70(undefined4 param_1,tWAVEFORMATEX *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ulong unaff_retaddr;
  
  _DAT_0064b15c = param_1;
  Mixer_SetContext(&DAT_0064b15c);
  Mixer_StartRender(param_2,CONCAT44(param_5,param_4),CONCAT44(param_7,param_6),unaff_retaddr);
  return;
}


