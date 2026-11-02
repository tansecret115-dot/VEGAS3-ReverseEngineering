/* Module: vegas30.exe
   Function: FUN_004ad9f0
   Address: 004ad9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ad9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_6;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  FUN_004e9f70(param_1,0x14,"DDSMakeEmptyEvent");
  FUN_004ea250(param_1,param_2,1,1);
  FUN_005b83b0(param_1,1);
  param_6 = (undefined4 *)0x0;
  iVar2 = FUN_005c9cc0(&param_6,param_1,param_2,param_5,param_3,param_4,0,0,0);
  FUN_005b84d0(param_1,1);
  FUN_004eb2b0(param_1);
  FUN_004ea040(param_1,iVar2 < 0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_6;
  }
  return iVar2;
}


