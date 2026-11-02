/* Module: encn3260.dll
   Function: FUN_664c68d0
   Address: 664c68d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c68d0(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x12))(4,1,0);
  }
  return;
}


