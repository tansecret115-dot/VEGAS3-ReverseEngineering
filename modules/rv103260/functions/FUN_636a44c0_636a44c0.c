/* Module: rv103260.dll
   Function: FUN_636a44c0
   Address: 636a44c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_636a44c0(void *param_1)

{
  char cVar1;
  undefined *this;
  char *pcVar2;
  FILE *pFVar3;
  size_t sVar4;
  DWORD _Seed;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  ushort uVar10;
  char local_220 [260];
  char local_11c [260];
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  char local_6;
  char local_5;
  
  uVar10 = 2;
  local_18 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  this = FUN_636a1040();
  pcVar2 = (char *)FUN_636a55d0(this,uVar10);
  uVar5 = 0xffffffff;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = local_11c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = s_rv10conf_txt_636a824c;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar2 = local_11c;
  do {
    pcVar8 = pcVar2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  pFVar3 = fopen(local_11c,&DAT_636a825c);
  *(FILE **)((int)param_1 + 0x74) = pFVar3;
  if (pFVar3 != (FILE *)0x0) {
    sVar4 = fread(&local_6,1,1,pFVar3);
    while ((((local_6 != '.' && (local_6 != '\n')) && (local_6 != '\r')) && (sVar4 != 0))) {
      if ((local_6 == '-') || (local_6 == '/')) {
        fread(&local_6,1,1,*(FILE **)((int)param_1 + 0x74));
        if ((local_6 == 'f') || (local_6 == 'F')) {
          *(undefined4 *)((int)param_1 + 0xfa) = 0;
          sVar4 = fread(&local_5,1,1,*(FILE **)((int)param_1 + 0x74));
          while (((local_5 != ' ' && (local_5 != '\n')) &&
                 ((local_5 != '\r' && (((local_5 != '\0' && (local_5 != '.')) && (sVar4 != 0)))))))
          {
            *(int *)((int)param_1 + 0xfa) = local_5 + -0x30 + *(int *)((int)param_1 + 0xfa) * 10;
            sVar4 = fread(&local_5,1,1,*(FILE **)((int)param_1 + 0x74));
          }
          local_c = 1;
          local_14 = 1;
        }
        if ((local_6 == 'b') || (local_6 == 'B')) {
          local_c = 1;
          local_10 = 1;
        }
        if ((local_6 == 'l') || (local_6 == 'L')) {
          *(undefined4 *)((int)param_1 + 0x7c) = 0;
          _Seed = GetTickCount();
          srand(_Seed);
          sVar4 = fread(&local_5,1,1,*(FILE **)((int)param_1 + 0x74));
          while (((((local_5 != ' ' && (local_5 != '.')) && (local_5 != '\r')) &&
                  ((local_5 != '\n' && (local_5 != '\0')))) && (sVar4 != 0))) {
            *(int *)((int)param_1 + 0x7c) = local_5 + -0x30 + *(int *)((int)param_1 + 0x7c) * 10;
            sVar4 = fread(&local_5,1,1,*(FILE **)((int)param_1 + 0x74));
          }
          local_c = 1;
        }
        if ((local_6 == 'd') || (local_6 == 'D')) {
          iVar7 = 0;
          sVar4 = fread(&local_5,1,1,*(FILE **)((int)param_1 + 0x74));
          while ((((local_5 != ' ' && (local_5 != '\r')) && (local_5 != '\n')) &&
                 ((local_5 != '\0' && (sVar4 != 0))))) {
            pFVar3 = *(FILE **)((int)param_1 + 0x74);
            local_220[iVar7] = local_5;
            iVar7 = iVar7 + 1;
            sVar4 = fread(&local_5,1,1,pFVar3);
          }
          local_220[iVar7] = '\0';
          pFVar3 = fopen(local_220,&DAT_636a8248);
          *(FILE **)((int)param_1 + 0x78) = pFVar3;
          local_c = 1;
        }
      }
      sVar4 = fread(&local_6,1,1,*(FILE **)((int)param_1 + 0x74));
    }
    if (*(FILE **)((int)param_1 + 0x74) != (FILE *)0x0) {
      fclose(*(FILE **)((int)param_1 + 0x74));
    }
    if (local_c != 0) {
      FUN_636a5340(param_1,0x1002,&local_10);
      iVar7 = FUN_636a5340(param_1,0x1004,&local_14);
      return -(uint)(iVar7 != 0) & 0x71;
    }
  }
  return local_18;
}


