/* Module: wmfplug2.dll
   Function: SfWMF_SaveASXFile
   Address: 00418660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_SaveASXFile(char const *,struct SFASF3_ASX_PARAMS *) */

long SfWMF_SaveASXFile(char *param_1,SFASF3_ASX_PARAMS *param_2)

{
  SFASF3_ASX_PARAMS *_Dest;
  bool bVar1;
  undefined3 extraout_var;
  HANDLE hFile;
  int iVar2;
  bool bVar3;
  long local_52c;
  DWORD local_528;
  CHAR local_524 [32];
  uchar local_504 [1284];
  
                    /* 0x18660  37  ?SfWMF_SaveASXFile@@YGJPBDPAUSFASF3_ASX_PARAMS@@@Z */
  local_52c = 0;
  bVar3 = true;
  bVar1 = FUN_0042fd00(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  }
  else {
    hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    bVar3 = hFile == (HANDLE)0xffffffff;
    if (bVar3) {
      hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
    }
    SetFilePointer(hFile,0,(PLONG)0x0,2);
  }
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ffa;
  }
  if (((byte)param_2[0x18c] & 1) == 0) {
    if (bVar3) {
      wsprintfA((LPSTR)local_504,"<ASX version = \"%s\">\r\n",&DAT_0047cc08);
      iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
      if (iVar2 != 0) goto LAB_004187cd;
    }
    else {
LAB_004187cd:
      _mbscpy(local_504,(uchar *)"<Entry>\r\n");
      iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
      if (iVar2 != 0) {
        if (*(int *)(param_2 + 400) != 0) {
          if (*(int *)(param_2 + 0x29c) == 0) {
            if (*(int *)(param_2 + 0x184) != 0) {
              FUN_004184b0(*(int *)(param_2 + 0x184),local_524);
              wsprintfA((LPSTR)local_504,"    <StartTime Value = \"%s\" />\r\n",local_524);
              iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
              if (iVar2 == 0) goto LAB_00418a5d;
            }
            if (*(int *)(param_2 + 0x188) != 0) {
              FUN_004184b0(*(int *)(param_2 + 0x188),local_524);
              wsprintfA((LPSTR)local_504,"    <Duration Value = \"%s\" />\r\n",local_524);
              iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
              goto joined_r0x00418907;
            }
          }
          else {
            if (param_2[0x2a0] != (SFASF3_ASX_PARAMS)0x0) {
              wsprintfA((LPSTR)local_504,"    <StartMarker Name = \"%s\" />\r\n",param_2 + 0x2a0);
              iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
              if (iVar2 == 0) goto LAB_00418a5d;
            }
            if (param_2[0x3a4] != (SFASF3_ASX_PARAMS)0x0) {
              wsprintfA((LPSTR)local_504,"    <EndMarker Name = \"%s\" />\r\n",param_2 + 0x3a4);
              iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
joined_r0x00418907:
              if (iVar2 == 0) goto LAB_00418a5d;
            }
          }
          if (*(int *)(param_2 + 0x194) != 0) {
            if (*(int *)(param_2 + 0x4a8) == 0) {
              wsprintfA((LPSTR)local_504,"    <Banner href = \"%s\" />\r\n",param_2 + 0x198);
              iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
joined_r0x004189d5:
              if (iVar2 != 0) goto LAB_004189db;
            }
            else {
              wsprintfA((LPSTR)local_504,"    <Banner href = \"%s\">\r\n",param_2 + 0x198);
              iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
              if (iVar2 != 0) {
                wsprintfA((LPSTR)local_504,"         <MoreInfo href = \"%s\" />\r\n",param_2 + 0x4ac
                         );
                iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
                if (iVar2 != 0) {
                  _mbscpy(local_504,(uchar *)"    </Banner>\r\n");
                  iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
                  goto joined_r0x004189d5;
                }
              }
            }
            goto LAB_00418a5d;
          }
        }
LAB_004189db:
        FUN_004185f0((BYTE *)(param_2 + 0x104),0x80);
        wsprintfA((LPSTR)local_504,"    <Ref href = \"%s%s\" />\r\n",param_2 + 0x104,param_2);
        iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
        if (iVar2 != 0) {
          _mbscpy(local_504,(uchar *)"</Entry>\r\n");
          iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
          if (iVar2 != 0) {
            _mbscpy(local_504,(uchar *)"</ASX>\r\n");
            iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
            goto joined_r0x00418a5b;
          }
        }
      }
    }
  }
  else {
    iVar2 = lstrlenA(s_file__004887c8);
    _Dest = param_2 + 0x104;
    lstrcpynA((LPSTR)local_504,(LPCSTR)_Dest,iVar2 + 1);
    local_504[iVar2] = '\0';
    iVar2 = lstrcmpiA(s_file__004887c8,(LPCSTR)local_504);
    if (iVar2 == 0) {
      FUN_0042f550((BYTE *)_Dest,0x80);
    }
    else {
      iVar2 = lstrlenA((LPCSTR)_Dest);
      if (param_2[iVar2 + 0x103] != (SFASF3_ASX_PARAMS)0x2f) {
        _mbscat((uchar *)_Dest,"/");
      }
    }
    wsprintfA((LPSTR)local_504,"ASF %s%s\r\n",_Dest,param_2);
    iVar2 = FUN_00418a90(hFile,(char *)local_504,&local_528);
joined_r0x00418a5b:
    if (iVar2 != 0) goto LAB_00418a65;
  }
LAB_00418a5d:
  local_52c = -0x7ffb1ff7;
LAB_00418a65:
  CloseHandle(hFile);
  return local_52c;
}


