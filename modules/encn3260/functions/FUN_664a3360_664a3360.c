/* Module: encn3260.dll
   Function: FUN_664a3360
   Address: 664a3360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a3360(char *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  char *_Str;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_8;
  
  uVar4 = 0xffffffff;
  local_8 = 0x80004005;
  pcVar2 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _Str = operator_new(uVar4);
  pcVar2 = _Str;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *param_1;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  pcVar2 = strtok(_Str,&DAT_664e3324);
  if (pcVar2 != (char *)0x0) {
    iVar3 = atoi(pcVar2);
    *param_2 = iVar3;
    pcVar2 = strtok((char *)0x0,&DAT_664e3324);
    if (pcVar2 != (char *)0x0) {
      iVar3 = atoi(pcVar2);
      *param_3 = iVar3;
      pcVar2 = strtok((char *)0x0,&DAT_664e3324);
      if (pcVar2 != (char *)0x0) {
        iVar3 = atoi(pcVar2);
        local_8 = 0;
        *param_4 = iVar3;
      }
    }
  }
  if (_Str != (char *)0x0) {
    operator_delete(_Str);
  }
  return local_8;
}


