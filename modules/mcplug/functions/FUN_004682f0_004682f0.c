/* Module: mcplug.dll
   Function: FUN_004682f0
   Address: 004682f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004682f0(void *this,HKEY param_1)

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
  iVar1 = FUN_00467be0(this,(LPCSTR)param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_0046f9f0((int *)&local_4);
    if (-1 < iVar1) {
      if (*(int *)((int)local_8 + 4) == 0) {
        iVar1 = FUN_0046c2c0(this,pHVar2,(uint *)&param_1);
        pHVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_0046836a;
        }
      }
      else {
        pHVar2 = *(HKEY *)((int)local_8 + 0x10);
      }
      if ((pHVar2 <= local_4) || ((int)pHVar2 - (int)local_4 == 1)) goto LAB_0046836a;
    }
    uVar3 = 0x8004e131;
  }
LAB_0046836a:
  if (local_8 != (LPCVOID)0x0) {
    FUN_004018b0(local_8);
  }
  return uVar3;
}


