/* Module: vidcap30.exe
   Function: FUN_00443640
   Address: 00443640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443640(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8000ffff;
  FUN_0042f4b0(param_1,1);
  uVar1 = FUN_0042e4f0(param_1);
  iVar2 = _SfList_FindSpecificItemRange_16(uVar1,0,0xffffffff,param_2);
  if (-1 < iVar2) {
    uVar3 = FUN_00444810(param_1,iVar2,0);
  }
  FUN_0042f5d0(param_1,1);
  return uVar3;
}


