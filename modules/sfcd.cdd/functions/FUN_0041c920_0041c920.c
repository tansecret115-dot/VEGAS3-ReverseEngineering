/* Module: sfcd.cdd
   Function: FUN_0041c920
   Address: 0041c920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c920(HSFCD__ *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x160);
  uVar1 = cdr_GetSpeed(param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  FUN_0041c2a0(param_1,0);
  if (*(uint *)(iVar2 + 0x234) == uVar1) {
    return 0;
  }
  *(uint *)(iVar2 + 0x234) = uVar1;
  iVar2 = FUN_0041c420(param_1,uVar1,0);
  return iVar2;
}


