/* Module: sfxpfx1.dll
   Function: FUN_5c952ad0
   Address: 5c952ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c952ad0(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_5c982bb0((LPSTR)(param_1 + 0x80),0x80);
  FUN_5c982f40((LPSTR)(param_1 + 0x100),0x80);
  FUN_5c97cdc0(DAT_5c998768,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


