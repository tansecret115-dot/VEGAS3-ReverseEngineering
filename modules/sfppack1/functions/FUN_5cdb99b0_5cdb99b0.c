/* Module: sfppack1.dll
   Function: FUN_5cdb99b0
   Address: 5cdb99b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdb99b0(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 6)) {
    this = (int *)(param_1 + -0x368);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5ce1f948 + param_2 * 0x38);
    if (iVar1 == 0) {
      FUN_5cdb9770(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


