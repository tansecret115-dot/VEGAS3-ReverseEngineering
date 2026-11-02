/* Module: vegas30.exe
   Function: FUN_004021d0
   Address: 004021d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004021d0(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  LPSTR lpsz;
  LPCSTR pCVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  CHAR local_40 [64];
  
  *param_1 = 0;
  local_5c = _SfList_CreateExZ_32(&local_54,0xc,param_4,0xffffffff,4,0,0,0);
  if (-1 < local_5c) {
    local_50 = (int)param_4 + param_3;
    if (param_3 < local_50) {
      local_58 = param_3 + 1;
      param_4 = (undefined4 *)(param_2 + param_3 * 4);
      puVar7 = (undefined4 *)(param_2 + local_58 * 4);
      do {
        uVar3 = local_50;
        pCVar5 = (LPCSTR)*param_4;
        if (pCVar5 == (LPCSTR)0x0) break;
        local_5c = 0;
        local_4c = 0x9ca5;
        local_48 = 1;
        local_44 = (char *)0x0;
        cVar1 = *pCVar5;
        if (cVar1 == '@') {
          local_4c = 5;
          local_48 = 1;
          local_44 = (char *)0x0;
          pcVar4 = CharNextA(pCVar5);
          if ((*pcVar4 == '\0') && (pcVar4 = local_44, local_58 < uVar3)) {
            pcVar2 = (char *)*puVar7;
            cVar1 = *pcVar2;
            if ((cVar1 != '-') && (cVar1 != '/')) {
              param_3 = param_3 + 1;
              param_4 = param_4 + 1;
              puVar7 = puVar7 + 1;
              local_58 = local_58 + 1;
              pcVar4 = pcVar2;
            }
          }
          goto LAB_004023c2;
        }
        if ((cVar1 != '-') && (cVar1 != '/')) {
LAB_004023ca:
          local_44 = pCVar5;
          if (local_44 != (char *)0x0) goto LAB_004023d6;
LAB_00402459:
          local_5c = -0x7ff8ffa9;
          goto LAB_00402433;
        }
        lpsz = CharNextA(pCVar5);
        if (*lpsz == '\0') goto LAB_00402459;
        pCVar5 = CharNextA(lpsz);
        pcVar4 = (char *)0x0;
        cVar1 = *pCVar5;
        while (cVar1 != '\0') {
          if (cVar1 == ':') {
            pcVar4 = CharNextA(pCVar5);
            pCVar5 = pCVar5 + (1 - (int)lpsz);
            if ((LPCSTR)0x3f < pCVar5) {
              pCVar5 = (LPCSTR)0x40;
            }
            lstrcpynA(local_40,lpsz,(int)pCVar5);
            local_40[(int)(pCVar5 + -1)] = '\0';
            lpsz = local_40;
            break;
          }
          pCVar5 = CharNextA(pCVar5);
          cVar1 = *pCVar5;
        }
        iVar6 = FUN_00402160(&PTR_s_NOWINDOW_0060f7f8,lpsz,&local_4c);
        if (iVar6 == 0) goto LAB_00402459;
        if (pcVar4 == (char *)0x0) {
          if (local_48 != 0) {
            pcVar4 = local_44;
            if ((local_44 == (char *)0x0) && (local_58 < local_50)) {
              pcVar2 = (char *)*puVar7;
              cVar1 = *pcVar2;
              if ((cVar1 != '-') && (cVar1 != '/')) {
                param_3 = param_3 + 1;
                param_4 = param_4 + 1;
                puVar7 = puVar7 + 1;
                local_58 = local_58 + 1;
                pcVar4 = pcVar2;
              }
            }
            goto LAB_004023c2;
          }
        }
        else {
          if (local_48 == 0) goto LAB_00402459;
LAB_004023c2:
          local_44 = pcVar4;
          pCVar5 = local_44;
          if (local_48 != 0) goto LAB_004023ca;
        }
LAB_004023d6:
        _SfList_InsertList_16(local_54,0xffffffff,&local_4c,1);
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
        puVar7 = puVar7 + 1;
        local_58 = local_58 + 1;
      } while (param_3 < local_50);
    }
    *param_1 = local_54;
    if (((local_5c < 0) || (local_54 == (int *)0x0)) || (*local_54 < 1)) {
LAB_00402433:
      *param_1 = 0;
      if (local_54 != (int *)0x0) {
        _SfList_Destroy_4(local_54);
      }
    }
  }
  return local_5c;
}


