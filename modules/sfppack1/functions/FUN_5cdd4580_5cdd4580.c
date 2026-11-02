/* Module: sfppack1.dll
   Function: FUN_5cdd4580
   Address: 5cdd4580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdd4580(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x18)) {
    this = (int *)(param_1 + -0x288);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5ce21d2c + param_2 * 0x34);
    if (iVar1 == 0) {
      FUN_5cdd4340(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


