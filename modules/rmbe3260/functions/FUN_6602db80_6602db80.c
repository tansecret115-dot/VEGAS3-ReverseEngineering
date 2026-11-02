/* Module: rmbe3260.dll
   Function: FUN_6602db80
   Address: 6602db80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6602db80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_66075228 == (undefined4 *)0x0) {
    puVar1 = operator_new(8);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_66075228 = (undefined4 *)0x0;
    }
    else {
      DAT_66075228 = FUN_6602dae0(puVar1);
    }
  }
  (**(code **)*DAT_66075228)(DAT_66075228,&DAT_66064ee8,param_1);
  return;
}


