/* Module: sfppack3.dll
   Function: FUN_5cc4a9d0
   Address: 5cc4a9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc4a9d0(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_5cc7eb60((LPSTR)(param_1 + 0x80),0x80);
  FUN_5cc7eef0((LPSTR)(param_1 + 0x100),0x80);
  FUN_5cc78d70(DAT_5cc982c8,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


