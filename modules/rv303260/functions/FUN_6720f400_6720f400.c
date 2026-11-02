/* Module: rv303260.dll
   Function: FUN_6720f400
   Address: 6720f400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6720f400(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_6720f360(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_6720ee80(param_2,piVar1 + 5);
  return 1;
}


