/* Module: sfpagepeel.dll
   Function: FUN_004113b0
   Address: 004113b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004113b0(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_00467b10((LPSTR)(param_1 + 0x80),0x80);
  FUN_00467ea0((LPSTR)(param_1 + 0x100),0x80);
  FUN_00461d20(DAT_0047d9b8,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


