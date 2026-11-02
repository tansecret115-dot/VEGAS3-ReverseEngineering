/* Module: sfpublish.dll
   Function: FUN_004116d0
   Address: 004116d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004116d0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x2c);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (param_1 < iVar2) {
    return **(undefined4 **)(piVar1[2] + param_1 * 4);
  }
  return 0;
}


