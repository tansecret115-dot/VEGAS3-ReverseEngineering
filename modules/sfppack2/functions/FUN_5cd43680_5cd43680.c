/* Module: sfppack2.dll
   Function: FUN_5cd43680
   Address: 5cd43680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd43680(void *this,byte *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 5;
  }
  *param_2 = 0;
  iVar1 = FUN_5cd43790(this,param_1);
  if (iVar1 < 0) {
    *(int *)param_1 = param_3;
    uVar2 = FUN_5cd43770(this);
    return uVar2;
  }
  if (*(int *)param_1 < 1) {
    *param_2 = 1;
  }
  return 0;
}


