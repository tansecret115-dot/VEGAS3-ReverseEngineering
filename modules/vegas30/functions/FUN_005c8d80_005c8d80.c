/* Module: vegas30.exe
   Function: FUN_005c8d80
   Address: 005c8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c8d80(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  FUN_005b83b0(param_1,1);
  uVar2 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0x24),0,0xffffffff,param_2);
  uVar2 = FUN_005c8970(param_1,iVar1,uVar2,param_3,1);
  FUN_005b84d0(param_1,1);
  return uVar2;
}


