/* Module: rv103260.dll
   Function: FUN_636a48f0
   Address: 636a48f0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __thiscall FUN_636a48f0(void *this,int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0x10007) {
    FUN_636a5310(this,0x1002,&param_1);
    *param_2 = param_1;
    return 0;
  }
  if (param_1 != 0x10008) {
    if (param_1 != 0x10009) {
      iVar1 = FUN_636a5310(this,param_1,param_2);
      return -(iVar1 != 0) & 0x70;
    }
    FUN_636a5310(this,0x1004,&param_1);
    *param_2 = param_1;
    return 0;
  }
  FUN_636a5310(this,0x1003,&param_1);
  *param_2 = param_1;
  return 0;
}


