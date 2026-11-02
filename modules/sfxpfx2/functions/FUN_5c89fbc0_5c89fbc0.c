/* Module: sfxpfx2.dll
   Function: FUN_5c89fbc0
   Address: 5c89fbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c89fbc0(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 7)) {
    this = (int *)(param_1 + -0x540);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5c8e7cdc + param_2 * 0x34);
    if (iVar1 == 0) {
      FUN_5c89f980(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


