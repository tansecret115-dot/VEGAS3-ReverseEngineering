/* Module: rmbe3260.dll
   Function: FUN_66010c20
   Address: 66010c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66010c20(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int local_2c [3];
  int local_20 [3];
  byte *local_14 [3];
  int local_8;
  
  uVar6 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  do {
    pcVar4 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar4 + -uVar6;
  pcVar8 = pcVar2;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_6605b650(local_20);
  uVar6 = 1;
  FUN_6605b650(local_14);
  pcVar4 = pcVar2;
  while ((pcVar4 != (char *)0x0 && (*pcVar4 != '\0'))) {
    iVar3 = isspace((int)*pcVar4);
    pcVar8 = pcVar4;
    while (iVar3 != 0) {
      pcVar4 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      iVar3 = isspace((int)*pcVar4);
    }
    pcVar4 = strchr(pcVar8,0x3b);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    if (uVar6 == 1) {
      FUN_6605b970(local_20,pcVar8);
      uVar6 = 2;
    }
    else {
      uVar7 = (int)uVar6 >> 0x1f;
      if (((uVar6 ^ uVar7) - uVar7 & 1 ^ uVar7) == uVar7) {
        if (0 < *(int *)(local_14[0] + -8)) {
          piVar5 = FUN_6605d210((void *)(local_8 + 0x20),local_14[0]);
          FUN_6605b970(piVar5,pcVar8);
        }
        thunk_FUN_6605b610((int *)local_14);
      }
      else {
        piVar5 = FUN_6605ba50(local_2c,local_20,pcVar8);
        FUN_6605b900(local_14,piVar5);
        FUN_6605b770(local_2c);
      }
    }
    uVar6 = uVar6 + 1;
  }
  operator_delete(pcVar2);
  FUN_6605b770((int *)local_14);
  FUN_6605b770(local_20);
  return 0;
}


