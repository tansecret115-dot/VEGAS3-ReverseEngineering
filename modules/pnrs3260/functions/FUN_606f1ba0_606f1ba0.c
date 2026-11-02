/* Module: pnrs3260.dll
   Function: FUN_606f1ba0
   Address: 606f1ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_606f1ba0(void *this,uint param_1,undefined4 param_2)

{
  int *this_00;
  undefined4 *puVar1;
  int iVar2;
  
  this_00 = (int *)FUN_606f1e90(*(void **)this,param_1);
  if (this_00 == (int *)0x0) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = (int *)FUN_606f2170(puVar1);
    }
    FUN_606f1e60(*(void **)this,param_1,this_00);
  }
  if ((*(int *)((int)this + 4) == 0) &&
     (iVar2 = (**(code **)(*this_00 + 0x18))(param_2,0), iVar2 != 0)) {
    return;
  }
  FUN_606f2260(this_00,param_2);
  return;
}


