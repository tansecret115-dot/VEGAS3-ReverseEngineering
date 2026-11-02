/* Module: vegas30.exe
   Function: FUN_005cb3d0
   Address: 005cb3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb3d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_005b83b0(param_1,0);
  uVar3 = 0xffffffff;
  uVar2 = 0;
  uVar1 = FUN_005b87b0(param_1);
  uVar1 = _SfList_FindSpecificItemRange_16(uVar1,uVar2,uVar3,param_2);
  FUN_005b84d0(param_1,0);
  return uVar1;
}


