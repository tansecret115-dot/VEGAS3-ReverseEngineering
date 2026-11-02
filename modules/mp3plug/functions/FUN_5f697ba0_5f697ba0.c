/* Module: mp3plug.dll
   Function: FUN_5f697ba0
   Address: 5f697ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f697ba0(void *this,undefined4 *param_1,uint param_2)

{
  LPCVOID pMem;
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_c;
  HANDLE local_8;
  undefined4 local_4;
  
  local_c = 0;
  WaitForSingleObject(*(HANDLE *)((int)this + 0x1d0),0xffffffff);
  uVar1 = param_2;
  if (*(int *)((int)this + 0x130) == 0) {
    if (*(int *)((int)this + 0x1bc) == 10) {
      ResetEvent(*(HANDLE *)((int)this + 8));
      ReleaseMutex(*(HANDLE *)((int)this + 0x1d0));
      local_8 = *(HANDLE *)((int)this + 8);
      local_4 = *(undefined4 *)((int)this + 0x10);
      DVar2 = WaitForMultipleObjects(2,&local_8,0,0xffffffff);
      if (DVar2 != 0) {
        return 0x8004e009;
      }
      WaitForSingleObject(*(HANDLE *)((int)this + 0x1d0),0xffffffff);
    }
    if (*(int *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x160) < (int)uVar1) {
      pMem = *(LPCVOID *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x138);
      if (pMem != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x138));
        GlobalFree(pvVar3);
        *(undefined4 *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x160) = 0;
      }
      pvVar3 = GlobalAlloc(0x42,uVar1);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x138) = pvVar4;
      if (*(int *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x138) == 0) {
        local_c = 0x8007000e;
        goto LAB_5f697d6c;
      }
      *(uint *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x160) = uVar1;
    }
    puVar8 = param_1;
    puVar9 = *(undefined4 **)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x138);
    for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)((int)this + *(int *)((int)this + 0x1b8) * 4 + 0x188) = uVar1;
    iVar7 = *(int *)((int)this + 0x1b8) + 1;
    *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1bc) + 1;
    *(int *)((int)this + 0x1b8) = iVar7;
    if (iVar7 == 10) {
      *(undefined4 *)((int)this + 0x1b8) = 0;
    }
    SetEvent(*(HANDLE *)((int)this + 0xc));
  }
  if (*(int *)((int)this + 0x14) != 0) {
    param_2 = 0;
    BVar5 = WriteFile(*(HANDLE *)((int)this + 0x18),param_1,uVar1,&param_2,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      local_c = 0x8004e009;
    }
    uVar1 = *(uint *)((int)this + 0x128);
    *(uint *)((int)this + 0x128) = uVar1 + param_2;
    *(uint *)((int)this + 300) = *(int *)((int)this + 300) + (uint)CARRY4(uVar1,param_2);
  }
LAB_5f697d6c:
  ReleaseMutex(*(HANDLE *)((int)this + 0x1d0));
  return local_c;
}


