/* Module: vegas30.exe
   Function: FUN_0040a890
   Address: 0040a890
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040a890(int param_1)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  pcVar1 = DefWindowProcA_exref;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 0x1c) = pcVar1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}


