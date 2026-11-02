/* Module: sfcdi.dll
   Function: DriveDB_ImportEx
   Address: 5bf0a340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DriveDB_ImportEx(unsigned long) */

long DriveDB_ImportEx(ulong param_1)

{
  int *piVar1;
  char *pcVar2;
  LPCSTR pCVar3;
  LPCSTR pCVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uchar *_Dest;
  tSFLIST *local_328;
  uint *local_324;
  uint *local_320;
  uint *local_31c;
  tSFLIST *local_318;
  uint local_314;
  int local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
                    /* 0xa340  13  ?DriveDB_ImportEx@@YGJK@Z */
  local_320 = (uint *)0x0;
  local_324 = (uint *)0x0;
  local_31c = (uint *)0x0;
  local_318 = (tSFLIST *)0x0;
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_104,0x104);
  pcVar2 = FUN_5bf230b0((LPCSTR)local_104);
  *pcVar2 = '\0';
  _mbscat(local_104,(uchar *)"ddbimp.txt");
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_208,0x104);
  pcVar2 = FUN_5bf230b0((LPCSTR)local_208);
  *pcVar2 = '\0';
  _mbscat(local_208,(uchar *)"sfcdi.cfg");
  FUN_5bf2b110((int *)&local_320,4,-1,-1,0x40000002);
  FUN_5bf2b110((int *)&local_324,4,-1,-1,0x40000002);
  FUN_5bf2b110((int *)&local_31c,4,-1,-1,0x40000002);
  FUN_5bf2b110((int *)&local_318,4,-1,-1,0x40000002);
  FUN_5bf2b110((int *)&local_328,4,-1,-1,0x40000002);
  FUN_5bf099c0((int *)local_31c);
  FUN_5bf09370((LPCSTR)local_208,(int *)local_320);
  FUN_5bf09fd0((LPCSTR)local_104,(int *)local_324);
  local_310 = FUN_5bf09d30((int *)local_318);
  FUN_5bf2a970((int *)local_31c,0,FUN_5bf092d0);
  FUN_5bf2a970((int *)local_320,0,FUN_5bf092d0);
  FUN_5bf2a970((int *)local_324,0,FUN_5bf092d0);
  FUN_5bf2a970((int *)local_318,0,FUN_5bf092d0);
  local_314 = *local_324;
  uVar7 = *local_31c;
  if ((param_1 & 4) != 0) {
    uVar6 = 0;
    if (uVar7 != 0) {
      do {
        piVar1 = *(int **)(local_31c[2] + uVar6 * 4);
        pCVar3 = FUN_5bf0a150(local_320,(LPCSTR)piVar1);
        if (pCVar3 == (LPCSTR)0x0) {
          FUN_5bf2ade0((int *)local_328,piVar1,0x7c,-1,(int *)0x0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    uVar7 = 0;
    if (*(uint *)local_328 != 0) {
      do {
        pCVar3 = *(LPCSTR *)(*(uint *)(local_328 + 8) + uVar7 * 4);
        pCVar4 = FUN_5bf0a150(local_324,pCVar3);
        if (pCVar4 != (LPCSTR)0x0) {
          _Dest = (uchar *)(pCVar3 + 0x22);
          iVar5 = lstrcmpA("MMC",(LPCSTR)_Dest);
          if (iVar5 == 0) {
            _mbscpy(_Dest,(uchar *)(pCVar4 + 0x22));
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)local_328);
    }
  }
  if ((param_1 & 1) != 0) {
    uVar7 = 0;
    if (local_314 != 0) {
      do {
        piVar1 = *(int **)(local_324[2] + uVar7 * 4);
        pCVar3 = FUN_5bf0a150(local_320,(LPCSTR)piVar1);
        if (pCVar3 == (LPCSTR)0x0) {
          FUN_5bf2ade0((int *)local_328,piVar1,0x7c,-1,(int *)0x0);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_314);
    }
    FUN_5bf2a970((int *)local_328,0,FUN_5bf092d0);
  }
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_30c,0x104);
  pcVar2 = FUN_5bf230b0((LPCSTR)local_30c);
  *pcVar2 = '\0';
  _mbscat(local_30c,(uchar *)"ddbexp.txt");
  DriveDB_Export_Text((char *)local_30c,local_328);
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_30c,0x104);
  pcVar2 = FUN_5bf230b0((LPCSTR)local_30c);
  *pcVar2 = '\0';
  _mbscat(local_30c,(uchar *)"sfcdi.cfg");
  if ((param_1 & 2) != 0) {
    DriveDB_Export_Bin((char *)local_30c,local_318);
  }
  if (local_320 != (uint *)0x0) {
    FUN_5bf2b040((int *)local_320);
  }
  if (local_324 != (uint *)0x0) {
    FUN_5bf2b040((int *)local_324);
  }
  if (local_31c != (uint *)0x0) {
    FUN_5bf2b040((int *)local_31c);
  }
  if (local_318 != (tSFLIST *)0x0) {
    FUN_5bf2b040((int *)local_318);
  }
  if (local_328 != (tSFLIST *)0x0) {
    FUN_5bf2b040((int *)local_328);
  }
  return local_310;
}


