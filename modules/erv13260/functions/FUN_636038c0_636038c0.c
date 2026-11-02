/* Module: erv13260.dll
   Function: FUN_636038c0
   Address: 636038c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636038c0(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_63603820(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_63603340(param_2,piVar1 + 5);
  return 1;
}


