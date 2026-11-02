/* Module: auth3260.dll
   Function: FUN_627a5550
   Address: 627a5550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_627a5550(void *this,byte *param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_627a5440(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *param_2 = piVar1[5];
  return 1;
}


