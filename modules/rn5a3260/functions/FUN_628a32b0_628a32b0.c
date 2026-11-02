/* Module: rn5a3260.dll
   Function: FUN_628a32b0
   Address: 628a32b0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_628a32b0(int *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte local_14 [16];
  
  FUN_628a34d0((int)local_14,param_1);
  iVar2 = 0;
  pcVar3 = param_2;
  do {
    bVar1 = local_14[iVar2];
    iVar2 = iVar2 + 1;
    *pcVar3 = "0123456789abcdef"[bVar1 >> 4];
    pcVar3[1] = "0123456789abcdef"[bVar1 & 0xf];
    pcVar3 = pcVar3 + 2;
  } while (iVar2 < 0x10);
  param_2[iVar2 * 2] = '\0';
  return param_2;
}


