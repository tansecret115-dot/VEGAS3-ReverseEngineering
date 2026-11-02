/* Module: pnrs3260.dll
   Function: FUN_606f1c10
   Address: 606f1c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_606f1c10(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  if (*(int *)(*(int *)this + 4) != 0) {
    local_8 = this;
    local_8 = FUN_606f20b0(*(int *)this);
    while (local_8 != (int *)0x0) {
      piVar1 = (int *)FUN_606f2110(*(void **)this,(int *)&local_8);
      iVar2 = (**(code **)(*piVar1 + 0x18))(param_1,0);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0xc))(iVar2);
      }
    }
  }
  return;
}


