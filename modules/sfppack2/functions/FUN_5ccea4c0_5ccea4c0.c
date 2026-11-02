/* Module: sfppack2.dll
   Function: FUN_5ccea4c0
   Address: 5ccea4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ccea4c0(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 6)) {
    this = (int *)(param_1 + -0x4d8);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cd615e4 + param_2 * 0xd4);
    if (iVar1 == 0) {
      FUN_5ccea260(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


