/* Module: pncrt.dll
   Function: FUN_780126d0
   Address: 780126d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780126d0(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*psVar1 == 0) goto LAB_780126f9;
    psVar1 = psVar1 + 1;
  }
  if (*psVar1 != 0) {
    return param_2;
  }
LAB_780126f9:
  return (int)psVar1 - (int)param_1 >> 1;
}


