/* Module: sfnetmedia.dll
   Function: FUN_00410480
   Address: 00410480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00410480(void *this,uchar *param_1,LPCSTR param_2)

{
  DWORD DVar1;
  uchar *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  time_t tVar6;
  char local_238 [4];
  char local_234 [4];
  int local_230;
  tm local_22c;
  uchar local_208 [212];
  uchar auStack_134 [308];
  
  local_238 = (char  [4])s_Default_0043607c._0_4_;
  local_234 = (char  [4])s_Default_0043607c._4_4_;
  iVar5 = 0;
  FUN_0040ff10(this,param_1);
  pcVar4 = GetPrivateProfileStringA_exref;
  DVar1 = GetPrivateProfileStringA("PROVIDER","name",local_238,(LPSTR)local_208,0x104,param_2);
  if (DVar1 != 0) {
    iVar5 = lstrcmpA((LPCSTR)local_208,local_238);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_0040ff80(this,local_208);
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  DVar1 = GetPrivateProfileStringA("PROVIDER","URL",local_238,(LPSTR)local_208,0x104,param_2);
  if (DVar1 != 0) {
    iVar5 = lstrcmpA((LPCSTR)local_208,local_238);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = FUN_00410060(this,local_208);
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
    local_230 = FUN_004215d0((LPCSTR)puVar2,(undefined4 *)0x0);
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
    iVar5 = FUN_004215d0((LPCSTR)puVar2,(undefined4 *)0x0);
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
    local_22c.tm_year = FUN_004215d0((LPCSTR)puVar2,(undefined4 *)0x0);
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
    *(int *)((int)this + 0x18) = (int)tVar6;
    *(undefined4 *)((int)this + 0x1c) = 0;
    iVar5 = 0;
  }
  iVar3 = (*pcVar4)();
  if ((iVar3 == 0) || ((char)local_22c.tm_mday == '\0')) {
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  else {
    iVar5 = FUN_004215d0((LPCSTR)&local_22c.tm_mday,(undefined4 *)0x0);
    *(int *)((int)this + 0x14) = iVar5;
    if (iVar5 < 0) {
      return -0x7ffb1ff8;
    }
    iVar5 = 0;
  }
  iVar3 = (*pcVar4)("PROVIDER","mediaicon",&stack0xfffffdb0,&local_22c.tm_mday);
  if (iVar3 != 0) {
    iVar5 = lstrcmpA(local_238,&stack0xfffffd98);
    if (iVar5 == 0) {
      return -0x7ffb1ff8;
    }
    FUN_004156f0(auStack_134,(BYTE *)"%s%s\\%s");
    iVar5 = FUN_0040fff0(this,auStack_134);
    return iVar5;
  }
  return iVar5;
}


