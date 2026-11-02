/* Module: sfppack2.dll
   Function: FUN_5ccd30f0
   Address: 5ccd30f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ccd30f0(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    this = (int *)(param_1 + -0xac0);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5cd5f49c + param_2 * 0x260);
    if (iVar1 == 0) {
      FUN_5ccd2e90(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


