/* Module: rn5a3260.dll
   Function: FUN_628a3350
   Address: 628a3350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_628a3350(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = (int)(~uVar4 - 1) / 2;
    uVar4 = iVar6 + 1;
    puVar2 = operator_new(uVar4);
    puVar8 = puVar2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = param_1 + 2;
        *(byte *)(iVar3 + (int)puVar2) =
             ((byte)iVar3 ^ 3 ^ *pcVar7 - 6U) << 4 | cVar1 + 0x9dU ^ ((byte)iVar3 ^ 7) & 0xf;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar6);
    }
  }
  return puVar2;
}


