/* Module: vegas30k.dll
   Function: _SfDSFilter_SavePreset@12
   Address: 01028c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

uint _SfDSFilter_SavePreset_12(int *param_1)

{
  char cVar1;
  uchar uVar2;
  uint uVar3;
  HANDLE hFile;
  LPVOID lpBuffer;
  BOOL BVar4;
  LSTATUS LVar5;
  BYTE *lpData;
  int iVar6;
  uint uVar7;
  uint uVar8;
  HGLOBAL unaff_EBX;
  ULARGE_INTEGER *unaff_EBP;
  uint unaff_ESI;
  uchar *puVar9;
  char *pcVar10;
  HKEY unaff_EDI;
  uchar *puVar11;
  HKEY *ppHVar12;
  char *pcVar13;
  HKEY *ppHVar14;
  IStream *pstm;
  LPSTREAM local_21c;
  int *piStack_218;
  HKEY local_214 [65];
  uchar auStack_110 [264];
  uchar *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x28c00  807  _SfDSFilter_SavePreset@12 */
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  local_214[0] = (HKEY)0x0;
  uVar3 = FUN_01028690(param_1,local_214,1);
  if (uVar3 == 0) {
    local_21c = (IStream *)0x0;
    uVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_21c);
    if (uVar3 == 0) {
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,local_21c,1);
      if (-1 < (int)uVar3) {
        local_214[1] = (HKEY)0x0;
        local_214[2] = (HKEY)0x0;
        (*local_21c->lpVtbl->Seek)
                  (local_21c,(LARGE_INTEGER)0x100000000,(DWORD)(local_214 + 1),unaff_EBP);
        pstm = (LPSTREAM)0x0;
        (**(code **)(*piStack_218 + 0x14))(piStack_218,0,0,0);
        if (unaff_ESI < 0x101) {
          GetHGlobalFromStream(pstm,(HGLOBAL *)&stack0xfffffdd8);
          lpData = GlobalLock(unaff_EBX);
          LVar5 = RegSetValueExA(unaff_EDI,(LPCSTR)puStack_8,0,3,lpData,unaff_ESI);
          uVar3 = (uint)(LVar5 != 0);
          GlobalUnlock(unaff_EBX);
        }
        else {
          ppHVar14 = local_214;
          for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppHVar14 = (HKEY)0x0;
            ppHVar14 = ppHVar14 + 1;
          }
          FUN_01028810(param_1,local_214,0,uStack_4);
          _SfCreateDirectory_8(local_214,0);
          _mbscpy(auStack_110,puStack_8);
          _SfValidateFileName_8(auStack_110,1);
          uVar7 = 0xffffffff;
          pcVar10 = "\\";
          do {
            pcVar13 = pcVar10;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar6 = -1;
          ppHVar14 = local_214;
          do {
            ppHVar12 = ppHVar14;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            ppHVar12 = (HKEY *)((int)ppHVar14 + 1);
            cVar1 = *(char *)ppHVar14;
            ppHVar14 = ppHVar12;
          } while (cVar1 != '\0');
          pcVar10 = pcVar13 + -uVar7;
          pcVar13 = (char *)((int)ppHVar12 + -1);
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar7 = 0xffffffff;
          puVar9 = auStack_110;
          do {
            puVar11 = puVar9;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            puVar11 = puVar9 + 1;
            uVar2 = *puVar9;
            puVar9 = puVar11;
          } while (uVar2 != '\0');
          uVar7 = ~uVar7;
          iVar6 = -1;
          ppHVar14 = local_214;
          do {
            ppHVar12 = ppHVar14;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            ppHVar12 = (HKEY *)((int)ppHVar14 + 1);
            cVar1 = *(char *)ppHVar14;
            ppHVar14 = ppHVar12;
          } while (cVar1 != '\0');
          puVar9 = puVar11 + -uVar7;
          puVar11 = (uchar *)((int)ppHVar12 + -1);
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 4;
            puVar11 = puVar11 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          uVar7 = 0xffffffff;
          pcVar10 = ".dxp";
          do {
            pcVar13 = pcVar10;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar6 = -1;
          ppHVar14 = local_214;
          do {
            ppHVar12 = ppHVar14;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            ppHVar12 = (HKEY *)((int)ppHVar14 + 1);
            cVar1 = *(char *)ppHVar14;
            ppHVar14 = ppHVar12;
          } while (cVar1 != '\0');
          pcVar10 = pcVar13 + -uVar7;
          pcVar13 = (char *)((int)ppHVar12 + -1);
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar7 = 0xffffffff;
          ppHVar14 = local_214;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *(char *)ppHVar14;
            ppHVar14 = (HKEY *)((int)ppHVar14 + 1);
          } while (cVar1 != '\0');
          hFile = CreateFileA((LPCSTR)local_214,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                              (HANDLE)0x0);
          if (hFile == (HANDLE)0xffffffff) {
            uVar3 = 0x8004e006;
          }
          else {
            GetHGlobalFromStream(pstm,(HGLOBAL *)&stack0xfffffdd8);
            lpBuffer = GlobalLock(unaff_EBX);
            BVar4 = WriteFile(hFile,lpBuffer,unaff_ESI,(LPDWORD)&piStack_218,(LPOVERLAPPED)0x0);
            if (BVar4 != 0) {
              LVar5 = RegSetValueExA(unaff_EDI,(LPCSTR)puStack_8,0,1,(BYTE *)local_214,~uVar7 - 1);
              uVar3 = (uint)(LVar5 != 0);
            }
            GlobalUnlock(unaff_EBX);
            CloseHandle(hFile);
          }
        }
        (*pstm->lpVtbl->Release)(pstm);
        local_21c = (IStream *)0x0;
      }
    }
    RegCloseKey(local_214[0]);
  }
  return uVar3;
}


