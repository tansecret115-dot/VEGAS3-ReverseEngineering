/* Module: sfcdi.dll
   Function: FUN_5bf09d30
   Address: 5bf09d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf09d30(int *param_1)

{
  char cVar1;
  HGLOBAL pvVar2;
  LPSTR pMem;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int local_214;
  int local_20c;
  int local_208;
  int local_204;
  uchar local_200 [40];
  uchar local_1d8 [2];
  CHAR local_1d6 [38];
  int local_1b0 [2];
  uchar local_1a6 [24];
  uchar local_18e [26];
  undefined4 local_174;
  int local_170;
  int local_16c;
  int local_15c;
  int local_154;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  uchar local_134 [40];
  uchar local_10c [40];
  undefined4 local_e4 [5];
  uchar local_d0 [80];
  char local_80 [128];
  
  local_208 = 0;
  local_214 = 0;
  local_204 = cdr_GetNumInterfaces();
  local_20c = 0;
  if (0 < local_204) {
    do {
      local_e4[0] = 100;
      cdr_GetInterfaceCaps(local_20c,(cdrcaps_tag *)local_e4);
      pvVar2 = GlobalAlloc(0x42,32000);
      pMem = GlobalLock(pvVar2);
      FUN_5bf08e70(pMem,(LPCSTR)local_d0,32000);
      cVar1 = *pMem;
      pcVar3 = pMem;
      while (cVar1 != '\0') {
        pcVar3 = FUN_5bf08ee0(pcVar3,(LPSTR)local_10c,(LPSTR)local_134,local_80,0x80,&local_208);
        piVar5 = local_1b0;
        for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        local_140 = 1;
        local_13c = 1;
        local_174 = 6;
        local_138 = 5000;
        _mbscpy(local_18e,local_d0);
        _mbscpy((uchar *)local_1b0,local_10c);
        _mbscpy(local_1a6,local_134);
        iVar4 = DriveDB_ParseOption(local_80,"GENERAL",(char *)local_200,0x28);
        if (iVar4 != 0) {
          _mbscpy(local_1d8,local_200);
          local_170 = FUN_5bf2d450(local_1d6,(undefined4 *)0x0);
        }
        iVar4 = DriveDB_ParseOption(local_80,"READ",(char *)local_200,0x28);
        if (iVar4 != 0) {
          _mbscpy(local_1d8,local_200);
          local_16c = FUN_5bf2d450(local_1d6,(undefined4 *)0x0);
        }
        iVar4 = DriveDB_ParseOption(local_80,"NOTREAD",(char *)local_200,0x28);
        if (iVar4 != 0) {
          _mbscpy(local_1d8,local_200);
          local_15c = FUN_5bf2d450(local_1d6,(undefined4 *)0x0);
        }
        iVar4 = DriveDB_ParseOption(local_80,"READMETHOD",(char *)local_200,0x28);
        if (iVar4 != 0) {
          _mbscpy(local_1d8,local_200);
          local_154 = FUN_5bf2d450(local_1d6,(undefined4 *)0x0);
        }
        local_214 = FUN_5bf2ade0(param_1,local_1b0,0x7c,-1,(int *)0x0);
        cVar1 = *pcVar3;
      }
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      local_20c = local_20c + 1;
    } while (local_20c < local_204);
    return local_214;
  }
  return 0;
}


