/* Module: stl2plg.dll
   Function: FUN_00401410
   Address: 00401410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401410(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x3a8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3a8))(3);
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  return;
}


