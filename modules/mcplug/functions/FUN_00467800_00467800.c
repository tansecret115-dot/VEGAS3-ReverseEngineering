/* Module: mcplug.dll
   Function: FUN_00467800
   Address: 00467800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00467800(undefined4 *param_1)

{
  FUN_00468960(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_004018b0((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_0046e080((int)param_1);
  }
  FUN_0046de80((int)param_1);
  return;
}


