/* Module: encn3260.dll
   Function: FUN_664bd7e0
   Address: 664bd7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664bd7e0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_664bd7a0(param_1);
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)FUN_664bd7c0(param_1);
  }
  return;
}


