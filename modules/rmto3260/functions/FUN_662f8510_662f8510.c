/* Module: rmto3260.dll
   Function: FUN_662f8510
   Address: 662f8510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f8510(uint param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_66311d74 == 0) {
    return 0x80040007;
  }
  if (param_1 <= *(int *)((int)DAT_66311d70 + 0xc) - 1U) {
    puVar3 = FUN_66301d80(DAT_66311d70,param_1);
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_66301bb0((int)puVar3);
      iVar2 = *piVar4;
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar2 + 4);
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        param_2 = param_2 + 1;
      }
      *param_3 = (int)*(short *)(iVar2 + 8);
      return 0;
    }
  }
  return 0x80040245;
}


