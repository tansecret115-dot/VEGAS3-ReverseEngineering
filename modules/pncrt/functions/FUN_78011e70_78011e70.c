/* Module: pncrt.dll
   Function: FUN_78011e70
   Address: 78011e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78011e70(int param_1,byte *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *_Memory;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_90;
  undefined2 local_8c;
  uint local_88;
  char local_84 [132];
  
  pcVar3 = FUN_780120f0(param_2,local_84,&local_90,&local_88);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_84;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = malloc(~uVar5);
  uVar5 = __lc_codepage;
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  uVar2 = *(undefined4 *)(&__lc_handle + param_1 * 4);
  _Memory = (undefined1 *)(&DAT_7803fb54)[param_1 * 3];
  uVar6 = 0xffffffff;
  pcVar8 = local_84;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = pcVar3;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  (&DAT_7803fb54)[param_1 * 3] = pcVar3;
  *(uint *)(&__lc_handle + param_1 * 4) = local_90 & 0xffff;
  *(uint *)(&DAT_780424b8 + param_1 * 6) = local_90;
  *(undefined2 *)(&DAT_780424bc + param_1 * 6) = local_8c;
  if (param_1 == 2) {
    __lc_codepage = local_88;
  }
  iVar4 = (**(code **)(&DAT_7803fb58 + param_1 * 0xc))();
  if (iVar4 != 0) {
    (&DAT_7803fb54)[param_1 * 3] = _Memory;
    free(pcVar3);
    *(undefined4 *)(&__lc_handle + param_1 * 4) = uVar2;
    __lc_codepage = uVar5;
    return 0;
  }
  if (_Memory != &DAT_7803fb48) {
    free(_Memory);
  }
  return (&DAT_7803fb54)[param_1 * 3];
}


