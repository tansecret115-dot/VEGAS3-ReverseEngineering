/* Module: rmto3260.dll
   Function: FUN_662d7af0
   Address: 662d7af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662d7af0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_66311ccc == (undefined4 *)0x0) {
    puVar1 = operator_new(8);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_66311ccc = (undefined4 *)0x0;
    }
    else {
      DAT_66311ccc = FUN_662d7a80(puVar1);
    }
  }
  (**(code **)*DAT_66311ccc)(DAT_66311ccc,&DAT_663064a8,param_1);
  return;
}


