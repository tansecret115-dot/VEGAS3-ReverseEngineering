/* Module: sipr3260.dll
   Function: FUN_632a3480
   Address: 632a3480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_632a3480(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_632a33e0(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_632a2f00(param_2,piVar1 + 5);
  return 1;
}


