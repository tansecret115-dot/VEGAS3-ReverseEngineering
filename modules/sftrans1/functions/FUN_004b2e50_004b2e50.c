/* Module: sftrans1.dll
   Function: FUN_004b2e50
   Address: 004b2e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2e50(int param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_005356d0((undefined1 *)(param_1 + 0x80),0x80);
  FUN_00535a60((undefined1 *)(param_1 + 0x100),0x80);
  FUN_0052f8e0((undefined1 *)(param_1 + 0x180),0x80);
  return;
}


