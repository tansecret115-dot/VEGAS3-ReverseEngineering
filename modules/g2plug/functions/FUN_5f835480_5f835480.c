/* Module: g2plug.dll
   Function: FUN_5f835480
   Address: 5f835480
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f835480(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_5f834cd0(param_1);
  piVar2 = FUN_5f834980(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  piVar2 = (int *)FUN_5f835120(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  piVar2 = FUN_5f8344b0(this,param_1);
  if ((int)piVar2 < 0) {
    piVar1 = piVar2;
  }
  FUN_5f8354d0(param_1);
  return piVar1;
}


