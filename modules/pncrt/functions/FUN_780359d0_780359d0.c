/* Module: pncrt.dll
   Function: FUN_780359d0
   Address: 780359d0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl
FUN_780359d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_1c = FUN_78035ab0(param_2);
  if (local_1c != 0) {
    local_18 = param_3;
    local_c = param_6;
    local_14 = param_4;
    local_10 = param_5;
    local_20 = param_1;
    local_8 = param_7;
    uStack_4 = param_8;
    FUN_78035d10();
    iVar1 = FUN_780085a0(&local_20);
    if (iVar1 == 0) {
      FUN_78035a80(param_1);
    }
    return (float10)(double)CONCAT44(uStack_4,local_8);
  }
  FUN_78035d10();
  FUN_78035a80(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}


