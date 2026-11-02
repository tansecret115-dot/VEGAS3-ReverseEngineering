/* Module: sfnetmedia.dll
   Function: FUN_0040a0d0
   Address: 0040a0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a0d0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DefWindowProcA_exref;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 0x1c) = pcVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


