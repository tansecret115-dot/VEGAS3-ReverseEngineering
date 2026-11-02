/* Module: encn3260.dll
   Function: FUN_664c3eb0
   Address: 664c3eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c3eb0(void *this,uint param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  piVar1 = FUN_664c3de0(this,param_1,&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *param_2 = piVar1[3];
  return 1;
}


