/* Module: vegas30.exe
   Function: FUN_0058e180
   Address: 0058e180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058e180(uint param_1)

{
  LPOVERLAPPED lpOverlapped;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  uVar1 = param_1;
  if ((*(byte *)(param_1 + 0x54) & 8) != 0) {
    uVar8 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0065ab18);
    iVar2 = FUN_00590210(uVar1);
    if (iVar2 != 0) {
      if (*(double *)(uVar1 + 0x40) == _DAT_00610fd8) {
        FUN_005908e0(uVar1);
      }
      else {
        FUN_00590d30(uVar1);
      }
      iVar2 = 0;
      if (0 < *(int *)(uVar1 + 0xb8)) {
        puVar9 = (undefined4 *)(uVar1 + 0x58);
        do {
          FUN_0058ec90(*puVar9);
          FUN_0058e2d0(*puVar9);
          *puVar9 = 0;
          iVar2 = iVar2 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar2 < *(int *)(uVar1 + 0xb8));
      }
      *(undefined4 *)(uVar1 + 0xb8) = 0;
      *(uint *)(uVar1 + 0x54) = *(uint *)(uVar1 + 0x54) & 0xfffffff7;
      FUN_0058e2d0(uVar1);
      uVar8 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0065ab18);
    return uVar8;
  }
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x14) == 0) {
      puVar9 = (undefined4 *)(param_1 + 0xc0);
      lpOverlapped = (LPOVERLAPPED)(param_1 + 0xd8);
      param_1 = *(uint *)(param_1 + 0x30);
      BVar3 = GetOverlappedResult((HANDLE)*puVar9,lpOverlapped,&param_1,0);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        if (DVar4 == 0x3e4) {
          return 0;
        }
      }
      else if ((int)param_1 < *(int *)(uVar1 + 0x30)) {
        uVar7 = ((int)param_1 < 0) - 1 & param_1;
        uVar5 = *(int *)(uVar1 + 0x30) - uVar7;
        puVar9 = (undefined4 *)(*(int *)(uVar1 + 8) + uVar7);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
    }
    else if (*(int *)(iVar2 + 0x18) == 0) {
      return 0;
    }
    FUN_0058e2d0(uVar1);
  }
  return 1;
}


