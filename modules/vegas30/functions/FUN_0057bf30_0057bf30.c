/* Module: vegas30.exe
   Function: FUN_0057bf30
   Address: 0057bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057bf30(void)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int iVar7;
  int *local_45c;
  int local_458;
  HANDLE local_454;
  DWORD local_450;
  uchar local_44c [260];
  CHAR local_348 [260];
  _WIN32_FIND_DATAA local_244;
  CHAR local_104 [260];
  
  if (DAT_0064a7a8 == 0) {
    return 1;
  }
  local_458 = 1;
  local_45c = (int *)0x0;
  iVar1 = FUN_0057bed0(&local_45c);
  if (-1 < iVar1) {
    FUN_0057bd40(local_104,0x104,0,1,0);
    pvVar2 = FindFirstFileA(local_104,&local_244);
    local_454 = pvVar2;
    if (pvVar2 == (HANDLE)0xffffffff) {
      local_44c[0] = '\0';
    }
    else {
      local_450 = GetCurrentProcessId();
      do {
        FUN_0057bd40(local_44c,0x104,0,2,0);
        _mbscat(local_44c,(uchar *)local_244.cFileName);
        iVar7 = 0;
        iVar1 = *local_45c;
        if (0 < iVar1) {
          do {
            DVar5 = *(DWORD *)(local_45c[1] * iVar7 + local_45c[2]);
            FUN_0057bd40(local_348,0x104,DVar5,0,0);
            iVar3 = lstrcmpiA(local_348,(LPCSTR)local_44c);
            pvVar2 = local_454;
            if ((iVar3 == 0) && (local_450 != DVar5)) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        if (iVar7 == iVar1) goto LAB_0057c05f;
        BVar4 = FindNextFileA(pvVar2,&local_244);
      } while (BVar4 != 0);
      local_44c[0] = '\0';
LAB_0057c05f:
      FindClose(pvVar2);
    }
    _SfList_Destroy_4(local_45c);
    iVar1 = local_458;
    if ((local_44c[0] != '\0') &&
       (DVar5 = GetFileAttributesA((LPCSTR)local_44c), iVar1 = local_458, DVar5 != 0xffffffff)) {
      uVar6 = _SfGetString_8(DAT_00647204,0x6e24);
      iVar1 = SfMsgBox(DAT_00647624,0x34,uVar6);
      if (iVar1 == 6) {
        iVar1 = 0;
        do {
          FUN_0057bd40(local_348,0x104,iVar1,0,&DAT_006486bc);
          iVar1 = iVar1 + 1;
          iVar7 = _SfDoesFileExist_4(local_348);
        } while (iVar7 != 0);
        BVar4 = CopyFileA((LPCSTR)local_44c,local_348,1);
        iVar1 = local_458;
        if (BVar4 != 0) {
          DeleteFileA((LPCSTR)local_44c);
          FUN_00434740(local_348,0);
          return 0;
        }
      }
      else {
        DeleteFileA((LPCSTR)local_44c);
        iVar1 = local_458;
      }
    }
  }
  return iVar1;
}


