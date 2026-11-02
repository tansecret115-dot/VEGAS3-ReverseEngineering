/* Module: pncrt.dll
   Function: FUN_78018fc0
   Address: 78018fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_78018fc0(uint param_1,char *param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  int *piVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_10c [4];
  LPSTR local_108;
  CHAR local_104 [260];
  
  if (param_1 == 0) {
    DVar5 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_780190f0(param_1);
    if (iVar2 == 0) {
      puVar3 = __doserrno();
      *puVar3 = 0xf;
      piVar4 = _errno();
      *piVar4 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar5 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar5 == 0) || (uVar6 = DVar5 + 1, 0x104 < uVar6)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar6 <= (int)param_3) {
      uVar6 = param_3;
    }
    param_2 = malloc(uVar6);
    if (param_2 == (char *)0x0) {
      piVar4 = _errno();
      *piVar4 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar6) {
    piVar4 = _errno();
    *piVar4 = 0x22;
    return (char *)0x0;
  }
  uVar6 = 0xffffffff;
  pcVar8 = local_104;
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
  pcVar9 = param_2;
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
  return param_2;
}


