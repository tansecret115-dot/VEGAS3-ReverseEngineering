/* Module: sfppack3.dll
   Function: FUN_5cc3aff0
   Address: 5cc3aff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc3aff0(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    this = (int *)(param_1 + -0x2310);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cc938cc + param_2 * 0x118);
    if (iVar1 == 0) {
      FUN_5cc3ad80(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


