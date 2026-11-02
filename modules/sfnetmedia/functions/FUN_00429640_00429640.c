/* Module: sfnetmedia.dll
   Function: FUN_00429640
   Address: 00429640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00429640(void *this,int param_1)

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
  
  iVar1 = FUN_00429060(this,local_3c);
  if (iVar1 < 0) goto LAB_00429917;
  if ((local_30 == 3) || (local_30 == 4)) {
    iVar2 = InternetConnectA(param_1,local_2c,local_24,local_20,local_18,3,0,this);
    if (iVar2 == 0) {
      GetLastError();
      pcVar11 = 
      "InternetConnect failed to host \'%s\' port %d username \'%s\' password \'%s\' GLE=%d";
      uVar12 = 0x9dc;
      pcVar9 = "sfinternet.cpp";
      uVar8 = 1;
      puVar4 = FUN_004012b0();
      FUN_004124f0((int)puVar4,uVar8,pcVar9,uVar12,pcVar11);
    }
    else {
      if (*(int *)((int)this + 0x34) == 0) {
        _mbscat(puStack_10,puStack_8);
        param_1 = 0;
        iVar3 = FUN_00428e10(*(LPCSTR *)((int)this + 0x78),&param_1);
        if (iVar3 != 0) {
          uVar12 = 0;
          iVar2 = HttpOpenRequestA(iVar2,&DAT_0043b128,puStack_10,"HTTP/1.1",0,param_1,0x84000000,
                                   this);
          if (iVar2 == 0) {
            GetLastError();
            pcVar11 = "HttpOpenRequest failed to %s GLE=%d";
            uVar10 = 0x9c9;
            pcVar9 = "sfinternet.cpp";
            uVar8 = 1;
            puVar4 = FUN_004012b0();
            FUN_004124f0((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
            goto LAB_0042988f;
          }
          if (*(int *)((int)this + 0x7c) != 0) {
            iVar3 = HttpAddRequestHeadersA(iVar2,*(int *)((int)this + 0x7c),0xffffffff,0xa0000000);
            if (iVar3 == 0) {
              GetLastError();
              pcVar11 = "HttpAddRequestHeaders failed with \'%s\' GLE=%d";
              uVar10 = 0x97f;
              pcVar9 = "sfinternet.cpp";
              uVar8 = 1;
              puVar4 = FUN_004012b0();
              FUN_004124f0((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
              InternetCloseHandle(iVar2);
              goto LAB_0042988f;
            }
          }
          pvVar7 = GlobalAlloc(0x40,0x20);
          puVar5 = GlobalLock(pvVar7);
          if (puVar5 == (undefined4 *)0x0) {
LAB_00429856:
            iVar1 = -0x7ff8fff2;
            InternetCloseHandle(iVar2);
          }
          else {
            puVar5 = (undefined4 *)FUN_004280a0(puVar5);
            if (puVar5 == (undefined4 *)0x0) goto LAB_00429856;
            if (*(uchar **)((int)this + 0x80) == (uchar *)0x0) {
LAB_004297a8:
              iVar1 = HttpSendRequestA(iVar2,0,0,*(undefined4 *)((int)this + 0x84),
                                       *(undefined4 *)((int)this + 0x88));
              if (iVar1 == 0) {
                GetLastError();
                pcVar11 = "HttpSendRequest failed GLE=%d";
                uVar10 = 0x9ac;
                pcVar9 = "sfinternet.cpp";
                uVar8 = 1;
                puVar4 = FUN_004012b0();
                FUN_004124f0((int)puVar4,uVar8,pcVar9,uVar10,pcVar11);
                DVar6 = GetLastError();
                iVar1 = (-(uint)(DVar6 != 0x2ee2) & 0xfffffff6) + 0x8004e0f6;
                goto LAB_00429846;
              }
              if (*(int *)((int)this + 0x34) == 0) {
                iVar1 = FUN_004287a0(puVar5,iVar2);
                if (iVar1 < 0) goto LAB_00429846;
                *local_18 = puVar5;
                InternetCloseHandle(iVar2);
              }
              else {
                iVar1 = -0x7ffb1ff4;
                FUN_00428190(puVar5);
                InternetCloseHandle(iVar2);
              }
            }
            else {
              iVar1 = FUN_004281d0(puVar5,*(uchar **)((int)this + 0x80));
              if (-1 < iVar1) goto LAB_004297a8;
LAB_00429846:
              FUN_00428190(puVar5);
              InternetCloseHandle(iVar2);
            }
          }
LAB_0042988f:
          pvVar7 = GlobalHandle(pvStack_1c);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pvStack_1c);
          GlobalFree(pvVar7);
          InternetCloseHandle(uVar12);
          goto LAB_0042990b;
        }
        iVar1 = -0x7ffb1f0d;
      }
      InternetCloseHandle(iVar2);
    }
  }
  else {
    iVar1 = -0x7ffb1f0e;
  }
LAB_0042990b:
  FUN_00429180((int)local_3c);
LAB_00429917:
  if (*(int *)((int)this + 0x34) != 0) {
    iVar1 = -0x7ffb1ff4;
  }
  FUN_00428fa0((int)this);
  pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x84));
  GlobalUnlock(pvVar7);
  pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x84));
  GlobalFree(pvVar7);
  *(undefined4 *)((int)this + 0x84) = 0;
  return iVar1;
}


