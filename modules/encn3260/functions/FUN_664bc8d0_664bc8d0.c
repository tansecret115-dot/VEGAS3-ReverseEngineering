/* Module: encn3260.dll
   Function: FUN_664bc8d0
   Address: 664bc8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bc8d0(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  byte *_String;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  int local_8;
  
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_8 = 0;
  _String = operator_new(~uVar4);
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pbVar6 = (byte *)(pcVar7 + -uVar4);
  pbVar8 = _String;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar8 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    _strlwr((char *)_String);
  }
  iVar2 = FUN_664bde30((void *)(param_1 + 8),_String,&local_8);
  if (iVar2 == 0) {
    operator_delete(_String);
    return 0x80004005;
  }
  uVar3 = FUN_664bd0b0(local_8);
  *param_3 = uVar3;
  operator_delete(_String);
  return 0;
}


