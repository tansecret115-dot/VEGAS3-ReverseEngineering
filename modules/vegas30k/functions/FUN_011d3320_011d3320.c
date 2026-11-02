/* Module: vegas30k.dll
   Function: FUN_011d3320
   Address: 011d3320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d3320(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x154) & 2) == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x16c));
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
    while( true ) {
      EnterCriticalSection(lpCriticalSection);
      if ((*(byte *)(param_1 + 0x154) & 6) == 0) {
        LeaveCriticalSection(lpCriticalSection);
        ResetEvent(*(HANDLE *)(param_1 + 0x16c));
        return;
      }
      iVar3 = 0;
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x1ec)) {
        puVar1 = (uint *)(param_1 + 0x1b0);
        do {
          if ((*puVar1 & 1) != 0) {
            *puVar1 = *puVar1 & 0xfffffffe;
            puVar1[-3] = 0;
          }
          iVar2 = iVar2 + 1;
          puVar1 = puVar1 + 8;
        } while (iVar2 < *(int *)(param_1 + 0x1ec));
      }
      LeaveCriticalSection(lpCriticalSection);
      if ((*(byte *)(*(int *)(param_1 + 500) * 0x20 + 0x1b0 + param_1) & 0x10) != 0) {
        return;
      }
      iVar2 = FUN_011d1750(*(undefined4 *)((*(int *)(param_1 + 500) + 0xd) * 0x20 + param_1),
                           *(undefined4 *)(param_1 + 0x1e8));
      if (iVar2 < 0) break;
      EnterCriticalSection(lpCriticalSection);
      if (iVar2 != 0) {
        *(uint *)(*(int *)(param_1 + 500) * 0x20 + 0x1a4 + param_1) =
             (uint)*(ushort *)(*(int *)(param_1 + 0x19c) + 0xc) * iVar2;
        iVar3 = FUN_011d2c60(*(undefined4 *)(param_1 + 500));
        if (-1 < iVar3) {
          iVar2 = *(int *)(param_1 + 500) + 1;
          *(int *)(param_1 + 500) = iVar2;
          if (iVar2 == *(int *)(param_1 + 0x1ec)) {
            *(undefined4 *)(param_1 + 500) = 0;
          }
          ResetEvent(*(HANDLE *)(param_1 + 0x16c));
          *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      if (iVar3 < 0) {
        return;
      }
      if ((*(byte *)(*(int *)(param_1 + 500) * 0x20 + 0x1b0 + param_1) & 0x10) != 0) {
        return;
      }
    }
    if (iVar2 == -2) {
      ResetEvent(*(HANDLE *)(param_1 + 0x16c));
      return;
    }
  }
  return;
}


