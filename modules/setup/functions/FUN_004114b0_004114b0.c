/* Module: Setup.exe
   Function: FUN_004114b0
   Address: 004114b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004114b0(void *this,int param_1)

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
  int local_360 [13];
  int local_32c;
  int local_328;
  int local_324;
  
  if (0 < param_1) {
    hMem = GlobalAlloc(0x42,param_1 * 8);
    pvVar1 = GlobalLock(hMem);
    *(LPVOID *)((int)this + 0x938) = pvVar1;
    if (pvVar1 == (LPVOID)0x0) {
      FUN_00410c30(this,0xaaaaaaa3,(uchar *)"MapCentralDirectories",(uchar *)0x0);
      return 0x8007000e;
    }
    lDistanceToMove = *(uint *)((int)this + 0x890) + *(uint *)((int)this + 0x4c);
    iVar7 = *(int *)((int)this + 0x894) + *(int *)((int)this + 0x50) +
            (uint)CARRY4(*(uint *)((int)this + 0x890),*(uint *)((int)this + 0x4c));
    local_36c = iVar7;
    local_368 = SetFilePointer(*(HANDLE *)((int)this + 8),lDistanceToMove,&local_36c,0);
    local_364 = 0;
    if (0 < param_1) {
      do {
        iVar6 = local_364;
        if (local_368 == 0xffffffff) {
          return 0;
        }
        iVar2 = *(int *)((int)this + 0x938);
        *(uint *)(iVar2 + local_364 * 8) = lDistanceToMove;
        *(int *)(iVar2 + 4 + local_364 * 8) = iVar7;
        iVar2 = FUN_00411020(this,lDistanceToMove,iVar7,local_360);
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
          local_368 = SetFilePointer(*(HANDLE *)((int)this + 8),lDistanceToMove,&local_36c,0);
          iVar6 = local_364;
        }
        local_364 = iVar6 + 1;
      } while (local_364 < param_1);
    }
  }
  return 0;
}


