/* Module: rmme3260.dll
   Function: FUN_66259fa0
   Address: 66259fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66259fa0(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x12))(4,1,0);
  }
  return;
}


