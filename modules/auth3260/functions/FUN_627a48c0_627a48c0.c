/* Module: auth3260.dll
   Function: FUN_627a48c0
   Address: 627a48c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a48c0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  byte *_String;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = FUN_627a5120(puVar2);
  }
  puVar2 = local_8;
  FUN_627a5100(local_8,param_2);
  FUN_627a5190(puVar2,param_3);
  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  _String = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar8 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar7 = (byte *)(pcVar8 + -uVar5);
  pbVar9 = _String;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    _strlwr((char *)_String);
  }
  local_c = (undefined4 *)0x0;
  iVar3 = FUN_627a5550((void *)(param_1 + 8),_String,(int *)&local_c);
  if ((iVar3 != 0) && (local_c != (undefined4 *)0x0)) {
    (**(code **)*local_c)(1);
  }
  piVar4 = FUN_627a5590((void *)(param_1 + 8),_String);
  *piVar4 = (int)local_8;
  operator_delete(_String);
  return 0;
}


