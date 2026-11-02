/* Module: pncrt.dll
   Function: FUN_78035ab0
   Address: 78035ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78035ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_78041960;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x78041964);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x78041a38);
  return 0;
}


