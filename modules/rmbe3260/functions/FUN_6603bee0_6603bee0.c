/* Module: rmbe3260.dll
   Function: FUN_6603bee0
   Address: 6603bee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6603bee0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = operator_new(0x94);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_6603d210(puVar1);
  }
  uVar2 = FUN_6603d410(puVar1,param_2);
  if (uVar2 == 0) {
    *param_1 = puVar1;
  }
  return;
}


