/* Module: vidcap30.exe
   Function: FUN_0042ebb0
   Address: 0042ebb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0042ebb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0042f4b0(param_1,0);
  iVar3 = *(int *)(param_1 + 0x518) * 0x40;
  uVar1 = *(undefined4 *)(iVar3 + 0x428 + param_1);
  uVar2 = *(undefined4 *)(iVar3 + 0x42c + param_1);
  FUN_0042f5d0(param_1,0);
  return CONCAT44(uVar2,uVar1);
}


