/* Module: sfmarket2.dll
   Function: FUN_004313f0
   Address: 004313f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004313f0(void *this,int param_1)

{
  LPCVOID pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  HGLOBAL pvVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 local_3c [3];
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  LPCVOID pvStack_1c;
  undefined4 *local_18;
  uchar *puStack_10;
  uchar *puStack_8;
  
  iVar2 = FUN_0042fff0(this,local_3c);
  if (iVar2 < 0) goto LAB_00431652;
  if ((local_30 == 3) || (local_30 == 4)) {
    iVar3 = InternetConnectA(param_1,local_2c,local_24,local_20,local_18,3,0,this);
    if (iVar3 == 0) {
      GetLastError();
      pcVar12 = 
      "InternetConnect failed to host \'%s\' port %d username \'%s\' password \'%s\' GLE=%d";
      uVar11 = 0xced;
      pcVar10 = "sfinternet.cpp";
      uVar9 = 1;
      puVar6 = FUN_004012e0();
      FUN_0041ff00((int)puVar6,uVar9,pcVar10,uVar11,pcVar12);
    }
    else {
      if (*(int *)((int)this + 0x34) == 0) {
        _mbscat(puStack_10,puStack_8);
        param_1 = 0;
        iVar4 = FUN_0042fda0(*(LPCSTR *)((int)this + 0x78),&param_1);
        if (iVar4 != 0) {
          iVar4 = param_1;
          iVar3 = HttpOpenRequestA(iVar3,&DAT_0049cbfc,puStack_10,"HTTP/1.1",0,param_1,0x84000000,
                                   this);
          if (iVar3 == 0) {
            GetLastError();
            pcVar12 = "HttpOpenRequest failed to %s GLE=%d";
            uVar11 = 0xcda;
            pcVar10 = "sfinternet.cpp";
            uVar9 = 1;
            puVar6 = FUN_004012e0();
            FUN_0041ff00((int)puVar6,uVar9,pcVar10,uVar11,pcVar12);
          }
          else {
            if (*(int *)((int)this + 0x7c) != 0) {
              iVar5 = HttpAddRequestHeadersA(iVar3,*(int *)((int)this + 0x7c),0xffffffff,0xa0000000)
              ;
              if (iVar5 == 0) {
                GetLastError();
                pcVar12 = "HttpAddRequestHeaders failed with \'%s\' GLE=%d";
                uVar11 = 0xcac;
                pcVar10 = "sfinternet.cpp";
                uVar9 = 1;
                puVar6 = FUN_004012e0();
                FUN_0041ff00((int)puVar6,uVar9,pcVar10,uVar11,pcVar12);
                InternetCloseHandle(iVar3);
                goto LAB_004315d1;
              }
            }
            pvVar8 = GlobalAlloc(0x40,0x20);
            puVar7 = GlobalLock(pvVar8);
            if (puVar7 != (undefined4 *)0x0) {
              puVar7 = (undefined4 *)FUN_0042f030(puVar7);
              if (puVar7 != (undefined4 *)0x0) {
                if (*(uchar **)((int)this + 0x80) == (uchar *)0x0) {
LAB_0043155a:
                  iVar2 = FUN_00430c50(this,iVar3,puVar7);
                  if (-1 < iVar2) {
                    *local_18 = puVar7;
                    InternetCloseHandle(iVar3);
                    goto LAB_004315d1;
                  }
                }
                else {
                  iVar2 = FUN_0042f160(puVar7,*(uchar **)((int)this + 0x80));
                  if (-1 < iVar2) goto LAB_0043155a;
                }
                FUN_0042f120(puVar7);
                InternetCloseHandle(iVar3);
                goto LAB_004315d1;
              }
            }
            iVar2 = -0x7ff8fff2;
            InternetCloseHandle(iVar3);
          }
LAB_004315d1:
          pvVar8 = GlobalHandle(pvStack_1c);
          GlobalUnlock(pvVar8);
          pvVar8 = GlobalHandle(pvStack_1c);
          GlobalFree(pvVar8);
          InternetCloseHandle(iVar4);
          goto LAB_00431646;
        }
        iVar2 = -0x7ffb1f0d;
      }
      InternetCloseHandle(iVar3);
    }
  }
  else {
    iVar2 = -0x7ffb1f0e;
  }
LAB_00431646:
  FUN_00430110((int)local_3c);
LAB_00431652:
  if (*(int *)((int)this + 0x34) != 0) {
    iVar2 = -0x7ffb1ff4;
  }
  FUN_0042ff30((int)this);
  pvVar8 = GlobalHandle(*(LPCVOID *)((int)this + 0x84));
  GlobalUnlock(pvVar8);
  pvVar8 = GlobalHandle(*(LPCVOID *)((int)this + 0x84));
  GlobalFree(pvVar8);
  pvVar1 = *(LPCVOID *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x84) = 0;
  pvVar8 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar8);
  pvVar8 = GlobalHandle(pvVar1);
  GlobalFree(pvVar8);
  pvVar1 = *(LPCVOID *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x90) = 0;
  pvVar8 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar8);
  pvVar8 = GlobalHandle(pvVar1);
  GlobalFree(pvVar8);
  *(undefined4 *)((int)this + 0x8c) = 0;
  return iVar2;
}


