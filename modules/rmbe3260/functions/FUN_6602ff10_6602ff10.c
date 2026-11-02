/* Module: rmbe3260.dll
   Function: FUN_6602ff10
   Address: 6602ff10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6602ff10(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)((int)this + 4);
  if (param_1 != 0) {
    uVar2 = *(uint *)(piVar1[8] + 0xc);
    if ((uVar2 != param_1) && ((param_1 <= uVar2 || ((uint)piVar1[6] <= param_1)))) {
      (**(code **)(*piVar1 + 0x28))(param_1);
      return;
    }
    piVar1 = (int *)(piVar1[8] + 0x14);
    *piVar1 = *piVar1 + -1;
  }
  return;
}


