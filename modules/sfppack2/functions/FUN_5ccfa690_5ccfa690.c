/* Module: sfppack2.dll
   Function: FUN_5ccfa690
   Address: 5ccfa690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ccfa690(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xb)) {
    this = (int *)(param_1 + -400);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cd61f84 + param_2 * 0xa4);
    if (iVar1 == 0) {
      FUN_5ccfa430(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


