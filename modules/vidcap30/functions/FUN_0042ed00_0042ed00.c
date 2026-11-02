/* Module: vidcap30.exe
   Function: FUN_0042ed00
   Address: 0042ed00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0042ed00(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0042f4b0(param_1,0);
  iVar4 = *(int *)(param_1 + 0x518) * 0x40 + param_1;
  uVar1 = *(uint *)(iVar4 + 0x430);
  uVar2 = *(uint *)(iVar4 + 0x428);
  iVar3 = *(int *)(iVar4 + 0x42c);
  iVar4 = *(int *)(iVar4 + 0x434);
  FUN_0042f5d0(param_1,0);
  return CONCAT44((iVar4 - iVar3) - (uint)(uVar1 < uVar2),uVar1 - uVar2);
}


