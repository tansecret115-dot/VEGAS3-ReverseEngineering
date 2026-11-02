/* Module: sfmarket2.dll
   Function: FUN_00404ed0
   Address: 00404ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


HKEY __thiscall FUN_00404ed0(void *this,HKEY param_1)

{
  HKEY pHVar1;
  HKEY pHVar2;
  uint local_8;
  int local_4;
  
  pHVar2 = param_1;
  pHVar1 = param_1;
  if (((*(void **)((int)this + 0x1be0) != (void *)0x0) &&
      (pHVar1 = (HKEY)FUN_00416dd0(*(void **)((int)this + 0x1be0),&local_4,&local_8,param_1,
                                   (uint *)&param_1,(undefined4 *)0x0), -1 < (int)pHVar1)) &&
     (pHVar1 = (HKEY)FUN_00418270(*(void **)((int)this + 0x1be0),(char *)0x0,(BYTE *)pHVar2),
     -1 < (int)pHVar1)) {
    pHVar2 = (HKEY)FUN_0041ad30(*(void **)((int)this + 0x1be0),local_8,(int)param_1);
    FUN_0041ac10(*(void **)((int)this + 0x1be0),local_8,(int)param_1);
    FUN_00415680(*(void **)((int)this + 0x1be0),1);
    return pHVar2;
  }
  return pHVar1;
}


