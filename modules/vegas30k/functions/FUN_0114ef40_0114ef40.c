/* Module: vegas30k.dll
   Function: FUN_0114ef40
   Address: 0114ef40
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0114ef40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x20c))(param_1 + 0x1c8,param_2,param_3,param_5,param_4);
  FUN_0114edf0(param_1,param_2,param_3,iVar1);
  return iVar1 != 0;
}


