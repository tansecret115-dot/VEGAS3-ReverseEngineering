/* Module: rmbe3260.dll
   Function: FUN_6601c1a0
   Address: 6601c1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601c1a0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    return 0x80004003;
  }
  iVar2 = -1;
  pcVar3 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    return 0x8004000d;
  }
  FUN_6605b970((void *)(param_1 + 200),param_2);
  return 0;
}


