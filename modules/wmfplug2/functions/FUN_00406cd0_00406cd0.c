/* Module: wmfplug2.dll
   Function: FUN_00406cd0
   Address: 00406cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406cd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  LPWSTR lpWideCharStr;
  int cchWideChar;
  code *pcVar4;
  undefined4 *unaff_ESI;
  undefined4 *pMem;
  uint uStack_12c;
  undefined4 *puStack_128;
  undefined4 local_114 [2];
  undefined4 local_10c;
  undefined1 local_108 [248];
  int *piStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_128 = local_114;
  pMem = (undefined4 *)0x0;
  uStack_12c = 0;
  local_10c = 0;
  local_114[0] = 0;
  lpWideCharStr = (LPWSTR)0x0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&local_10c,param_3,local_108);
  if ((iVar1 < 0) || ((short)uStack_12c == 0)) {
    return 0;
  }
  if (unaff_ESI == (undefined4 *)0x1) {
    pvVar2 = GlobalAlloc(0x42,uStack_12c + 0xc & 0xffff);
    pMem = GlobalLock(pvVar2);
    if (pMem == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    lpWideCharStr = (LPWSTR)(pMem + 3);
    iVar1 = (**(code **)(*param_1 + 0x14))
                      (param_1,&stack0xfffffedc,uStack_c,&stack0xfffffee0,lpWideCharStr,&uStack_12c)
    ;
    pcVar4 = GlobalHandle_exref;
    if (-1 < iVar1) goto LAB_00406e56;
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    pMem = (undefined4 *)0x0;
  }
  else {
    pcVar4 = GlobalHandle_exref;
    if (unaff_ESI == (undefined4 *)0x0) {
      puStack_128 = unaff_ESI;
      iVar1 = (**(code **)(*param_1 + 0x14))
                        (param_1,&stack0xfffffedc,uStack_c,&stack0xfffffee0,&puStack_128,&uStack_12c
                        );
      if (iVar1 < 0) {
        return iVar1;
      }
      FUN_0042caa0((uint)puStack_128,&stack0xfffffee4,0);
      iVar3 = lstrlenA(&stack0xfffffee4);
      cchWideChar = iVar3 + 1;
      pvVar2 = GlobalAlloc(0x42,iVar3 + 0xd + cchWideChar & 0xffff);
      pMem = GlobalLock(pvVar2);
      if (pMem == (undefined4 *)0x0) {
        return -0x7ff8fff2;
      }
      lpWideCharStr = (LPWSTR)(pMem + 3);
      MultiByteToWideChar(0,1,&stack0xfffffee4,-1,lpWideCharStr,cchWideChar);
      *(undefined2 *)((int)pMem + cchWideChar * 2 + 10) = 0;
      pcVar4 = GlobalHandle_exref;
    }
  }
  if (iVar1 < 0) {
    return iVar1;
  }
LAB_00406e56:
  if (pMem != (undefined4 *)0x0) {
    if (*lpWideCharStr != L'\0') {
      *pMem = 0xc;
      pMem[1] = uStack_8;
      pMem[2] = uStack_12c & 0xffff;
      puStack_128 = pMem;
      iVar1 = FUN_0042aa50(piStack_10,-1,(int *)&puStack_128,1);
      if (-1 < iVar1) {
        return iVar1;
      }
    }
    pvVar2 = (HGLOBAL)(*pcVar4)(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = (HGLOBAL)(*pcVar4)(pMem);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


