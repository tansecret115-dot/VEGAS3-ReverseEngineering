/* Module: sfppack1.dll
   Function: FUN_5cdd9180
   Address: 5cdd9180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdd9180(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_5ce091d0((LPSTR)(param_1 + 0x80),0x80);
  FUN_5ce09560((LPSTR)(param_1 + 0x100),0x80);
  FUN_5ce033e0(DAT_5ce237f0,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


