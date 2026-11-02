/* Module: Setup.exe
   Function: FUN_004030e0
   Address: 004030e0
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort FUN_004030e0(void)

{
  uchar *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  DWORD DVar4;
  int iVar5;
  ushort uVar6;
  undefined4 *hMem;
  uint uVar7;
  uint local_214;
  undefined4 *local_210;
  LPSTR local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  uVar6 = 4;
  puVar1 = local_208;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = puVar1 + 4;
  }
  puVar1 = (uchar *)GetCommandLineA();
  _mbscpy(local_208,puVar1);
  FUN_00403360((short)local_208,local_208);
  puVar2 = FUN_00402f00(local_208,(int *)&local_214);
  uVar7 = 0;
  DAT_00448640 = 0;
  hMem = puVar2;
  local_210 = puVar2;
  if (1 < local_214) {
    _mbscpy(&DAT_00448028,(uchar *)*puVar2);
    pcVar3 = _SfGetFileNamePtrA_4(&DAT_00448028);
    if ((pcVar3 == &DAT_00448028) &&
       (DVar4 = SearchPathA((LPCSTR)0x0,&DAT_00448028,".exe",0x104,(LPSTR)local_104,&local_20c),
       DVar4 != 0)) {
      _mbscpy(&DAT_00448028,local_104);
    }
    _SfGetPathNameFromFilePath_12(&DAT_00448028,&DAT_0044812c,0x104);
    uVar6 = 1;
    if (local_214 != 0) {
      do {
        iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-a");
        if (iVar5 == 0) {
          uVar7 = uVar7 + 1;
          puVar2 = puVar2 + 1;
          if (local_214 <= uVar7) {
            return 1;
          }
          DAT_00448640 = 1;
          DAT_00448644 = 1;
          _mbscpy(&DAT_00448230,(uchar *)*puVar2);
          uVar6 = uVar6 | 8;
        }
        else {
          iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-p");
          if (iVar5 == 0) {
            uVar7 = uVar7 + 1;
            puVar2 = puVar2 + 1;
            if (local_214 <= uVar7) {
              return 1;
            }
            _mbscpy(&DAT_00448230,(uchar *)*puVar2);
            uVar6 = uVar6 | 0x10;
          }
          else {
            iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-s");
            if (iVar5 == 0) {
              uVar7 = uVar7 + 1;
              puVar2 = puVar2 + 1;
              if (local_214 <= uVar7) {
                return 1;
              }
              _mbscpy(&DAT_00448334,(uchar *)*puVar2);
              uVar6 = uVar6 | 0x20;
            }
            else {
              iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-q");
              if (iVar5 == 0) {
                DAT_00448640 = 1;
                uVar6 = uVar6 | 0x40;
              }
              else {
                iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-l");
                if (iVar5 == 0) {
                  uVar7 = uVar7 + 1;
                  puVar2 = puVar2 + 1;
                  if (local_214 <= uVar7) {
                    return 1;
                  }
                  _mbscpy(&DAT_00448438,(uchar *)*puVar2);
                  uVar6 = uVar6 | 0x80;
                }
                else {
                  iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-r");
                  if (iVar5 == 0) {
                    uVar7 = uVar7 + 1;
                    puVar2 = puVar2 + 1;
                    if (local_214 <= uVar7) {
                      return 1;
                    }
                    _mbscpy(&DAT_0044853c,(uchar *)*puVar2);
                    uVar6 = CONCAT11(1,(char)uVar6);
                  }
                  else {
                    iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-h");
                    if ((iVar5 == 0) || (iVar5 = lstrcmpiA((LPCSTR)*puVar2,"-?"), iVar5 == 0)) {
                      uVar6 = uVar6 | 2;
                    }
                  }
                }
              }
            }
          }
        }
        uVar7 = uVar7 + 1;
        puVar2 = puVar2 + 1;
        hMem = local_210;
      } while (uVar7 < local_214);
    }
  }
  if (hMem != (undefined4 *)0x0) {
    GlobalFree(hMem);
  }
  return uVar6;
}


