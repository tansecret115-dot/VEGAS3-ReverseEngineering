/* Module: Setup.exe
   Function: entry
   Address: 00431fb2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  undefined4 *puVar1;
  HMODULE pHVar2;
  byte *pbVar3;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0043db68;
  puStack_10 = &DAT_00432190;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_0044f3d4 = 0xffffffff;
  DAT_0044f3d8 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_0044f3cc;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0044f3c8;
  _DAT_0044f3d0 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_00432537();
  if (DAT_00446c70 == 0) {
    __setusermatherr(&LAB_00432534);
  }
  FUN_0043251c();
  initterm(&DAT_0044300c,&DAT_00443010);
  local_70.newmode = DAT_0044f3c4;
  __getmainargs(&local_64,&local_74,&local_68,DAT_0044f3c0,&local_70);
  initterm(&DAT_00443000,&DAT_00443008);
  pbVar3 = *(byte **)_acmdln_exref;
  if (*pbVar3 != 0x22) {
    do {
      if (*pbVar3 < 0x21) goto LAB_004320a5;
      pbVar3 = pbVar3 + 1;
    } while( true );
  }
  do {
    pbVar3 = pbVar3 + 1;
    if (*pbVar3 == 0) break;
  } while (*pbVar3 != 0x22);
  if (*pbVar3 != 0x22) goto LAB_004320a5;
  do {
    pbVar3 = pbVar3 + 1;
LAB_004320a5:
  } while ((*pbVar3 != 0) && (*pbVar3 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_00401060(pHVar2);
                    /* WARNING: Subroutine does not return */
  exit(local_6c);
}


