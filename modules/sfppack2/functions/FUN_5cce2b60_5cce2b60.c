/* Module: sfppack2.dll
   Function: FUN_5cce2b60
   Address: 5cce2b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cce2b60(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xd)) {
    this = (int *)(param_1 + -0x6b8);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cd60f6c + param_2 * 0x58);
    if (iVar1 == 0) {
      FUN_5cce2920(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


