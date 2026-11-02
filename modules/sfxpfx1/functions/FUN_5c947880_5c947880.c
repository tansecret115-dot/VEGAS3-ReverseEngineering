/* Module: sfxpfx1.dll
   Function: FUN_5c947880
   Address: 5c947880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c947880(int param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 7)) {
    this = (int *)(param_1 + -0x4b0);
    iVar1 = (**(code **)(*this + 0x10))(this,&DAT_5c99655c + param_2 * 0x34);
    if (iVar1 == 0) {
      FUN_5c947640(this,100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


