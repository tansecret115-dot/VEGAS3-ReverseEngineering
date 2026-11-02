/* Module: vfplugs.dll
   Function: FUN_004163d0
   Address: 004163d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004163d0(int param_1)

{
  *(LPSTR)(param_1 + 0x80) = '\0';
  *(LPSTR)(param_1 + 0x100) = '\0';
  *(LPSTR)(param_1 + 0x180) = '\0';
  FUN_0047be50((LPSTR)(param_1 + 0x80),0x80);
  FUN_0047c1e0((LPSTR)(param_1 + 0x100),0x80);
  FUN_00476060(DAT_00494a40,(LPSTR)(param_1 + 0x180),0x80);
  return;
}


