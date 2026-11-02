/* Module: vegas30k.dll
   Function: FUN_011b0c70
   Address: 011b0c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b0c70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xa4) + -1;
  *(int *)(param_1 + 0xa4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = FUN_011aafa0(param_1);
    FUN_011aaf70(param_1,uVar2 & 0xfffffffe);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}


