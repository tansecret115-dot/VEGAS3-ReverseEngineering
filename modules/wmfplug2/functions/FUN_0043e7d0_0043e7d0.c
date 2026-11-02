/* Module: wmfplug2.dll
   Function: FUN_0043e7d0
   Address: 0043e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_0043e7d0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_0043e020(param_1);
  piVar2 = FUN_0043dcd0(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  piVar2 = (int *)FUN_0043e470(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  piVar2 = FUN_0043d800(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  FUN_0043e820(param_1);
  return piVar1;
}


