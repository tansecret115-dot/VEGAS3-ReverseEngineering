/* Module: pngu3266.dll
   Function: FUN_605f2ab1
   Address: 605f2ab1
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_605f2ab1(void *this,undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    CPNIcon::ConvertToGrayscale(this);
  }
  else if (param_2 == 1) {
    FUN_605f2aa4(param_1);
  }
  return 1;
}


