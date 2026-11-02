/* Module: sfcdi.dll
   Function: DriveDB_GetDriveConfigString
   Address: 5bf08fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DriveDB_GetDriveConfigString(char *,struct _INQUIRYDATA *,char *,unsigned int) */

int DriveDB_GetDriveConfigString(char *param_1,_INQUIRYDATA *param_2,char *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  LPSTR pMem;
  char *pcVar5;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  char local_50 [40];
  CHAR local_28 [40];
  
                    /* 0x8fe0  10  ?DriveDB_GetDriveConfigString@@YGHPADPAU_INQUIRYDATA@@0I@Z */
  local_74 = *(undefined4 *)(param_2 + 0xc);
  local_a4 = 0;
  local_a8 = 0;
  local_78 = *(undefined4 *)(param_2 + 8);
  local_70 = 0;
  iVar2 = lstrlenA((LPCSTR)&local_78);
  uVar3 = iVar2 - 1;
  if (-1 < (int)uVar3) {
    do {
      if (*(char *)((int)&local_78 + uVar3) != ' ') break;
      *(undefined1 *)((int)&local_78 + uVar3) = 0;
      uVar3 = uVar3 - 1;
    } while (uVar3 < 0x80000000);
  }
  local_90 = 0;
  local_a0 = *(undefined4 *)(param_2 + 0x10);
  local_9c = *(undefined4 *)(param_2 + 0x14);
  local_98 = *(undefined4 *)(param_2 + 0x18);
  local_94 = *(undefined4 *)(param_2 + 0x1c);
  iVar2 = lstrlenA((LPCSTR)&local_a0);
  uVar3 = iVar2 - 1;
  if (-1 < (int)uVar3) {
    do {
      if (*(char *)((int)&local_a0 + uVar3) != ' ') break;
      *(undefined1 *)((int)&local_a0 + uVar3) = 0;
      uVar3 = uVar3 - 1;
    } while (uVar3 < 0x80000000);
  }
  pvVar4 = GlobalAlloc(0x42,32000);
  pMem = GlobalLock(pvVar4);
  FUN_5bf08e70(pMem,param_1,32000);
  cVar1 = *pMem;
  pcVar5 = pMem;
  do {
    if (cVar1 == '\0') {
LAB_5bf09110:
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      return local_a8;
    }
    pcVar5 = FUN_5bf08ee0(pcVar5,local_50,local_28,param_3,param_4,&local_a4);
    iVar2 = lstrcmpA(local_50,(LPCSTR)&local_78);
    if (((iVar2 == 0) || (local_50[0] == '\0')) &&
       (iVar2 = lstrcmpA(local_28,(LPCSTR)&local_a0), iVar2 == 0)) {
      local_a8 = 1;
      goto LAB_5bf09110;
    }
    cVar1 = *pcVar5;
  } while( true );
}


