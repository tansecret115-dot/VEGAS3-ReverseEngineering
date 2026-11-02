/* Module: sfcdi.dll
   Function: DriveDB_GetDriveEntry
   Address: 5bf08c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DriveDB_GetDriveEntry(struct tSFLIST *,struct _INQUIRYDATA *,struct drivedbentry
   *) */

long DriveDB_GetDriveEntry(tSFLIST *param_1,_INQUIRYDATA *param_2,drivedbentry *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  LPCSTR pCVar5;
  drivedbentry *pdVar6;
  _cdinqstrings local_24 [10];
  CHAR local_1a [18];
  CHAR local_8 [8];
  
  pdVar6 = param_3;
                    /* 0x8c90  11
                       ?DriveDB_GetDriveEntry@@YGJPAUtSFLIST@@PAU_INQUIRYDATA@@PAUdrivedbentry@@@Z
                        */
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar6 = 0;
    pdVar6 = pdVar6 + 4;
  }
  cdr_FormatInquiryStrings(param_2,local_24);
  FUN_5bf08c60((LPCSTR)local_24);
  FUN_5bf08c60(local_1a);
  FUN_5bf08c60(local_8);
  uVar4 = 0;
  uVar2 = *(uint *)param_1;
  if (uVar2 != 0) {
    do {
      pCVar5 = *(LPCSTR *)(*(int *)(param_1 + 8) + uVar4 * 4);
      uVar1 = FUN_5bf08c10((LPCSTR)local_24,pCVar5);
      if (uVar1 == 0) goto LAB_5bf08d4f;
      if (uVar1 == 1) goto LAB_5bf08d0b;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return -0x7ffb1ff6;
LAB_5bf08d0b:
  while( true ) {
    uVar4 = uVar4 + 1;
    pdVar6 = param_3;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar6 = *(undefined4 *)pCVar5;
      pCVar5 = pCVar5 + 4;
      pdVar6 = pdVar6 + 4;
    }
    if (param_1 == (tSFLIST *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1;
    }
    if (((int)uVar4 < 0) || (iVar3 + -1 < (int)uVar4)) {
      pCVar5 = (LPCSTR)0x0;
    }
    else {
      pCVar5 = *(LPCSTR *)(*(int *)(param_1 + 8) + uVar4 * 4);
    }
    if (pCVar5 == (LPCSTR)0x0) {
      return 0;
    }
    uVar2 = FUN_5bf08c10((LPCSTR)local_24,pCVar5);
    if (uVar2 == 0) break;
    if (uVar2 == 0xffffffff) {
      return 0;
    }
  }
LAB_5bf08d4f:
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)param_3 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    param_3 = param_3 + 4;
  }
  return 0;
}


