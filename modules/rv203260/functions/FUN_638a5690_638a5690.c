/* Module: rv203260.dll
   Function: FUN_638a5690
   Address: 638a5690
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_638a5690(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffb;
  if (param_2 == 0x52563230) {
    puVar1 = operator_new(0x36a);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_638a1070(puVar1);
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


