/* Module: rmbe3260.dll
   Function: FUN_66017370
   Address: 66017370
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66017370(int param_1,ushort param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = FUN_660172b0(param_2,(ushort *)(param_1 + 0x10));
  if (param_3 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0xe) = 2;
    return uVar2;
  }
  iVar3 = -1;
  pcVar4 = param_3;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x12) = param_3;
  *(ushort *)(param_1 + 0xe) = ~(ushort)iVar3 + 1;
  return uVar2;
}


