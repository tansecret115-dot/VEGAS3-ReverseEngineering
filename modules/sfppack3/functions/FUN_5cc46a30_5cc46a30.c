/* Module: sfppack3.dll
   Function: FUN_5cc46a30
   Address: 5cc46a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc46a30(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 10)) {
    this = (int *)(param_1 + -0x2218);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cc961b4 + param_2 * 0x128);
    if (iVar1 == 0) {
      FUN_5cc467d0(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


