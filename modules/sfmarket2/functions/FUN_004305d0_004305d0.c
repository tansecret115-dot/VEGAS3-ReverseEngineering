/* Module: sfmarket2.dll
   Function: FUN_004305d0
   Address: 004305d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004305d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  HGLOBAL pvVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 local_3c [3];
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  LPCVOID pvStack_1c;
  undefined4 *local_18;
  uchar *puStack_10;
  uchar *puStack_8;
  
  iVar1 = FUN_0042fff0(this,local_3c);
  if (iVar1 < 0) goto LAB_004308a7;
  if ((local_30 == 3) || (local_30 == 4)) {
    iVar2 = InternetConnectA(param_1,local_2c,local_24,local_20,local_18,3,0,this);
    if (iVar2 == 0) {
      GetLastError();
      pcVar11 = 
      "InternetConnect failed to host \'%s\' port %d username \'%s\' password \'%s\' GLE=%d";
      uVar12 = 0x9dc;
      pcVar9 = "sfinternet.cpp";
      uVar8 = 1;
      puVar4 = FUN_004012e0();
      FUN_0041ff00((int)puVar4,uVar8,pcVar9,uVar12,pcVar11);
    }
    else {
      if (*(int *)((int)this + 0x34) == 0) {
        _mbscat(puStack_10,puStack_8);
        param_1 = 0;
        iVar3 = FUN_0042fda0(*(LPCSTR *)((int)this + 0x78),&param_1);
        if (iVar3 != 0) {
          uVar12 = 0;
          iVar2 = HttpOpenRequestA(iVar2,&DAT_0049cbfc,puStack_10,"HTTP/1.1",0,param_1,0x84000000,
                                   this);
          if (iVar2 == 0) {
            GetLastError();
            pcVar11 = "HttpOpenRequest failed to %s GLE=%d";
            uVar10 = 0x9c9;
            pcVar9 = "sfinternet.cpp";
            uVar8 = 1;
            puVar4 = FUN_004012e0();
            FUN_0041ff00((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
            goto LAB_0043081f;
          }
          if (*(int *)((int)this + 0x7c) != 0) {
            iVar3 = HttpAddRequestHeadersA(iVar2,*(int *)((int)this + 0x7c),0xffffffff,0xa0000000);
            if (iVar3 == 0) {
              GetLastError();
              pcVar11 = "HttpAddRequestHeaders failed with \'%s\' GLE=%d";
              uVar10 = 0x97f;
              pcVar9 = "sfinternet.cpp";
              uVar8 = 1;
              puVar4 = FUN_004012e0();
              FUN_0041ff00((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
              InternetCloseHandle(iVar2);
              goto LAB_0043081f;
            }
          }
          pvVar7 = GlobalAlloc(0x40,0x20);
          puVar5 = GlobalLock(pvVar7);
          if (puVar5 == (undefined4 *)0x0) {
LAB_004307e6:
            iVar1 = -0x7ff8fff2;
            InternetCloseHandle(iVar2);
          }
          else {
            puVar5 = (undefined4 *)FUN_0042f030(puVar5);
            if (puVar5 == (undefined4 *)0x0) goto LAB_004307e6;
            if (*(uchar **)((int)this + 0x80) == (uchar *)0x0) {
LAB_00430738:
              iVar1 = HttpSendRequestA(iVar2,0,0,*(undefined4 *)((int)this + 0x84),
                                       *(undefined4 *)((int)this + 0x88));
              if (iVar1 == 0) {
                GetLastError();
                pcVar11 = "HttpSendRequest failed GLE=%d";
                uVar10 = 0x9ac;
                pcVar9 = "sfinternet.cpp";
                uVar8 = 1;
                puVar4 = FUN_004012e0();
                FUN_0041ff00((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
                DVar6 = GetLastError();
                iVar1 = (-(uint)(DVar6 != 0x2ee2) & 0xfffffff6) + 0x8004e0f6;
                goto LAB_004307d6;
              }
              if (*(int *)((int)this + 0x34) == 0) {
                iVar1 = FUN_0042f730(puVar5,iVar2);
                if (iVar1 < 0) goto LAB_004307d6;
                *local_18 = puVar5;
                InternetCloseHandle(iVar2);
              }
              else {
                iVar1 = -0x7ffb1ff4;
                FUN_0042f120(puVar5);
                InternetCloseHandle(iVar2);
              }
            }
            else {
              iVar1 = FUN_0042f160(puVar5,*(uchar **)((int)this + 0x80));
              if (-1 < iVar1) goto LAB_00430738;
LAB_004307d6:
              FUN_0042f120(puVar5);
              InternetCloseHandle(iVar2);
            }
          }
LAB_0043081f:
          pvVar7 = GlobalHandle(pvStack_1c);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pvStack_1c);
          GlobalFree(pvVar7);
          InternetCloseHandle(uVar12);
          goto LAB_0043089b;
        }
        iVar1 = -0x7ffb1f0d;
      }
      InternetCloseHandle(iVar2);
    }
  }
  else {
    iVar1 = -0x7ffb1f0e;
  }
LAB_0043089b:
  FUN_00430110((int)local_3c);
LAB_004308a7:
  if (*(int *)((int)this + 0x34) != 0) {
    iVar1 = -0x7ffb1ff4;
  }
  FUN_0042ff30((int)this);
  pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x84));
  GlobalUnlock(pvVar7);
  pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x84));
  GlobalFree(pvVar7);
  *(undefined4 *)((int)this + 0x84) = 0;
  return iVar1;
}


