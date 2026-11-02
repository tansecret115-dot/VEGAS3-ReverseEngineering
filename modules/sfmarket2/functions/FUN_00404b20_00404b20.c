/* Module: sfmarket2.dll
   Function: FUN_00404b20
   Address: 00404b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404b20(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  char *_Str1;
  undefined4 uVar3;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  uVar3 = 0;
  hMem = GlobalAlloc(0x40,0x98);
  puVar1 = GlobalLock(hMem);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 = FUN_0042fa10(puVar1), puVar1 != (undefined4 *)0x0))
  {
    iVar2 = FUN_0042fa90(puVar1,(uchar *)"sfmarket");
    if ((-1 < iVar2) &&
       ((iVar2 = FUN_00430150(puVar1,(uchar *)
                                     "http://www.sonicfoundry.com/shopping/isministoreavailable.asp"
                              ,(uchar *)"text/*",(uchar *)0x0,(uchar *)0x0), iVar2 == 0x4e011 &&
        (iVar2 = FUN_0042e7c0(puVar1,5000), -1 < iVar2)))) {
      local_c = (undefined4 *)0x0;
      iVar2 = FUN_0042fb80(puVar1,&local_4,&local_c);
      if (-1 < iVar2) {
        if (((-1 < local_4) && (199 < (int)local_c[2])) && ((int)local_c[2] < 300)) {
          local_8 = 0;
          _Str1 = (char *)FUN_0042f140(local_c,&local_8);
          if (((_Str1 != (char *)0x0) && (local_8 != 0)) &&
             (iVar2 = _strnicmp(_Str1,"true",4), iVar2 == 0)) {
            uVar3 = 1;
          }
        }
        if (local_c != (undefined4 *)0x0) {
          FUN_0042f120(local_c);
        }
      }
    }
    FUN_0042e5f0(puVar1);
  }
  return uVar3;
}


