/* Module: tokr3260.dll
   Function: FUN_680538c0
   Address: 680538c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_680538c0(uint param_1)

{
  int iVar1;
  
  iVar1 = ((int)param_1 >> 0x17 & 0xffU) - 0x7a;
  if (iVar1 < 0) {
    return 0;
  }
  if (DAT_6805b07c <= (int)(param_1 & 0x7fffff)) {
    return iVar1 * 3 + 3;
  }
  return (DAT_6805b078 <= (int)(param_1 & 0x7fffff)) + 1 + iVar1 * 3;
}


