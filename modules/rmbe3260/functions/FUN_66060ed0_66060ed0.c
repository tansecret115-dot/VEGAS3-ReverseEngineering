/* Module: rmbe3260.dll
   Function: FUN_66060ed0
   Address: 66060ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66060ed0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


