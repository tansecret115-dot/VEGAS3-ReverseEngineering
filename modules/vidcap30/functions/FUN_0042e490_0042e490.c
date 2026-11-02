/* Module: vidcap30.exe
   Function: FUN_0042e490
   Address: 0042e490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0042e490(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0042f4b0(param_1,1);
  do {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    *(uint *)(param_1 + 0x1d8) = uVar1 + 1;
    iVar4 = *(int *)(param_1 + 0x1dc) + (uint)(0xfffffffe < uVar1);
    *(int *)(param_1 + 0x1dc) = iVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x1d8);
    iVar3 = FUN_00444600(param_1,uVar2,iVar4);
  } while (iVar3 != 0);
  FUN_0042f5d0(param_1,1);
  return CONCAT44(iVar4,uVar2);
}


