/* Module: vidcap30.exe
   Function: FUN_004443a0
   Address: 004443a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004443a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = -1;
  iVar6 = -1;
  FUN_0042f4b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar4 = *(uint *)(param_1 + 0x20);
    if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (uVar4 <= uVar3)))) {
      iVar5 = uVar3 - uVar4;
      iVar6 = (iVar1 - iVar2) - (uint)(uVar3 < uVar4);
    }
  }
  FUN_0042f5d0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  return CONCAT44(iVar6,iVar5);
}


