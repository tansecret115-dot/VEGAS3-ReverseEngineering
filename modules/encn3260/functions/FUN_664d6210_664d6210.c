/* Module: encn3260.dll
   Function: FUN_664d6210
   Address: 664d6210
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_664d6210(int *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte local_14 [16];
  
  FUN_664d6e40((int)local_14,param_1);
  iVar2 = 0;
  pcVar3 = param_2;
  do {
    bVar1 = local_14[iVar2];
    iVar2 = iVar2 + 1;
    *pcVar3 = "@@0123456789abcdef"[(bVar1 >> 4) + 2];
    pcVar3[1] = "@@0123456789abcdef"[(bVar1 & 0xf) + 2];
    pcVar3 = pcVar3 + 2;
  } while (iVar2 < 0x10);
  param_2[iVar2 * 2] = '\0';
  return param_2;
}


