/* Module: sfppack2.dll
   Function: FUN_5ccdd620
   Address: 5ccdd620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ccdd620(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 6)) {
    this = (int *)(param_1 + -0x160);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cd60dec + param_2 * 0x1c);
    if (iVar1 == 0) {
      FUN_5ccdd3e0(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


