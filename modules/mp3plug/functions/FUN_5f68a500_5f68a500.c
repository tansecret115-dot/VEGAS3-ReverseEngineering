/* Module: mp3plug.dll
   Function: FUN_5f68a500
   Address: 5f68a500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68a500(HANDLE param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  HGLOBAL pvVar2;
  uint *lpBuffer;
  BOOL BVar3;
  int iVar4;
  uint *puVar5;
  uint local_8c;
  uint local_88;
  uint local_84;
  DWORD local_80;
  uint local_7c [31];
  
  pvVar2 = GlobalAlloc(0x42,0x100);
  lpBuffer = GlobalLock(pvVar2);
  if (lpBuffer != (uint *)0x0) {
    local_88 = *param_2;
    local_84 = param_2[1];
    SetFilePointer(param_1,local_88,(PLONG)&local_84,0);
    BVar3 = ReadFile(param_1,lpBuffer,0x100,&local_80,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      puVar5 = param_3;
      if (param_3 == (uint *)0x0) {
        puVar5 = local_7c;
      }
      iVar4 = FUN_5f689060(puVar5,lpBuffer,(int *)&local_8c,(uint)(param_3 != (uint *)0x0));
      if (iVar4 != 0) {
        uVar1 = *param_2;
        *param_2 = uVar1 + local_8c;
        param_2[1] = param_2[1] + (uint)CARRY4(uVar1,local_8c);
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalFree(pvVar2);
        return 1;
      }
    }
    pvVar2 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar2);
  }
  return 0;
}


