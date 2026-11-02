/* Module: pngu3266.dll
   Function: FUN_60620170
   Address: 60620170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_60620170(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_606200d0(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_60618e60(param_2,piVar1 + 5);
  return 1;
}


