/* Module: rmto3260.dll
   Function: FUN_662ee310
   Address: 662ee310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ee310(int param_1,char *param_2,int *param_3)

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
  
  piVar4 = param_3;
  if (param_3 == (int *)0x0) {
    return 0x80040009;
  }
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_662ee670(puVar2);
  }
  FUN_662ee5d0(puVar2,param_2);
  FUN_662ee710(puVar2,piVar4);
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
  param_3 = (int *)0x0;
  iVar3 = FUN_662ee9e0((void *)(param_1 + 0x40),_String,(int *)&param_3);
  if ((iVar3 != 0) && (param_3 != (int *)0x0)) {
    (**(code **)*param_3)(1);
  }
  piVar4 = FUN_662eea20((void *)(param_1 + 0x40),_String);
  *piVar4 = (int)puVar2;
  operator_delete(_String);
  return 0;
}


