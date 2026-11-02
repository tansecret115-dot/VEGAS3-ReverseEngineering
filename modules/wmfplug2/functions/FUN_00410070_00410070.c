/* Module: wmfplug2.dll
   Function: FUN_00410070
   Address: 00410070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410070(int *param_1,int param_2,int param_3)

{
  int iVar1;
  HANDLE hFile;
  DWORD DVar2;
  tm *_Tm;
  uchar *_Source;
  LPCWSTR lpWideCharStr;
  uint unaff_EBX;
  int *piVar3;
  uint uVar4;
  int *unaff_ESI;
  int *piVar5;
  int *unaff_EDI;
  int *piVar6;
  bool bVar7;
  LPCWSTR unaff_retaddr;
  int **lpNumberOfBytesWritten;
  char *pcVar8;
  LPDWORD pDVar9;
  LPOVERLAPPED p_Var10;
  int *piStack_38c;
  int local_374 [2];
  undefined8 uStack_36c;
  uchar auStack_358 [8];
  undefined1 uStack_350;
  uchar auStack_34c [248];
  undefined1 auStack_254 [68];
  uchar auStack_210 [259];
  undefined1 uStack_10d;
  CHAR aCStack_10c [256];
  int *piStack_c;
  undefined4 *puStack_4;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    piStack_38c = local_374;
    iVar1 = (**(code **)(*param_1 + 0x18))();
    if (-1 < iVar1) {
      uVar4 = 0;
      local_374[0] = 0;
      local_374[1] = 0;
      if (unaff_EBX != 0) {
        piVar3 = local_374;
        piVar5 = param_1;
        do {
          if (1 < uVar4) break;
          iVar1 = (**(code **)(*piVar5 + 0x1c))();
          if (-1 < iVar1) {
            iVar1 = (**(code **)(iRam00000000 + 0xc))();
            if (-1 < iVar1) {
              iVar1 = 4;
              piVar5 = local_374;
              bVar7 = true;
              piVar6 = &DAT_0047b630;
              do {
                piVar5 = piVar5 + 1;
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar7 = *piVar5 == *piVar6;
                piVar6 = piVar6 + 1;
              } while (bVar7);
              piVar5 = piStack_c;
              if (bVar7) {
                *piVar3 = 1;
                piVar5 = piStack_c;
              }
            }
            (**(code **)(*unaff_EDI + 8))();
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar4 < unaff_EBX);
      }
      if (*unaff_retaddr == L'\0') {
        if (&stack0x00000000 != (undefined1 *)0x210) {
          auStack_210[0] = '\0';
        }
      }
      else {
        WideCharToMultiByte(0,0,unaff_retaddr,-1,(LPSTR)auStack_210,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      uStack_10d = 0;
      iVar1 = lstrlenA((LPCSTR)auStack_210);
      _mbsncat(auStack_210,".txt",0x103 - iVar1);
      hFile = CreateFileA((LPCSTR)auStack_210,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        pDVar9 = (LPDWORD)&stack0xfffffc80;
        p_Var10 = (LPOVERLAPPED)0x0;
        DVar2 = lstrlenA((LPCSTR)auStack_210);
        WriteFile(hFile,auStack_210,DVar2,pDVar9,p_Var10);
        time(&uStack_36c);
        _Tm = localtime(&uStack_36c);
        _Source = (uchar *)asctime(_Tm);
        _mbscpy((uchar *)((int)&uStack_36c + 4),_Source);
        uStack_350 = 0;
        FUN_00425a40(auStack_34c,(BYTE *)" encoded: %s\r\n");
        pDVar9 = (LPDWORD)&stack0xfffffc80;
        p_Var10 = (LPOVERLAPPED)0x0;
        DVar2 = lstrlenA((LPCSTR)auStack_34c);
        WriteFile(hFile,auStack_34c,DVar2,pDVar9,p_Var10);
        lpWideCharStr = (LPCWSTR)(param_1 + 5);
        if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
          WideCharToMultiByte(0,0,lpWideCharStr,-1,aCStack_10c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x10c) {
          aCStack_10c[0] = '\0';
        }
        piStack_c = (int *)((uint)piStack_c & 0xffffff);
        FUN_00425a40(auStack_34c,(BYTE *)"Template name:%s\r\n");
        piVar3 = (int *)0x0;
        pDVar9 = (LPDWORD)&stack0xfffffc80;
        p_Var10 = (LPOVERLAPPED)0x0;
        DVar2 = lstrlenA((LPCSTR)auStack_34c);
        WriteFile(hFile,auStack_34c,DVar2,pDVar9,p_Var10);
        iVar1 = (**(code **)*puStack_4)();
        if (-1 < iVar1) {
          do {
            iVar1 = (**(code **)(*unaff_ESI + 0x2c))(unaff_ESI);
            if (-1 < iVar1) {
              if (piVar3 == (int *)0x0) {
                pcVar8 = "\r\nFile statistics:\r\n";
              }
              else if (*(int *)(&stack0xfffffc7c + (int)piVar3 * 4) == 0) {
                pcVar8 = "\r\nVideo statistics:\r\n";
              }
              else {
                pcVar8 = "\r\nAudio statistics:\r\n";
              }
              FUN_00425a40(auStack_358,(BYTE *)pcVar8);
              lpNumberOfBytesWritten = &piStack_38c;
              p_Var10 = (LPOVERLAPPED)0x0;
              DVar2 = lstrlenA((LPCSTR)auStack_358);
              WriteFile(hFile,auStack_358,DVar2,(LPDWORD)lpNumberOfBytesWritten,p_Var10);
              FUN_00410390(hFile,(int)auStack_254);
            }
            piVar3 = (int *)((int)piVar3 + 1);
          } while (piVar3 <= unaff_EDI);
          (**(code **)(*unaff_ESI + 8))();
        }
        CloseHandle(hFile);
      }
    }
  }
  return;
}


