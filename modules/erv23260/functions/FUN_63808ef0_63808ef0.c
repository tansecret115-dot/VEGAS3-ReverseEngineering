/* Module: erv23260.dll
   Function: FUN_63808ef0
   Address: 63808ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63808ef0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(undefined4 **)(param_1 + 0x5c4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c4))(1);
    *(undefined4 *)(param_1 + 0x5c4) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x5c8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_63809470(puVar1);
    FUN_637f2010(puVar1);
  }
  return;
}


