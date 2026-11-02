/* Module: sftrkfx1.dll
   Function: FUN_5cbb7dd0
   Address: 5cbb7dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbb7dd0(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 2)) {
    this = (int *)(param_1 + -0x110);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cc10020 + param_2 * 0x13);
    if (iVar1 == 0) {
      FUN_5cbb7b60(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


