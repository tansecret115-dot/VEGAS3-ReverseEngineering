/* Module: wmfplug2.dll
   Function: FUN_0043ec20
   Address: 0043ec20
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_0043ec20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x340);
  if (iVar1 == 2) {
    return "Software\\Sonic Foundry Beta\\File Format Cache";
  }
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return "Software\\Sonic Foundry Internal\\File Format Cache";
  }
  return "Software\\Sonic Foundry\\File Format Cache";
}


