/* Module: erv33260.dll
   Function: FUN_6707d1b0
   Address: 6707d1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6707d1b0(int *param_1,int param_2)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  this = (void *)FUN_67072130(0x26c);
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_6707e1a0(this,param_2);
  }
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


