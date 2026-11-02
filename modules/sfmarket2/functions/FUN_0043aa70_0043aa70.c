/* Module: sfmarket2.dll
   Function: FUN_0043aa70
   Address: 0043aa70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043aa70(int *param_1,LPCSTR param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  HGLOBAL pvVar2;
  int iVar3;
  LPCVOID local_8;
  uint *local_4;
  
  if (((param_1 == (int *)0x0) || (param_2 == (LPCSTR)0x0)) || (param_3 == (uchar *)0x0)) {
    uVar1 = 0x80070057;
  }
  else {
    local_4 = (uint *)0x0;
    uVar1 = FUN_0043a1d0(param_1,&local_4);
    if (-1 < (int)uVar1) {
      local_8 = (LPCVOID)0x0;
      do {
        if (local_8 != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(local_8);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(local_8);
          GlobalFree(pvVar2);
          local_8 = (LPCVOID)0x0;
        }
        uVar1 = FUN_0043a280(local_4,(int)&local_8);
        if ((int)uVar1 < 0) goto LAB_0043ab58;
        iVar3 = lstrcmpiA(param_2,*(LPCSTR *)((int)local_8 + 0x24));
      } while (iVar3 != 0);
      if ((-1 < (int)uVar1) &&
         (uVar1 = FUN_0043b1f0((int)param_1,(int)local_8,param_3,param_4), local_8 != (LPCVOID)0x0))
      {
        pvVar2 = GlobalHandle(local_8);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_8);
        GlobalFree(pvVar2);
      }
LAB_0043ab58:
      FUN_0043a240(local_4);
      return uVar1;
    }
  }
  return uVar1;
}


