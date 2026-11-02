/* Module: sfppack2.dll
   Function: FUN_5cd04490
   Address: 5cd04490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd04490(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_5cd48050((LPSTR)(param_1 + 0x80),0x80);
  FUN_5cd483e0((LPSTR)(param_1 + 0x100),0x80);
  FUN_5cd42260(DAT_5cd67a00,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


