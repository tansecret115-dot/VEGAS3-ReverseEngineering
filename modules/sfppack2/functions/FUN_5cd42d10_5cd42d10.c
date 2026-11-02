/* Module: sfppack2.dll
   Function: FUN_5cd42d10
   Address: 5cd42d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd42d10(void *this,HKEY param_1)

{
  int iVar1;
  HKEY pHVar2;
  undefined4 uVar3;
  LPCVOID local_8;
  HKEY local_4;
  
  pHVar2 = param_1;
  uVar3 = 0;
  local_8 = (LPCVOID)0x0;
  local_4 = (HKEY)0x0;
  iVar1 = FUN_5cd42600(this,(LPCSTR)param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_5cd49b50((int *)&local_4);
    if (-1 < iVar1) {
      if (*(int *)((int)local_8 + 4) == 0) {
        iVar1 = FUN_5cd46ce0(this,pHVar2,(uint *)&param_1);
        pHVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_5cd42d8a;
        }
      }
      else {
        pHVar2 = *(HKEY *)((int)local_8 + 0x10);
      }
      if ((pHVar2 <= local_4) || ((int)pHVar2 - (int)local_4 == 1)) goto LAB_5cd42d8a;
    }
    uVar3 = 0x8004e131;
  }
LAB_5cd42d8a:
  if (local_8 != (LPCVOID)0x0) {
    FUN_5ccd2000(local_8);
  }
  return uVar3;
}


