/* Module: erv23260.dll
   Function: FUN_63803760
   Address: 63803760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63803760(void *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x80)) {
      piVar2 = (int *)((int)this + 0xf8);
      while (*piVar2 == 0) {
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x1df;
        if (*(int *)((int)this + 0x80) <= iVar3) {
          return uVar1;
        }
      }
      uVar1 = 5;
    }
  }
  return uVar1;
}


