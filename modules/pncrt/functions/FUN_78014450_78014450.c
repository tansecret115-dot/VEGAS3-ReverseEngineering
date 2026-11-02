/* Module: pncrt.dll
   Function: FUN_78014450
   Address: 78014450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78014450(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_7803ff68;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while (psVar1 < &DAT_7803ff7c);
  return 1;
}


