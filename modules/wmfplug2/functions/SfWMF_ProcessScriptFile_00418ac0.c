/* Module: wmfplug2.dll
   Function: SfWMF_ProcessScriptFile
   Address: 00418ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfWMF_ProcessScriptFile(char const *,struct SFASF3_PARAMS *) */

long SfWMF_ProcessScriptFile(char *param_1,SFASF3_PARAMS *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  LPCSTR pCVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  CHAR *pCVar8;
  char *local_530;
  long local_52c;
  int local_528;
  int local_524;
  int local_520;
  double local_51c;
  int local_514;
  FILE *local_510;
  int local_50c;
  int local_508;
  int local_504;
  CHAR local_500 [254];
  char local_402 [1026];
  
                    /* 0x18ac0  34  ?SfWMF_ProcessScriptFile@@YGJPBDPAUSFASF3_PARAMS@@@Z */
  local_514 = *(int *)(param_2 + 0x278);
  local_50c = *(int *)(param_2 + 0x26c);
  local_520 = *(int *)(param_2 + 0x27c);
  local_524 = *(int *)(param_2 + 0x270);
  local_52c = 0;
  local_508 = local_524;
  local_504 = local_520;
  local_510 = fopen(param_1,"rt");
  if (local_510 == (FILE *)0x0) {
    return -0x7ffb1ff9;
  }
  local_528 = 0;
LAB_00418b44:
  do {
    do {
      pcVar2 = fgets(local_402 + 2,0x3ff,local_510);
      if (pcVar2 == (char *)0x0) {
LAB_00419042:
        fclose(local_510);
        *(int *)(param_2 + 0x278) = local_514;
        *(int *)(param_2 + 0x27c) = local_520;
        *(int *)(param_2 + 0x26c) = local_50c;
        *(int *)(param_2 + 0x270) = local_524;
        return local_52c;
      }
      uVar6 = 0xffffffff;
      pcVar2 = local_402 + 2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (local_402[~uVar6] == '\n') {
        local_402[~uVar6] = '\0';
      }
      local_530 = local_402 + 2;
      pcVar2 = FUN_004192c0((int *)&local_530);
    } while (pcVar2 == (char *)0x0);
    if (*pcVar2 != ';') {
      iVar3 = lstrcmpiA(pcVar2,"end");
      if ((((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"end_marker_table"), iVar3 == 0)) ||
          (iVar3 = lstrcmpiA(pcVar2,"end_script_table"), iVar3 == 0)) ||
         (iVar3 = lstrcmpiA(pcVar2,"end_command_table"), iVar3 == 0)) {
        local_528 = 0;
        goto LAB_00418b44;
      }
      if (local_528 == 0) {
        iVar3 = lstrcmpiA(pcVar2,"start_marker_table");
        if (iVar3 == 0) {
          local_528 = 1;
          local_500[0] = '\0';
          goto LAB_00418b44;
        }
        iVar3 = lstrcmpiA(pcVar2,"start_script_table");
        if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"start_command_table"), iVar3 == 0)) {
          local_528 = 2;
          local_500[0] = '\0';
          goto LAB_00418b44;
        }
        iVar3 = lstrcmpiA(pcVar2,"title");
        if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"title:"), iVar3 == 0)) {
          pCVar4 = local_530;
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (*pCVar4 != '\0') {
            lstrcpynA((LPSTR)(param_2 + 0x288),pCVar4,0x104);
            param_2[0x38b] = (SFASF3_PARAMS)0x0;
          }
          goto LAB_00418b44;
        }
        iVar3 = lstrcmpiA(pcVar2,"copyright");
        if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"copyright:"), iVar3 == 0)) {
          pCVar4 = local_530;
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (*pCVar4 != '\0') {
            lstrcpynA((LPSTR)(param_2 + 0x490),pCVar4,0x104);
            param_2[0x593] = (SFASF3_PARAMS)0x0;
          }
          goto LAB_00418b44;
        }
        iVar3 = lstrcmpiA(pcVar2,"author");
        if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"author:"), iVar3 == 0)) {
          pCVar4 = local_530;
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (*pCVar4 != '\0') {
            lstrcpynA((LPSTR)(param_2 + 0x38c),pCVar4,0x104);
            param_2[0x48f] = (SFASF3_PARAMS)0x0;
          }
          goto LAB_00418b44;
        }
        iVar3 = lstrcmpiA(pcVar2,"description");
        if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"description:"), iVar3 == 0)) {
          pCVar4 = local_530;
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (*pCVar4 != '\0') {
            lstrcpynA((LPSTR)(param_2 + 0x594),pCVar4,0x104);
            param_2[0x697] = (SFASF3_PARAMS)0x0;
          }
          goto LAB_00418b44;
        }
        iVar3 = lstrcmpiA(pcVar2,"rating");
        if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar2,"rating:"), iVar3 == 0)) {
          pCVar4 = local_530;
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (*pCVar4 != '\0') {
            lstrcpynA((LPSTR)(param_2 + 0x698),pCVar4,0x104);
            param_2[0x79b] = (SFASF3_PARAMS)0x0;
          }
          goto LAB_00418b44;
        }
      }
      else if (local_528 == 1) {
        fVar7 = FUN_00419330(pcVar2);
        pCVar4 = local_530;
        local_51c = (double)fVar7;
        if (fVar7 != (float10)_DAT_0047cc28) {
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (*pCVar4 != '\0') {
            if (local_51c <= *(double *)(param_2 + 0x260)) {
              pCVar8 = local_500;
              uVar5 = ftol();
              local_520 = FUN_00419090(&local_514,local_520,&local_504,uVar5,pCVar4,pCVar8);
            }
            local_500[0] = '\0';
            goto LAB_00418b44;
          }
        }
      }
      else {
        if (local_528 != 2) goto LAB_00418b44;
        fVar7 = FUN_00419330(pcVar2);
        local_51c = (double)fVar7;
        if ((fVar7 != (float10)_DAT_0047cc28) &&
           (pcVar2 = FUN_004192c0((int *)&local_530), pCVar4 = local_530, *pcVar2 != '\0')) {
          iVar3 = _ismbcspace((int)*local_530);
          while (iVar3 != 0) {
            pCVar4 = CharNextA(pCVar4);
            iVar3 = _ismbcspace((int)*pCVar4);
          }
          local_530 = pCVar4;
          if (local_51c <= *(double *)(param_2 + 0x260)) {
            pCVar8 = local_500;
            uVar5 = ftol();
            local_524 = FUN_004191a0(&local_50c,local_524,&local_508,uVar5,pcVar2,pCVar4,pCVar8);
          }
          local_500[0] = '\0';
          goto LAB_00418b44;
        }
      }
      local_52c = -0x7ffb1fdc;
      goto LAB_00419042;
    }
    if (*local_530 != '\0') {
      lstrcpynA(local_500,local_530,0xff);
      local_402[0] = '\0';
    }
  } while( true );
}


