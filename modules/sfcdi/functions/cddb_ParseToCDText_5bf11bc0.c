/* Module: sfcdi.dll
   Function: cddb_ParseToCDText
   Address: 5bf11bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cddb_ParseToCDText(char *,unsigned long,struct _sfcdtext *) */

long cddb_ParseToCDText(char *param_1,ulong param_2,_sfcdtext *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  size_t _MaxCount;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int local_714;
  int local_70c;
  uchar local_708 [255];
  undefined1 local_609;
  byte local_608 [6];
  char local_602;
  char local_601;
  uchar local_508 [256];
  CHAR local_408 [260];
  CHAR local_304 [260];
  CHAR local_200 [512];
  
                    /* 0x11bc0  151  ?cddb_ParseToCDText@@YGJPADKPAU_sfcdtext@@@Z */
  local_200[0] = '\0';
  local_714 = -1;
  bVar3 = false;
  if (*param_1 == '\0') {
    return 0;
  }
  do {
    param_1 = FUN_5bf11ae0((char *)local_608,param_1,0x100,&local_70c);
    pbVar7 = local_608;
    if (local_608[0] == 0x23) {
      pbVar7 = local_608;
      do {
        do {
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 == 0x20);
      } while (*pbVar7 == 9);
      _MaxCount = lstrlenA(s_Revision__5bf64668);
      iVar4 = strncmp((char *)pbVar7,s_Revision__5bf64668,_MaxCount);
      if (iVar4 == 0) {
        iVar4 = lstrlenA(s_Revision__5bf64668);
        lstrcpynA((LPSTR)local_708,(LPCSTR)(pbVar7 + iVar4),0x100);
        local_609 = 0;
        uVar5 = FUN_5bf2cbc0(local_708,0);
        *(undefined4 *)(param_3 + 0x718) = uVar5;
      }
    }
    else {
      for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
      }
      bVar2 = false;
      iVar4 = lstrlenA(s_DTITLE_5bf64658);
      bVar10 = false;
      iVar6 = 0;
      bVar11 = true;
      pbVar8 = pbVar7;
      pbVar9 = (byte *)s_DTITLE_5bf64658;
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        bVar10 = *pbVar8 < *pbVar9;
        bVar11 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      }
      if (iVar6 == 0) {
        bVar10 = false;
        bVar2 = true;
      }
      else {
        iVar4 = lstrlenA(s_TTITLE_5bf64660);
        bVar10 = false;
        iVar6 = 0;
        bVar11 = true;
        pbVar8 = pbVar7;
        pbVar9 = (byte *)s_TTITLE_5bf64660;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) break;
          bVar10 = *pbVar8 < *pbVar9;
          bVar11 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
        if (iVar6 != 0) goto LAB_5bf11eba;
        bVar10 = true;
      }
      bVar1 = *pbVar7;
      while ((bVar1 != 0x3d && (bVar1 != 0))) {
        pbVar8 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        bVar1 = *pbVar8;
      }
      if (*pbVar7 == 0x3d) {
        pbVar7 = pbVar7 + 1;
      }
      if (bVar2) {
        lstrcatA(local_200,(LPCSTR)pbVar7);
        bVar3 = true;
      }
      else if (bVar3) {
        bVar3 = false;
        FUN_5bf11b60(local_200,local_304,local_408);
        if (param_3 != (_sfcdtext *)0x0) {
          lstrcpynA((LPSTR)local_708,local_408,0x100);
          local_609 = 0;
          cdtext_SetItemText(param_3,0,0,(char *)local_708);
          lstrcpynA((LPSTR)local_708,local_304,0x100);
          local_609 = 0;
          cdtext_SetItemText(param_3,0,1,(char *)local_708);
        }
      }
      if (bVar10) {
        iVar4 = 0;
        iVar6 = isdigit((int)local_602);
        if (iVar6 != 0) {
          iVar4 = local_602 + -0x30;
        }
        iVar6 = isdigit((int)local_601);
        if (iVar6 != 0) {
          iVar4 = local_601 + -0x30 + iVar4 * 10;
        }
        if (param_3 != (_sfcdtext *)0x0) {
          local_508[0] = '\0';
          if (iVar4 == local_714) {
            cdtext_GetItemText(param_3,iVar4 + 1,0,(char *)local_508,0x100);
          }
          lstrcpynA((LPSTR)local_708,(LPCSTR)pbVar7,0x100);
          local_609 = 0;
          _mbscat(local_508,local_708);
          cdtext_SetItemText(param_3,iVar4 + 1,0,(char *)local_508);
          local_714 = iVar4;
        }
      }
    }
LAB_5bf11eba:
    if (*param_1 == '\0') {
      return 0;
    }
  } while( true );
}


