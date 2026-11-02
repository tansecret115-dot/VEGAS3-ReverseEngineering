/* Module: vegas30.exe
   Function: FUN_005c9450
   Address: 005c9450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c9450(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_005b83b0(param_1,0);
  uVar1 = _SfList_FindSpecificItemRange_16
                    (*(undefined4 *)(*(int *)(param_2 + 8) + 0x24),0,0xffffffff,param_2);
  FUN_005b84d0(param_1,0);
  return uVar1;
}


