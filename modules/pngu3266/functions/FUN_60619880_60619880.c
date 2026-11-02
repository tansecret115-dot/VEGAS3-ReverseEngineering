/* Module: pngu3266.dll
   Function: FUN_60619880
   Address: 60619880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_60619880(void *this,uint param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  piVar1 = FUN_606197b0(this,param_1,&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *param_2 = piVar1[3];
  return 1;
}


