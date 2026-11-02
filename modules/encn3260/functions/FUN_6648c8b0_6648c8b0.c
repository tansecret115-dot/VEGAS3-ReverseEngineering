/* Module: encn3260.dll
   Function: FUN_6648c8b0
   Address: 6648c8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648c8b0(void *this,undefined4 param_1,byte *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = FUN_6648c780(param_1,param_2);
  uVar2 = FUN_6648c8f0(this,piVar1,(char *)0x0,(char *)0x0);
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  return uVar2;
}


