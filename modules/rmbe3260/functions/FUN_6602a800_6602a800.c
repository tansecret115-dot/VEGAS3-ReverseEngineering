/* Module: rmbe3260.dll
   Function: FUN_6602a800
   Address: 6602a800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_6602a800(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_c;
  int *local_8;
  
  FUN_660143a0(&local_c,(undefined4 *)param_2);
  uVar2 = FUN_6602a870((void *)(param_1 + -0x10),local_c,local_8);
  if ((uVar2 & 0x80000000) == 0) {
    uVar3 = 0xffffffff;
    do {
      pcVar4 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar4 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar4;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar4 = pcVar4 + -uVar3;
    pcVar5 = (char *)(param_1 + 0x10);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    uVar2 = 0;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    *(undefined4 *)(param_1 + 8) = local_c;
    *(int **)(param_1 + 0xc) = local_8;
  }
  return uVar2;
}


