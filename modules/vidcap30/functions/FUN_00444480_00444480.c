/* Module: vidcap30.exe
   Function: FUN_00444480
   Address: 00444480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444480(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0042f4b0(param_1,1);
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    uVar2 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0x10),0,0xffffffff,param_2);
    FUN_00444920(param_1,iVar1,uVar2,param_3);
  }
  FUN_0042f5d0(param_1,1);
  return;
}


