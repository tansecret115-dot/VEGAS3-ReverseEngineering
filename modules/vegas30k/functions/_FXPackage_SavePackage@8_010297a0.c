/* Module: vegas30k.dll
   Function: _FXPackage_SavePackage@8
   Address: 010297a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _FXPackage_SavePackage_8(int *param_1,int *param_2)

{
  ulong cbData;
  uint uVar1;
  HANDLE hFile;
  LPVOID lpBuffer;
  BOOL BVar2;
  LSTATUS LVar3;
  BYTE *lpData;
  int iVar4;
  IStream *unaff_EBP;
  int *piVar5;
  ULARGE_INTEGER *unaff_EDI;
  int *piVar6;
  uchar *puVar7;
  bool bVar8;
  ULONG *pcbRead;
  HKEY local_22c;
  HGLOBAL pvStack_228;
  LPSTREAM local_224;
  GUID local_220;
  DWORD DStack_210;
  int *piStack_20c;
  DWORD DStack_208;
  uchar auStack_204 [260];
  uchar auStack_100 [256];
  
                    /* 0x297a0  646  _FXPackage_SavePackage@8 */
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar1 = 0x80004003;
  }
  else {
    iVar4 = 4;
    bVar8 = true;
    piVar5 = &DAT_011dab90;
    piVar6 = param_2;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    local_22c = (HKEY)0x0;
    if (bVar8) {
      uVar1 = CoCreateGuid(&local_220);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      *param_2 = local_220.Data1;
      param_2[1] = local_220._4_4_;
      param_2[2] = local_220.Data4._0_4_;
      param_2[3] = local_220.Data4._4_4_;
    }
    uVar1 = _FXPackage_OpenPackageRegKey_24(*param_2,param_2[1],param_2[2],param_2[3],&local_22c,1);
    if (uVar1 == 0) {
      local_224 = (IStream *)0x0;
      uVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_224);
      if ((uVar1 == 0) &&
         ((uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_224,1), uVar1 == 0 || (uVar1 == 1)))
         ) {
        local_220.Data1 = 0;
        local_220.Data2 = 0;
        local_220.Data3 = 0;
        (*local_224->lpVtbl->Seek)(local_224,(LARGE_INTEGER)0x100000000,(DWORD)&local_220,unaff_EDI)
        ;
        (**(code **)(*(int *)local_220.Data1 + 0x14))(local_220.Data1,0,0,0,0);
        cbData = local_220.Data1;
        piStack_20c = (int *)local_220.Data1;
        if (local_220.Data1 < (int *)0x101) {
          GetHGlobalFromStream(local_224,&pvStack_228);
          lpData = GlobalLock(pvStack_228);
          RegSetValueExA(local_22c,"Name",0,1,(BYTE *)(param_2 + 4),0x104);
          RegSetValueExA(local_22c,"Type",0,4,(BYTE *)(param_2 + 0x45),4);
          RegSetValueExA(local_22c,"Flags",0,4,(BYTE *)(param_2 + 0x46),4);
          LVar3 = RegSetValueExA(local_22c,"Stream",0,3,lpData,cbData);
          uVar1 = (uint)(LVar3 != 0);
          GlobalUnlock(pvStack_228);
        }
        else {
          puVar7 = auStack_204;
          for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar7[0] = '\0';
            puVar7[1] = '\0';
            puVar7[2] = '\0';
            puVar7[3] = '\0';
            puVar7 = puVar7 + 4;
          }
          _FXPackage_BuildPath_24(*param_2,param_2[1],param_2[2],param_2[3],auStack_204,0);
          _SfCreateDirectory_8(auStack_204,0);
          _mbscpy(auStack_100,(uchar *)(param_2 + 4));
          _SfValidateFileName_8(auStack_100,1);
          _mbscat(auStack_204,"\\");
          _mbscat(auStack_204,auStack_100);
          _mbscat(auStack_204,".sfg");
          DStack_210 = lstrlenA((LPCSTR)auStack_204);
          hFile = CreateFileA((LPCSTR)auStack_204,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,
                              (HANDLE)0x0);
          if (hFile == (HANDLE)0xffffffff) {
            uVar1 = 0x8004e006;
          }
          else {
            GetHGlobalFromStream(local_224,&pvStack_228);
            lpBuffer = GlobalLock(pvStack_228);
            BVar2 = WriteFile(hFile,lpBuffer,(DWORD)piStack_20c,&DStack_208,(LPOVERLAPPED)0x0);
            if (BVar2 != 0) {
              RegSetValueExA(local_22c,"Name",0,1,(BYTE *)(param_2 + 4),0x104);
              RegSetValueExA(local_22c,"Type",0,4,(BYTE *)(param_2 + 0x45),4);
              RegSetValueExA(local_22c,"Flags",0,4,(BYTE *)(param_2 + 0x46),4);
              LVar3 = RegSetValueExA(local_22c,"Stream",0,1,auStack_204,DStack_210);
              uVar1 = (uint)(LVar3 != 0);
              SetEndOfFile(hFile);
            }
            GlobalUnlock(pvStack_228);
            CloseHandle(hFile);
          }
        }
        (*local_224->lpVtbl->Release)(local_224);
        local_224 = (IStream *)0x0;
      }
      RegCloseKey(local_22c);
      if (uVar1 == 0) {
        pcbRead = &DAT_011d9c30;
        pvStack_228 = (HGLOBAL)0x0;
        (**(code **)*param_1)(param_1,&DAT_011d9c30,&pvStack_228);
        if (unaff_EBP != (IStream *)0x0) {
          (*unaff_EBP->lpVtbl[3].Read)(unaff_EBP,param_2,(ULONG)param_1,pcbRead);
          (**(code **)(local_22c->unused + 8))(local_22c);
        }
      }
      return uVar1;
    }
  }
  return uVar1;
}


