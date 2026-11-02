/* Module: rmbe3260.dll
   Function: FUN_66018320
   Address: 66018320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66018320(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  short local_8;
  
  iVar2 = FUN_66017d60((void *)(param_1 + -0x14),param_2);
  if (iVar2 < 0) {
    return 0x80070057;
  }
  if (param_3 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar3 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_8 = (short)uVar4;
    if (local_8 != 0) {
      pcVar3 = operator_new(uVar4 & 0xffff);
      if (pcVar3 == (char *)0x0) {
        return 0x80070057;
      }
      FUN_6605cf30((void *)(param_1 + 0x28),*(int *)(param_1 + 0x2c),pcVar3);
      pcVar6 = pcVar3;
      for (uVar5 = (uVar4 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *param_3;
        param_3 = param_3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      goto LAB_660183c9;
    }
  }
  pcVar3 = (char *)0x0;
  local_8 = 0;
LAB_660183c9:
  if (*(void **)(param_2 + 0x1e) != (void *)0x0) {
    FUN_66017c60((void *)(param_1 + -0x14),*(void **)(param_2 + 0x1e));
  }
  *(short *)(param_2 + 0x1c) = local_8;
  *(char **)(param_2 + 0x1e) = pcVar3;
  return 0;
}


