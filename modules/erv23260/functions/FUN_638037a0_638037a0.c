/* Module: erv23260.dll
   Function: FUN_638037a0
   Address: 638037a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638037a0(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 <= param_3)) {
    piVar2 = (int *)(param_2 * 0x77c + 0x100 + (int)this);
    iVar3 = (param_3 - param_2) + 1;
    do {
      if (*piVar2 == 0) {
        uVar1 = 5;
      }
      piVar2 = piVar2 + 0x1df;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}


