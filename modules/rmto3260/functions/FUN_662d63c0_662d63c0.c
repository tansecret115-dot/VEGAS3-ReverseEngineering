/* Module: rmto3260.dll
   Function: FUN_662d63c0
   Address: 662d63c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d63c0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_662f06a0(puVar1);
  }
  param_1[1] = (int)this;
  if (this != (void *)0x0) {
    iVar2 = FUN_662f0770(this,param_2);
    return iVar2;
  }
  return -0x7ff8fff2;
}


