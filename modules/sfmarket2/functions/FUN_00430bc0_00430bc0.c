/* Module: sfmarket2.dll
   Function: FUN_00430bc0
   Address: 00430bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430bc0(char *param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = 0x80070057;
  if ((*param_1 == '-') && (param_1[1] == '-')) {
    pcVar4 = param_1 + 2;
    cVar2 = param_1[2];
    while ((cVar2 != '\0' && (cVar2 != '\r'))) {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar1;
    }
    if ((*pcVar4 == '\r') && (pcVar4[1] == '\n')) {
      if ((int)(pcVar4 + -(int)param_1 + 2) < (int)param_3) {
        puVar6 = param_2;
        for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined1 *)param_2 = 0xd;
        *(undefined1 *)((int)param_2 + 1) = 10;
        strncpy((char *)((int)param_2 + 2),param_1,(size_t)(pcVar4 + -(int)param_1));
        return 0;
      }
      uVar3 = 0x8004e03c;
    }
  }
  return uVar3;
}


