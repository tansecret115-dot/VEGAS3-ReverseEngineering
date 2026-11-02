/* Module: sfmarket2.dll
   Function: FUN_00404ce0
   Address: 00404ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00404ce0(void *this,uchar *param_1)

{
  int iVar1;
  uchar *_Source;
  int iVar2;
  uint local_51c;
  int local_518;
  uchar local_514 [260];
  uchar local_410 [260];
  uchar local_30c [260];
  HKEY__ local_208 [65];
  uchar local_104 [260];
  
  if (*(int *)((int)this + 0x1be0) != 0) {
    iVar1 = FUN_00404e30(this,*(int *)((int)this + 0x1be8),*(int *)((int)this + 0x1be8));
    _mbscpy(local_104,(uchar *)(iVar1 + 0x244));
    _Source = (uchar *)((int)this + 0x188d);
    if (*(char *)((int)this + 0x188d) == '\0') {
      iVar2 = 0;
      iVar1 = FUN_00404e80(this,*(uint *)((int)this + 0x1be8));
      iVar1 = FUN_00404e30(this,iVar1,iVar2);
      _Source = (uchar *)(iVar1 + 0x244);
    }
    _mbscpy(local_514,_Source);
    local_410[0] = '\0';
    FUN_00416a80(*(void **)((int)this + 0x1be0),(LPSTR)local_208,0x104);
    iVar1 = FUN_00416dd0(*(void **)((int)this + 0x1be0),&local_518,&local_51c,local_208,(uint *)0x0,
                         (undefined4 *)0x0);
    if (iVar1 == 0x4e12e) {
      iVar1 = FUN_00404e30(this,local_51c,0);
      _mbscpy(local_410,(uchar *)(iVar1 + 0x244));
    }
    if (local_410[0] == '\0') {
      _mbscpy(local_30c,local_514);
    }
    else {
      FUN_00424a60(local_30c,(BYTE *)"%sto%s");
    }
  }
  _mbscpy(param_1,local_30c);
  return;
}


