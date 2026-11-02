/* Module: sfppack3.dll
   Function: FUN_5cc42050
   Address: 5cc42050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc42050(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xd)) {
    this = (int *)(param_1 + -0x3870);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cc9444c + param_2 * 0x22c);
    if (iVar1 == 0) {
      FUN_5cc41d80(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


