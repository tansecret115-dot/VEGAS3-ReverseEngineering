/* Module: sfxpfx2.dll
   Function: FUN_5c8a4400
   Address: 5c8a4400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8a4400(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_5c8d44e0((LPSTR)(param_1 + 0x80),0x80);
  FUN_5c8d4870((LPSTR)(param_1 + 0x100),0x80);
  FUN_5c8ce6f0(DAT_5c8e93c0,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


