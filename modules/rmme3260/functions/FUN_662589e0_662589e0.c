/* Module: rmme3260.dll
   Function: FUN_662589e0
   Address: 662589e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_662589e0(int *param_1)

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
  FUN_66254ca0(param_1 + 2);
  FUN_66254c40(param_1);
  FUN_66254d00(param_1 + 4,(LPCSTR)0x0,1);
  (**(code **)(*(int *)*param_1 + 4))(FUN_66258ed0,param_1,0);
  this = operator_new(0x1c);
  if (this == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CMap<>(this,10);
  }
  param_1[3] = iVar2;
  FUN_66254c40(piVar1);
  (**(code **)(*(int *)*piVar1 + 0x18))();
  return param_1;
}


