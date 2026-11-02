/* Module: encn3260.dll
   Function: FUN_664b3d50
   Address: 664b3d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b3d50(int param_1)

{
  int local_14 [4];
  
  *(undefined4 *)(param_1 + 0x119c) = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[2] = GetSystemMetrics(0);
  local_14[3] = GetSystemMetrics(1);
  FUN_664b64b0((uint *)(param_1 + 0x48),(uint *)(param_1 + 0xd40),local_14,local_14);
  return;
}


