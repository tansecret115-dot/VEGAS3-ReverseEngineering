/* Module: sfpublish.dll
   Function: FUN_00422090
   Address: 00422090
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00422090(void *this,int param_1)

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
  
  iVar1 = FUN_00421e90(this,local_3c);
  if (iVar1 < 0) goto LAB_0042235e;
  if ((local_30 == 3) || (local_30 == 4)) {
    iVar2 = InternetConnectA(param_1,local_2c,local_24,local_20,local_18,3,0,this);
    if (iVar2 == 0) {
      GetLastError();
      pcVar11 = 
      "InternetConnect failed to host \'%s\' port %d username \'%s\' password \'%s\' GLE=%d";
      uVar12 = 0x8e3;
      pcVar9 = "sfinternet.cpp";
      uVar8 = 1;
      puVar4 = FUN_004012b0();
      FUN_00415b60((int)puVar4,uVar8,pcVar9,uVar12,pcVar11);
    }
    else {
      if (*(int *)((int)this + 0x34) == 0) {
        _mbscat(puStack_10,puStack_8);
        param_1 = 0;
        iVar3 = FUN_00421c40(*(LPCSTR *)((int)this + 0x78),&param_1);
        if (iVar3 != 0) {
          uVar12 = 0;
          iVar2 = HttpOpenRequestA(iVar2,&DAT_0043b16c,puStack_10,"HTTP/1.1",0,param_1,0x84000000,
                                   this);
          if (iVar2 == 0) {
            GetLastError();
            pcVar11 = "HttpOpenRequest failed to %s GLE=%d";
            uVar10 = 0x8d0;
            pcVar9 = "sfinternet.cpp";
            uVar8 = 1;
            puVar4 = FUN_004012b0();
            FUN_00415b60((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
            goto LAB_004222d5;
          }
          if (*(int *)((int)this + 0x7c) != 0) {
            iVar3 = HttpAddRequestHeadersA(iVar2,*(int *)((int)this + 0x7c),0xffffffff,0xa0000000);
            if (iVar3 == 0) {
              GetLastError();
              pcVar11 = "HttpAddRequestHeaders failed with \'%s\' GLE=%d";
              uVar10 = 0x886;
              pcVar9 = "sfinternet.cpp";
              uVar8 = 1;
              puVar4 = FUN_004012b0();
              FUN_00415b60((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
              InternetCloseHandle(iVar2);
              goto LAB_004222d5;
            }
          }
          pvVar7 = GlobalAlloc(0x40,0x20);
          puVar5 = GlobalLock(pvVar7);
          if (puVar5 == (undefined4 *)0x0) {
LAB_0042229c:
            iVar1 = -0x7ff8fff2;
            InternetCloseHandle(iVar2);
          }
          else {
            puVar5 = (undefined4 *)FUN_00420ed0(puVar5);
            if (puVar5 == (undefined4 *)0x0) goto LAB_0042229c;
            if (*(uchar **)((int)this + 0x80) == (uchar *)0x0) {
LAB_004221f8:
              iVar1 = HttpSendRequestA(iVar2,0,0,0,0);
              if (iVar1 == 0) {
                GetLastError();
                pcVar11 = "HttpSendRequest failed GLE=%d";
                uVar10 = 0x8b3;
                pcVar9 = "sfinternet.cpp";
                uVar8 = 1;
                puVar4 = FUN_004012b0();
                FUN_00415b60((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
                DVar6 = GetLastError();
                iVar1 = (-(uint)(DVar6 != 0x2ee2) & 0xfffffff6) + 0x8004e0f6;
                goto LAB_0042228c;
              }
              if (*(int *)((int)this + 0x34) == 0) {
                iVar1 = FUN_004215d0(puVar5,iVar2);
                if (iVar1 < 0) goto LAB_0042228c;
                *local_18 = puVar5;
                InternetCloseHandle(iVar2);
              }
              else {
                iVar1 = -0x7ffb1ff4;
                FUN_00420fc0(puVar5);
                InternetCloseHandle(iVar2);
              }
            }
            else {
              iVar1 = FUN_00421000(puVar5,*(uchar **)((int)this + 0x80));
              if (-1 < iVar1) goto LAB_004221f8;
LAB_0042228c:
              FUN_00420fc0(puVar5);
              InternetCloseHandle(iVar2);
            }
          }
LAB_004222d5:
          pvVar7 = GlobalHandle(pvStack_1c);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pvStack_1c);
          GlobalFree(pvVar7);
          InternetCloseHandle(uVar12);
          goto LAB_00422351;
        }
        iVar1 = -0x7ffb1f0d;
      }
      InternetCloseHandle(iVar2);
    }
  }
  else {
    iVar1 = -0x7ffb1f0e;
  }
LAB_00422351:
  FUN_00421fb0((int)local_3c);
LAB_0042235e:
  if (*(int *)((int)this + 0x34) != 0) {
    iVar1 = -0x7ffb1ff4;
  }
  FUN_00421dd0((int)this);
  return iVar1;
}


