/* Module: sftrkfx1.dll
   Function: FUN_5cba7e40
   Address: 5cba7e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cba7e40(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xd)) {
    this = (int *)(param_1 + -0x388);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cc0f648 + param_2 * 0x29);
    if (iVar1 == 0) {
      FUN_5cba7bd0(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


