/* Module: pncrt.dll
   Function: FUN_780122f0
   Address: 780122f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780122f0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar5 = (undefined4 *)&stack0x0000000c;
  if (0 < param_2) {
    do {
      pcVar6 = (char *)*puVar5;
      puVar5 = puVar5 + 1;
      uVar2 = 0xffffffff;
      do {
        pcVar8 = pcVar6;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      iVar3 = -1;
      pcVar6 = param_1;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + -uVar2;
      pcVar8 = pcVar7 + -1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      param_2 = param_2 + -1;
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
    } while (param_2 != 0);
  }
  return;
}


