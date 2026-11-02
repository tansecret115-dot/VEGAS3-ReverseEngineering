/* Module: sfpublish.dll
   Function: FUN_004215d0
   Address: 004215d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004215d0(void *this,undefined4 param_1)

{
  LPCVOID pvVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  DWORD DVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  LPCVOID *ppvStack_24;
  LPCVOID local_10;
  DWORD DStack_c;
  int local_8;
  int local_4;
  
  ppvStack_24 = &local_10;
  local_4 = (int)this + 8;
  local_8 = 4;
  local_10 = (LPCVOID)0x0;
  iVar2 = HttpQueryInfoA(param_1,0x20000013,local_4,&local_8);
  if (iVar2 == 0) {
    GetLastError();
    pcVar8 = "HttpQueryInfo failed getting status code GLE=%d";
    uVar9 = 0x666;
LAB_00421890:
    iVar2 = -0x7fffbffb;
    pcVar10 = "sfinternet.cpp";
    uVar7 = 1;
    puVar6 = FUN_004012b0();
    FUN_00415b60((int)puVar6,uVar7,pcVar10,uVar9,pcVar8);
  }
  else {
    pvVar3 = GlobalAlloc(0x40,0x200);
    pvVar4 = GlobalLock(pvVar3);
    *(LPVOID *)((int)this + 0xc) = pvVar4;
    pvVar1 = local_10;
    while (local_10 = pvVar1, pvVar4 != (LPVOID)0x0) {
      **(undefined1 **)((int)this + 0xc) = 0;
      ppvStack_24 = (LPCVOID *)0x0;
      iVar2 = HttpQueryInfoA(pvVar1,0x15,*(undefined4 *)((int)this + 0xc),&stack0xffffffe0,
                             &ppvStack_24);
      if (iVar2 != 0) {
        pvVar3 = GlobalAlloc(0x40,0x80);
        pvVar4 = GlobalLock(pvVar3);
        *(LPVOID *)((int)this + 0x10) = pvVar4;
        goto joined_r0x004216ed;
      }
      DVar5 = GetLastError();
      if (DVar5 != 0x7a) {
        GetLastError();
        pcVar8 = "HttpQueryInfo failed getting raw headers GLE=%d";
        uVar9 = 0x5f4;
        goto LAB_00421890;
      }
      pvVar1 = *(LPCVOID *)((int)this + 0xc);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalFree(pvVar3);
      *(undefined4 *)((int)this + 0xc) = 0;
      pvVar3 = GlobalAlloc(0x40,0x200);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)((int)this + 0xc) = pvVar4;
      pvVar1 = local_10;
    }
    iVar2 = -0x7ff8fff2;
  }
  goto LAB_0042184c;
joined_r0x004216ed:
  if (pvVar4 == (LPVOID)0x0) goto LAB_00421759;
  **(undefined1 **)((int)this + 0x10) = 0;
  ppvStack_24 = (LPCVOID *)0x0;
  iVar2 = HttpQueryInfoA(pvVar1,1,*(undefined4 *)((int)this + 0x10),&stack0xffffffe0,&ppvStack_24);
  if (iVar2 != 0) {
LAB_00421787:
    ppvStack_24 = (LPCVOID *)0x0;
    iVar2 = HttpQueryInfoA(pvVar1,0x20000005,(int)this + 0x14,&stack0xffffffe4,&ppvStack_24);
    if (iVar2 == 0) {
      pcVar10 = "HttpQueryInfo failed for content length - trying to work ahead anyway.";
      uVar9 = 0x644;
      pcVar8 = "sfinternet.cpp";
      uVar7 = 4;
      puVar6 = FUN_004012b0();
      FUN_00415b60((int)puVar6,uVar7,pcVar8,uVar9,pcVar10);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    if (*(int *)((int)this + 0x1c) == 0) {
      iVar2 = FUN_00421310(this,pvVar1,DStack_c,local_8);
    }
    else {
      iVar2 = FUN_00421040(this,pvVar1,DStack_c,local_8);
    }
    if (-1 < iVar2) {
      return iVar2;
    }
    local_10 = *(LPCVOID *)((int)this + 0x10);
    pvVar3 = GlobalHandle(local_10);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(local_10);
    GlobalFree(pvVar3);
    *(undefined4 *)((int)this + 0x10) = 0;
    goto LAB_00421826;
  }
  DVar5 = GetLastError();
  if (DVar5 != 0x7a) {
    pcVar10 = "HttpQueryInfo could not get content type";
    uVar9 = 0x627;
    pcVar8 = "sfinternet.cpp";
    uVar7 = 4;
    puVar6 = FUN_004012b0();
    FUN_00415b60((int)puVar6,uVar7,pcVar8,uVar9,pcVar10);
    **(undefined1 **)((int)this + 0x10) = 0;
    goto LAB_00421787;
  }
  pvVar1 = *(LPCVOID *)((int)this + 0x10);
  pvVar3 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pvVar1);
  GlobalFree(pvVar3);
  *(undefined4 *)((int)this + 0x10) = 0;
  pvVar3 = GlobalAlloc(0x40,0x80);
  pvVar4 = GlobalLock(pvVar3);
  *(LPVOID *)((int)this + 0x10) = pvVar4;
  pvVar1 = local_10;
  goto joined_r0x004216ed;
LAB_00421759:
  iVar2 = -0x7ff8fff2;
LAB_00421826:
  local_10 = *(LPCVOID *)((int)this + 0xc);
  pvVar3 = GlobalHandle(local_10);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(local_10);
  GlobalFree(pvVar3);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < iVar2) {
    return iVar2;
  }
LAB_0042184c:
  pcVar10 = "FillResponse() failing with hr=%x, status=%d";
  uVar9 = 0x66b;
  pcVar8 = "sfinternet.cpp";
  uVar7 = 1;
  puVar6 = FUN_004012b0();
  FUN_00415b60((int)puVar6,uVar7,pcVar8,uVar9,pcVar10);
  return iVar2;
}


