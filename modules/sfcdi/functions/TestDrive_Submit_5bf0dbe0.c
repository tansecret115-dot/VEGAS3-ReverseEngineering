/* Module: sfcdi.dll
   Function: TestDrive_Submit
   Address: 5bf0dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall TestDrive_Submit(void) */

long TestDrive_Submit(void)

{
  HGLOBAL pvVar1;
  uchar *lpString;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  undefined4 local_2c4 [12];
  uchar local_294 [128];
  uchar local_214 [532];
  
                    /* 0xdbe0  143  ?TestDrive_Submit@@YGJXZ */
  FUN_5bf310d0(local_214);
  FUN_5bf25750(local_294,(BYTE *)"sonicfoundry.com");
  FUN_5bf311a0((int)local_214,&local_2cc,local_294,"monty@sonicfoundry.com");
  if (local_2cc == 0) {
    return -0x7ffb1f14;
  }
  FUN_5bf311e0(local_2cc,&local_2d0,(int *)"/CDArchitect/PostBugPerfInfo.asp",&DAT_5bf557e0);
  if (local_2d0 == 0) {
    FUN_5bf31260(local_2cc);
    return -0x7ffb1f13;
  }
  pvVar1 = GlobalAlloc(0x42,32000);
  lpString = GlobalLock(pvVar1);
  FUN_5bf25750(lpString,(BYTE *)
                        "Product=test&Build=100&Email=blah&Contact=1&Data=000080000800080008000A&Comment=putz"
              );
  iVar2 = lstrlenA((LPCSTR)lpString);
  pcVar4 = "Content-Type: application/x-www-form-urlencoded";
  puVar5 = local_2c4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  iVar2 = FUN_5bf31220(local_2d0,local_2c4,lpString,iVar2);
  if (iVar2 < 0) {
    pvVar1 = GlobalHandle(lpString);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpString);
    GlobalFree(pvVar1);
    return iVar2;
  }
  puVar6 = lpString;
  for (iVar2 = 8000; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6 = puVar6 + 4;
  }
  iVar2 = FUN_5bf312e0(local_2d0,(int)lpString,&local_2c8,(int *)0x7d00);
  if ((-1 < iVar2) && (local_2c8 == 0)) {
    iVar2 = -0x7ffb1f12;
  }
  pvVar1 = GlobalHandle(lpString);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpString);
  GlobalFree(pvVar1);
  if (local_2d0 != 0) {
    FUN_5bf31270(local_2d0);
  }
  if (local_2cc != 0) {
    FUN_5bf31260(local_2cc);
  }
  FUN_5bf31130((int)local_214);
  return iVar2;
}


