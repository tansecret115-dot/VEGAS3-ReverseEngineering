/* Module: vegas30.exe
   Function: FUN_0057e990
   Address: 0057e990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057e990(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4)

{
  LPCSTR pCVar1;
  LPCSTR pCVar2;
  HANDLE pvVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  HANDLE local_1c;
  CHAR local_18 [12];
  CHAR local_c [12];
  
  pvVar3 = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar3 == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  local_20 = 0;
  local_1c = pvVar3;
  iVar4 = FUN_0057e210(pvVar3,4,&local_20);
  if (-1 < iVar4) {
    iVar4 = _SfList_CreateExZ_32(&param_1,4,0x10,0x10,2,0,0,0);
    pCVar1 = param_2;
    if (iVar4 < 0) {
      CloseHandle(pvVar3);
      return -0x7ff8fff2;
    }
    iVar4 = lstrlenA(param_2);
    iVar5 = iVar4 + 1;
    _SfList_AllocItem_12(param_1,iVar4 + 0xd + iVar5,&param_2);
    pCVar2 = param_2;
    param_2[4] = 'T';
    param_2[5] = 'A';
    param_2[6] = 'P';
    param_2[7] = 'E';
    param_2[0] = '\x04';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    MultiByteToWideChar(0,1,pCVar1,-1,(LPWSTR)(param_2 + 0xc),iVar5);
    (pCVar2 + iVar5 * 2 + 10)[0] = '\0';
    (pCVar2 + iVar5 * 2 + 10)[1] = '\0';
    _SfList_InsertList_16(param_1,0xffffffff,0,0xffffffff);
    iVar4 = lstrlenA(param_3);
    iVar5 = iVar4 + 1;
    _SfList_AllocItem_12(param_1,iVar4 + 0xd + iVar5,&param_2);
    pCVar1 = param_2;
    param_2[4] = 'T';
    param_2[5] = 'C';
    param_2[6] = 'O';
    param_2[7] = 'D';
    param_2[0] = '\x04';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    MultiByteToWideChar(0,1,param_3,-1,(LPWSTR)(param_2 + 0xc),iVar5);
    (pCVar1 + iVar5 * 2 + 10)[0] = '\0';
    (pCVar1 + iVar5 * 2 + 10)[1] = '\0';
    _SfList_InsertList_16(param_1,0xffffffff,0,0xffffffff);
    iVar4 = lstrlenA(param_4);
    iVar5 = iVar4 + 1;
    _SfList_AllocItem_12(param_1,iVar4 + 0xd + iVar5,&param_3);
    pCVar1 = param_3;
    param_3[4] = 'T';
    param_3[5] = 'C';
    param_3[6] = 'D';
    param_3[7] = 'O';
    param_3[0] = '\x04';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    MultiByteToWideChar(0,1,param_4,-1,(LPWSTR)(param_3 + 0xc),iVar5);
    (pCVar1 + iVar5 * 2 + 10)[0] = '\0';
    (pCVar1 + iVar5 * 2 + 10)[1] = '\0';
    _SfList_InsertList_16(param_1,0xffffffff,0,0xffffffff);
    _SfLongToText_12(3,local_18,0);
    _SfLongToText_12(0,local_c,0);
    iVar4 = lstrlenA(local_18);
    iVar5 = iVar4 + 1;
    _SfList_AllocItem_12(param_1,iVar4 + 0xd + iVar5,&param_3);
    pCVar1 = param_3;
    param_3[4] = 'V';
    param_3[5] = 'M';
    param_3[6] = 'A';
    param_3[7] = 'J';
    param_3[0] = '\x04';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    MultiByteToWideChar(0,1,local_18,-1,(LPWSTR)(param_3 + 0xc),iVar5);
    (pCVar1 + iVar5 * 2 + 10)[0] = '\0';
    (pCVar1 + iVar5 * 2 + 10)[1] = '\0';
    _SfList_InsertList_16(param_1,0xffffffff,0,0xffffffff);
    iVar4 = lstrlenA(local_c);
    iVar5 = iVar4 + 1;
    _SfList_AllocItem_12(param_1,iVar4 + 0xd + iVar5,&param_3);
    pCVar1 = param_3;
    param_3[4] = 'V';
    param_3[5] = 'M';
    param_3[6] = 'I';
    param_3[7] = 'N';
    param_3[0] = '\x04';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    MultiByteToWideChar(0,1,local_c,-1,(LPWSTR)(param_3 + 0xc),iVar5);
    (pCVar1 + iVar5 * 2 + 10)[0] = '\0';
    (pCVar1 + iVar5 * 2 + 10)[1] = '\0';
    _SfList_InsertList_16(param_1,0xffffffff,0,0xffffffff);
    pvVar3 = local_1c;
    iVar4 = FUN_0057e670(local_1c,param_1);
    _SfList_Destroy_4(param_1);
    CloseHandle(pvVar3);
  }
  return iVar4;
}


