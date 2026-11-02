/* Module: sfpublish.dll
   Function: FUN_004122c0
   Address: 004122c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004122c0(void *this,uchar *param_1,LPCSTR param_2)

{
  DWORD DVar1;
  uchar *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  time_t tVar6;
  uchar local_238 [4];
  char local_234 [4];
  int local_230;
  tm local_22c;
  uchar local_208 [44];
  uchar auStack_1dc [24];
  uchar auStack_1c4 [24];
  uchar auStack_1ac [24];
  uchar auStack_194 [24];
  uchar auStack_17c [380];
  
  local_238 = (uchar  [4])s_Default_004362c0._0_4_;
  local_234 = (char  [4])s_Default_004362c0._4_4_;
  iVar5 = 0;
  FUN_004110e0(this,param_1);
  pcVar4 = GetPrivateProfileStringA_exref;
  DVar1 = GetPrivateProfileStringA
                    ("PROVIDER","shortname",(LPCSTR)local_238,(LPSTR)local_208,0x104,param_2);
  if (DVar1 != 0) {
    iVar5 = lstrcmpiA((LPCSTR)local_208,(LPCSTR)local_238);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_00411070(this,local_208);
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  DVar1 = GetPrivateProfileStringA
                    ("PROVIDER","longname",(LPCSTR)local_238,(LPSTR)local_208,0x104,param_2);
  if (DVar1 != 0) {
    iVar5 = lstrcmpiA((LPCSTR)local_208,(LPCSTR)local_238);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_00411000(this,local_208);
  }
  if (iVar5 < 0) {
    return iVar5;
  }
  DVar1 = GetPrivateProfileStringA("PROVIDER","ExpirationDate","",(LPSTR)local_208,0x104,param_2);
  if ((DVar1 != 0) && (local_208[0] != '\0')) {
    puVar2 = _mbstok(local_208,"/");
    if (puVar2 == (uchar *)0x0) {
      return -0x7ffb1ff8;
    }
    local_230 = FUN_00426fe0((LPCSTR)puVar2,(undefined4 *)0x0);
    if (local_230 < 1) {
      return -0x7ffb1ff8;
    }
    if (0xc < local_230) {
      return -0x7ffb1ff8;
    }
    puVar2 = _mbstok((uchar *)0x0,"/");
    if (puVar2 == (uchar *)0x0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_00426fe0((LPCSTR)puVar2,(undefined4 *)0x0);
    if (iVar5 < 1) {
      return -0x7ffb1ff8;
    }
    if (0x1f < iVar5) {
      return -0x7ffb1ff8;
    }
    puVar2 = _mbstok((uchar *)0x0,"/");
    if (puVar2 == (uchar *)0x0) {
      return -0x7ffb1ff8;
    }
    local_22c.tm_year = FUN_00426fe0((LPCSTR)puVar2,(undefined4 *)0x0);
    if (local_22c.tm_year < 2000) {
      return -0x7ffb1ff8;
    }
    if (4000 < local_22c.tm_year) {
      return -0x7ffb1ff8;
    }
    local_22c.tm_sec = 0x3b;
    local_22c.tm_min = 0x3b;
    local_22c.tm_year = local_22c.tm_year + -0x76c;
    local_22c.tm_mon = local_230 + -1;
    local_22c.tm_hour = 0x17;
    local_22c.tm_isdst = -1;
    local_22c.tm_mday = iVar5;
    tVar6 = mktime(&local_22c);
    pcVar4 = GetPrivateProfileStringA_exref;
    *(int *)((int)this + 0x38) = (int)tVar6;
    *(undefined4 *)((int)this + 0x3c) = 0;
    iVar5 = 0;
  }
  iVar3 = (*pcVar4)();
  if ((iVar3 == 0) || ((char)local_22c.tm_mday == '\0')) {
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  else {
    iVar5 = FUN_00426fe0((LPCSTR)&local_22c.tm_mday,(undefined4 *)0x0);
    *(int *)((int)this + 0x34) = iVar5;
    if (iVar5 < 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = 0;
  }
  iVar3 = (*pcVar4)();
  if (iVar3 != 0) {
    iVar5 = lstrcmpiA((LPCSTR)local_238,&stack0xfffffd98);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_00411150(this,local_238);
  }
  if (iVar5 < 0) {
    return iVar5;
  }
  iVar3 = (*pcVar4)();
  if (iVar3 != 0) {
    iVar5 = lstrcmpiA(&stack0xfffffdb0,&stack0xfffffd80);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_004111c0(this,&stack0xfffffdb0);
  }
  if (iVar5 < 0) {
    return iVar5;
  }
  iVar3 = (*pcVar4)();
  if (iVar3 != 0) {
    iVar5 = lstrcmpiA(&stack0xfffffd98,&stack0xfffffd68);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_00411230(this,&stack0xfffffd98);
  }
  if (iVar5 < 0) {
    return iVar5;
  }
  iVar3 = (*pcVar4)();
  if (iVar3 != 0) {
    iVar5 = lstrcmpiA(&stack0xfffffd80,&stack0xfffffd50);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    FUN_00418d60(auStack_17c,(BYTE *)"%s%s\\%s");
    iVar5 = FUN_004112b0(this,auStack_17c);
  }
  if (-1 < iVar5) {
    iVar3 = (*pcVar4)();
    if (iVar3 != 0) {
      iVar5 = lstrcmpiA(&stack0xfffffd68,&stack0xfffffd38);
      if (iVar5 == 0) {
        return -0x7ffb1ff8;
      }
      FUN_00418d60(auStack_194,(BYTE *)"%s%s\\%s");
      iVar5 = FUN_00411320(this,auStack_194);
    }
    if (iVar5 < 0) {
      return iVar5;
    }
    iVar3 = (*pcVar4)();
    if (iVar3 != 0) {
      iVar5 = lstrcmpiA(&stack0xfffffd50,&stack0xfffffd20);
      if (iVar5 == 0) {
        return -0x7ffb1ff8;
      }
      FUN_00418d60(auStack_1ac,(BYTE *)"%s%s\\%s");
      iVar5 = FUN_00411390(this,auStack_1ac);
    }
    if (iVar5 < 0) {
      return iVar5;
    }
    iVar3 = (*pcVar4)();
    if (iVar3 != 0) {
      iVar5 = lstrcmpiA(&stack0xfffffd38,&stack0xfffffd08);
      if (iVar5 == 0) {
        return -0x7ffb1ff8;
      }
      FUN_00418d60(auStack_1c4,(BYTE *)"%s%s\\%s");
      iVar5 = FUN_00411400(this,auStack_1c4);
    }
    if (iVar5 < 0) {
      return iVar5;
    }
    iVar3 = (*pcVar4)("TOOLBAR_BITMAP","disicon",&stack0xfffffd08,&stack0xfffffd38);
    if (iVar3 == 0) {
      return iVar5;
    }
    iVar5 = lstrcmpiA(&stack0xfffffd20,&stack0xfffffcf0);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    FUN_00418d60(auStack_1dc,(BYTE *)"%s%s\\%s");
    iVar5 = FUN_00411470(this,auStack_1dc);
    return iVar5;
  }
  return iVar5;
}


