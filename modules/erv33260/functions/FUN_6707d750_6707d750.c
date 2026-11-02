/* Module: erv33260.dll
   Function: FUN_6707d750
   Address: 6707d750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707d750(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    FUN_6707d6f0((int)this,1,1);
    return;
  }
  iVar1 = 0;
  uVar2 = param_2 - 1U >> 1;
  if (uVar2 != 0) {
    do {
      FUN_6707d6f0((int)this,0,1);
      FUN_6707d6f0((int)this,param_1 >> (((char)uVar2 - (char)iVar1) - 1U & 0x1f) & 1,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  FUN_6707d6f0((int)this,1,1);
  return;
}


