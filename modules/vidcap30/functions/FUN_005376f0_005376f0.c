/* Module: vidcap30.exe
   Function: FUN_005376f0
   Address: 005376f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005376f0(int param_1,int param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint lDistanceToMove;
  bool bVar8;
  int local_36c;
  DWORD local_368;
  int local_364;
  undefined1 local_360 [52];
  int local_32c;
  int local_328;
  int local_324;
  
  if (0 < param_2) {
    hMem = GlobalAlloc(0x42,param_2 * 8);
    pvVar1 = GlobalLock(hMem);
    *(LPVOID *)(param_1 + 0x938) = pvVar1;
    if (pvVar1 == (LPVOID)0x0) {
      FUN_00536e70(0xaaaaaaa3,"MapCentralDirectories",0);
      return 0x8007000e;
    }
    lDistanceToMove = *(uint *)(param_1 + 0x890) + *(uint *)(param_1 + 0x4c);
    iVar7 = *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x50) +
            (uint)CARRY4(*(uint *)(param_1 + 0x890),*(uint *)(param_1 + 0x4c));
    local_36c = iVar7;
    local_368 = SetFilePointer(*(HANDLE *)(param_1 + 8),lDistanceToMove,&local_36c,0);
    local_364 = 0;
    if (0 < param_2) {
      do {
        iVar6 = local_364;
        if (local_368 == 0xffffffff) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x938);
        *(uint *)(iVar2 + local_364 * 8) = lDistanceToMove;
        *(int *)(iVar2 + 4 + local_364 * 8) = iVar7;
        iVar2 = FUN_00537260(lDistanceToMove,iVar7,local_360);
        if (iVar2 != 0) {
          uVar3 = local_328 * 2 + local_324 * 2;
          uVar4 = uVar3 + local_32c * 2;
          uVar5 = uVar4 + 0x54;
          bVar8 = CARRY4(lDistanceToMove,uVar5);
          lDistanceToMove = lDistanceToMove + uVar5;
          iVar7 = iVar7 + (uint)CARRY4(local_328 * 2,local_324 * 2) +
                          (uint)CARRY4(uVar3,local_32c * 2) + (uint)(0xffffffab < uVar4) +
                  (uint)bVar8;
          local_36c = iVar7;
          local_368 = SetFilePointer(*(HANDLE *)(param_1 + 8),lDistanceToMove,&local_36c,0);
          iVar6 = local_364;
        }
        local_364 = iVar6 + 1;
      } while (local_364 < param_2);
    }
  }
  return 0;
}


