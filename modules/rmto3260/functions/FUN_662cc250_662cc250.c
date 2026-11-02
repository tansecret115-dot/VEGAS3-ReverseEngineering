/* Module: rmto3260.dll
   Function: FUN_662cc250
   Address: 662cc250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cc250(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    FUN_662f06c0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_662f06a0(puVar2);
  }
  *(void **)(param_1 + 0x18) = this;
  if (this != (void *)0x0) {
    iVar3 = FUN_662f0700(this,param_2);
    return iVar3;
  }
  return -0x7ff8fff2;
}


