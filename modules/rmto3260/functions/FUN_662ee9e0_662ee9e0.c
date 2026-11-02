/* Module: rmto3260.dll
   Function: FUN_662ee9e0
   Address: 662ee9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662ee9e0(void *this,byte *param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_662ee8d0(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *param_2 = piVar1[5];
  return 1;
}


