/* Module: rmme3260.dll
   Function: FUN_66261630
   Address: 66261630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66261630(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_2 != (undefined4 *)0x0) {
    pcVar6 = (char *)*param_2;
    while (pcVar6 != (char *)0x0) {
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar3 = operator_new(~uVar4);
      uVar4 = 0xffffffff;
      pcVar6 = (char *)*param_2;
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = pcVar3;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_66250b60(param_1,pcVar3);
      puVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      pcVar6 = (char *)*puVar1;
    }
  }
  return;
}


