/* Module: rv303260.dll
   Function: FUN_67205a60
   Address: 67205a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_67205a60(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffb;
  if (param_2 == 0x52563330) {
    puVar1 = operator_new(0x376);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_67201070(puVar1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(1,param_3);
      if (iVar2 != 0) {
        operator_delete(puVar1);
      }
    }
  }
  return iVar2;
}


