/* Module: sfxpfx2.dll
   Function: FUN_5c8cf1a0
   Address: 5c8cf1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c8cf1a0(void *this,HKEY param_1)

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
  iVar1 = FUN_5c8cea90(this,(LPCSTR)param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_5c8d5fe0((int *)&local_4);
    if (-1 < iVar1) {
      if (*(int *)((int)local_8 + 4) == 0) {
        iVar1 = FUN_5c8d3170(this,pHVar2,(uint *)&param_1);
        pHVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_5c8cf21a;
        }
      }
      else {
        pHVar2 = *(HKEY *)((int)local_8 + 0x10);
      }
      if ((pHVar2 <= local_4) || ((int)pHVar2 - (int)local_4 == 1)) goto LAB_5c8cf21a;
    }
    uVar3 = 0x8004e131;
  }
LAB_5c8cf21a:
  if (local_8 != (LPCVOID)0x0) {
    FUN_5c892960(local_8);
  }
  return uVar3;
}


