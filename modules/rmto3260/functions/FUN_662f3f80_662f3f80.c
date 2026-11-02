/* Module: rmto3260.dll
   Function: FUN_662f3f80
   Address: 662f3f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662f3f80(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  int local_8;
  
  pcVar2 = param_1;
  iVar4 = 0;
  local_8 = 0;
  for (pcVar1 = strchr(param_1,0x3a); pcVar1 != (char *)0x0; pcVar1 = strchr(pcVar1 + 1,0x3a)) {
    local_8 = local_8 + 1;
  }
  switch(local_8) {
  case 3:
    iVar4 = atol(pcVar2);
    pcVar2 = strchr(pcVar2,0x3a);
    pcVar2 = pcVar2 + 1;
  case 2:
    lVar3 = atol(pcVar2);
    iVar4 = lVar3 + iVar4 * 0x18;
    pcVar2 = strchr(pcVar2,0x3a);
    pcVar2 = pcVar2 + 1;
  case 1:
    lVar3 = atol(pcVar2);
    iVar4 = lVar3 + iVar4 * 0x3c;
    pcVar2 = strchr(pcVar2,0x3a);
    pcVar2 = pcVar2 + 1;
  case 0:
    lVar3 = atol(pcVar2);
    iVar4 = (lVar3 + iVar4 * 0x3c) * 10;
    pcVar1 = strchr(pcVar2,0x2e);
    if ((pcVar1 != (char *)0x0) && (pcVar1[1] != '\0')) {
      param_1 = (char *)(uint)CONCAT12(pcVar1[1],param_1._0_2_);
      lVar3 = atol((char *)((int)&param_1 + 2));
      iVar4 = iVar4 + lVar3;
    }
    return iVar4;
  default:
    return 0;
  }
}


