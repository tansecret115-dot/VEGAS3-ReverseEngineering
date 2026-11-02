/* Module: sfmarket2.dll
   Function: FUN_00404f70
   Address: 00404f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00404f70(void *this,uchar *param_1,uchar *param_2)

{
  HKEY _Source;
  int iVar1;
  int local_10c;
  uint local_108;
  uchar local_104 [260];
  
  if (*(int *)((int)this + 0x1be0) != 0) {
    _mbscpy(local_104,param_1);
    _Source = (HKEY)_mbstok(local_104,"&");
    while (_Source != (HKEY)0x0) {
      iVar1 = FUN_00416dd0(*(void **)((int)this + 0x1be0),&local_10c,&local_108,_Source,(uint *)0x0,
                           (undefined4 *)0x0);
      if (iVar1 < 0) {
        FUN_00416000(*(void **)((int)this + 0x1be0),(LPCSTR)_Source);
      }
      else {
        _mbscpy(param_2,(uchar *)_Source);
      }
      _Source = (HKEY)_mbstok((uchar *)0x0,"&");
    }
  }
  return;
}


