/* Module: encn3260.dll
   Function: FUN_664c5310
   Address: 664c5310
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_664c5310(int *param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  
  piVar1 = param_1 + 1;
  *param_1 = 0;
  *piVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_664bbfc0(param_1 + 2);
  FUN_664bbf60(param_1);
  FUN_664bc020(param_1 + 4,(LPCSTR)0x0,1);
  (**(code **)(*(int *)*param_1 + 4))(FUN_664c5800,param_1,0);
  this = operator_new(0x1c);
  if (this == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CMap<>(this,10);
  }
  param_1[3] = iVar2;
  FUN_664bbf60(piVar1);
  (**(code **)(*(int *)*piVar1 + 0x18))();
  return param_1;
}


