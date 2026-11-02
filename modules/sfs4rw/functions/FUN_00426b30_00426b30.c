/* Module: sfs4rw.dll
   Function: FUN_00426b30
   Address: 00426b30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00426b30(int *param_1,LPCSTR param_2,undefined4 *param_3)

{
  uint uVar1;
  HGLOBAL pvVar2;
  int iVar3;
  LPCVOID local_8;
  uint *local_4;
  
  local_4 = (uint *)0x0;
  uVar1 = FUN_00425530(param_1,&local_4);
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
      uVar1 = FUN_004255e0(local_4,(int)&local_8);
      if ((int)uVar1 < 0) goto LAB_00426bee;
      iVar3 = lstrcmpiA(param_2,*(LPCSTR *)((int)local_8 + 0x24));
    } while (iVar3 != 0);
    if ((-1 < (int)uVar1) &&
       (uVar1 = FUN_00425ff0((int)param_1,(int)local_8,param_3), local_8 != (LPCVOID)0x0)) {
      pvVar2 = GlobalHandle(local_8);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(local_8);
      GlobalFree(pvVar2);
    }
LAB_00426bee:
    FUN_004255a0(local_4);
  }
  return uVar1;
}


