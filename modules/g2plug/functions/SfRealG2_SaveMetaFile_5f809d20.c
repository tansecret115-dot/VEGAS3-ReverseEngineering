/* Module: g2plug.dll
   Function: SfRealG2_SaveMetaFile
   Address: 5f809d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_SaveMetaFile(char const *,struct SFG2_RAM_PARAMS *) */

long SfRealG2_SaveMetaFile(char *param_1,SFG2_RAM_PARAMS *param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  long local_334;
  DWORD local_330;
  uchar local_32c [291];
  char acStack_209 [261];
  uchar local_104 [260];
  
                    /* 0x9d20  42  ?SfRealG2_SaveMetaFile@@YGJPBDPAUSFG2_RAM_PARAMS@@@Z */
  local_334 = 0;
  iVar2 = lstrlenA(param_1);
  do {
    iVar1 = iVar2;
    iVar2 = iVar1 + -1;
    if (iVar2 < 1) goto LAB_5f809d6a;
  } while (param_1[iVar2] != '\\');
  _mbscpy(local_104,(uchar *)(param_1 + iVar1));
LAB_5f809d6a:
  if (*(int *)(param_2 + 0x104) == 0) {
    _mbscpy((uchar *)(acStack_209 + 1),(uchar *)param_1);
  }
  else {
    _mbscpy((uchar *)(acStack_209 + 1),(uchar *)(param_2 + 0x108));
    FUN_5f82a710((BYTE *)(acStack_209 + 1),0x104);
    _mbscat((uchar *)(acStack_209 + 1),local_104);
  }
  iVar2 = lstrlenA(acStack_209 + 1);
  do {
    iVar1 = iVar2;
    if (iVar1 + -1 < 1) goto LAB_5f809dfa;
    iVar2 = iVar1 + -1;
  } while (acStack_209[iVar1] != '.');
  acStack_209[iVar1] = '\0';
LAB_5f809dfa:
  _mbscat((uchar *)(acStack_209 + 1),".ram");
  hObject = CreateFileA(acStack_209 + 1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return -0x7fffbffb;
  }
  iVar2 = lstrlenA(s_file__5f8762c8);
  lstrcpynA((LPSTR)local_32c,(LPCSTR)param_2,iVar2 + 1);
  local_32c[iVar2] = '\0';
  iVar2 = lstrcmpiA(s_file__5f8762c8,(LPCSTR)local_32c);
  if (iVar2 == 0) {
    FUN_5f82a710((BYTE *)param_2,0x104);
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_2);
    if (param_2[iVar2 + -1] != (SFG2_RAM_PARAMS)0x2f) {
      _mbscat((uchar *)param_2,"/");
    }
  }
  FUN_5f825e30(local_32c,"%s%s");
  iVar2 = FUN_5f809fe0(hObject,(char *)local_32c,&local_330);
  if (iVar2 != 0) {
    if (0 < *(int *)(param_2 + 0x20c)) {
      FUN_5f825e30(local_32c,(BYTE *)"?start=%02d:%02d");
      iVar2 = FUN_5f809fe0(hObject,(char *)local_32c,&local_330);
      if (iVar2 == 0) goto LAB_5f809fa3;
    }
    if (0 < *(int *)(param_2 + 0x210)) {
      FUN_5f825e30(local_32c,(BYTE *)"%cend=%02d:%02d");
      iVar2 = FUN_5f809fe0(hObject,(char *)local_32c,&local_330);
      if (iVar2 == 0) goto LAB_5f809fa3;
    }
    _mbscpy(local_32c,"\n\r");
    iVar2 = FUN_5f809fe0(hObject,(char *)local_32c,&local_330);
    if (iVar2 != 0) goto LAB_5f809fab;
  }
LAB_5f809fa3:
  local_334 = -0x7fffbffb;
LAB_5f809fab:
  CloseHandle(hObject);
  return local_334;
}


