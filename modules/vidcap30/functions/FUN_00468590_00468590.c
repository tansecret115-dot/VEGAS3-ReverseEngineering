/* Module: vidcap30.exe
   Function: FUN_00468590
   Address: 00468590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00468590(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,int *param_5,
            undefined4 *param_6)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (*(int *)(param_1 + 0xbc) == 0) {
    pMem = *(LPCVOID *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 200) = *param_4;
    *(undefined4 *)(param_1 + 0xcc) = param_4[1];
    *(undefined4 *)(param_1 + 0xd0) = *param_6;
    *(undefined4 *)(param_1 + 0xd4) = param_6[1];
    *(undefined4 *)(param_1 + 0xd8) = param_6[2];
    *(undefined4 *)(param_1 + 0xdc) = param_6[3];
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    pvVar1 = GlobalAlloc(0x40,param_3);
    puVar2 = GlobalLock(pvVar1);
    *(undefined4 **)(param_1 + 0xf0) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    *(uint *)(param_1 + 0xf4) = param_3;
  }
  else {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + *param_5;
  }
  DVar3 = GetTickCount();
  *(DWORD *)(param_1 + 0xe4) = DVar3;
  uVar4 = *(uint *)(param_1 + 0xe8);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  *(uint *)(param_1 + 0xe8) = uVar4 + param_3;
  *(uint *)(param_1 + 0xec) =
       *(int *)(param_1 + 0xec) + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar4,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return;
}


