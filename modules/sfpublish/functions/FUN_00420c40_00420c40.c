/* Module: sfpublish.dll
   Function: FUN_00420c40
   Address: 00420c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00420c40(void *this,uint param_1)

{
  LPCVOID pvVar1;
  int iVar2;
  int iVar3;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  uint uVar6;
  HGLOBAL pvVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *pvStack_34;
  int local_24;
  int local_20;
  DWORD local_18;
  HANDLE local_14;
  uint local_10;
  undefined1 *local_c;
  int local_8;
  
  uVar9 = param_1;
  uStack_40 = *(undefined4 *)((int)this + 0x74);
  uStack_44 = *(undefined4 *)((int)this + 0x70);
  uStack_4c = *(undefined4 *)((int)this + 0x6c);
  uStack_38 = 0;
  uStack_3c = 1;
  uStack_48 = 0x15;
  uStack_50 = param_1;
  local_8 = -0x7fffbffb;
  pvStack_34 = this;
  iVar2 = InternetConnectA();
  local_24 = iVar2;
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x34) == 0) {
      local_8 = -0x7ffb1ff9;
      FtpDeleteFileA(uVar9,*(undefined4 *)((int)this + 0x7c));
      iVar3 = FtpOpenFileA(iVar2,*(undefined4 *)((int)this + 0x7c),0x40000000,
                           (*(int *)((int)this + 0x80) != 0) + 1 | 0x80000000,this);
      local_20 = iVar3;
      if (iVar3 == 0) {
        DVar4 = GetLastError();
        if (DVar4 == 0x2ee3) {
          local_24 = 0;
          param_1 = 0;
          iVar3 = InternetGetLastResponseInfoA(&local_24,0,&param_1);
          if (iVar3 == 0) {
            DVar4 = GetLastError();
            if (((DVar4 == 0x7a) && (param_1 != 0)) && (param_1 < 0x1000)) {
              FUN_004328f0();
              InternetGetLastResponseInfoA(&local_24,&uStack_50,&param_1);
            }
          }
        }
      }
      else if ((*(int *)((int)this + 0x34) == 0) &&
              (hFile = CreateFileA(*(LPCSTR *)((int)this + 0x78),0x80000000,1,
                                   (LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0),
              iVar2 = local_24, local_14 = hFile, hFile != (HANDLE)0xffffffff)) {
        local_8 = 0;
        DVar4 = GetFileSize(hFile,&local_18);
        *(DWORD *)((int)this + 0x58) = DVar4;
        *(DWORD *)((int)this + 0x5c) = local_18;
        FUN_004328f0();
        local_18 = 0;
        local_c = (undefined1 *)&uStack_50;
        do {
          param_1 = 0;
          BVar5 = ReadFile(hFile,local_c,0x20000,&param_1,(LPOVERLAPPED)0x0);
          if (BVar5 == 0) {
            local_8 = -0x7ffb1ff8;
          }
          else {
            puVar8 = local_c;
            uVar9 = param_1;
            if (param_1 == 0) {
              local_18 = 1;
            }
            else {
              do {
                local_10 = 0;
                uVar6 = 0xc00;
                if (uVar9 < 0xc01) {
                  uVar6 = uVar9;
                }
                iVar2 = InternetWriteFile(local_20,puVar8,uVar6,&local_10);
                if (iVar2 == 0) {
                  GetLastError();
                  local_8 = -0x7ffb1ff7;
                }
                else {
                  uVar6 = *(uint *)((int)this + 0x50);
                  puVar8 = puVar8 + local_10;
                  uVar9 = uVar9 - local_10;
                  *(uint *)((int)this + 0x50) = uVar6 + local_10;
                  *(uint *)((int)this + 0x54) =
                       *(int *)((int)this + 0x54) + (uint)CARRY4(uVar6,local_10);
                  FUN_00420550((int)this);
                }
                hFile = local_14;
              } while (((*(int *)((int)this + 0x34) == 0) && (-1 < local_8)) && (uVar9 != 0));
            }
          }
        } while (((*(int *)((int)this + 0x34) == 0) && (-1 < local_8)) && (local_18 == 0));
        CloseHandle(hFile);
        iVar2 = local_24;
        InternetCloseHandle(local_20);
      }
      else {
        InternetCloseHandle(iVar3);
      }
    }
    InternetCloseHandle(iVar2);
  }
  if (*(int *)((int)this + 0x34) != 0) {
    local_8 = -0x7ffb1ff4;
  }
  pvVar1 = *(LPCVOID *)((int)this + 0x78);
  pvVar7 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar7);
  pvVar7 = GlobalHandle(pvVar1);
  GlobalFree(pvVar7);
  pvVar1 = *(LPCVOID *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x78) = 0;
  pvVar7 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar7);
  pvVar7 = GlobalHandle(pvVar1);
  GlobalFree(pvVar7);
  *(undefined4 *)((int)this + 0x7c) = 0;
  return local_8;
}


