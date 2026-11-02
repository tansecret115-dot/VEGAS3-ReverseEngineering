/* Module: vegas30k.dll
   Function: FUN_01178130
   Address: 01178130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01178130(int param_1,uint param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  *(uint *)(param_1 + 0x1b0) = param_2;
  *(int *)(param_1 + 0x1b4) = param_3;
  if (*(int *)(param_1 + 0x1f0) != 0) {
    if (*(int *)(param_1 + 0x13c) == 0) {
      iVar1 = *(int *)(param_1 + 0x1c4);
      uVar2 = *(uint *)(param_1 + 0x1c0);
      if ((iVar1 <= param_3) &&
         ((((iVar1 < param_3 || (uVar2 <= param_2)) && (-1 < iVar1)) &&
          ((0 < iVar1 || (uVar2 != 0)))))) {
        do {
          do {
            param_3 = (param_3 - iVar1) - (uint)(param_2 < uVar2);
            *(uint *)(param_1 + 0x1b0) = param_2 - uVar2;
            *(int *)(param_1 + 0x1b4) = param_3;
            param_2 = *(uint *)(param_1 + 0x1b0);
          } while (iVar1 < param_3);
        } while ((iVar1 <= param_3) && (uVar2 <= param_2));
      }
    }
    else if (*(uint *)(param_1 + 0x150) < *(uint *)(param_1 + 0x138)) {
      iVar1 = *(int *)(param_1 + 300);
      uVar2 = *(uint *)(param_1 + 0x128);
      if ((iVar1 <= param_3) && ((iVar1 < param_3 || (uVar2 <= param_2)))) {
        do {
          do {
            param_3 = (param_3 - iVar1) - (uint)(param_2 < uVar2);
            *(uint *)(param_1 + 0x1b0) = param_2 - uVar2;
            *(int *)(param_1 + 0x1b4) = param_3;
            param_2 = *(uint *)(param_1 + 0x1b0);
          } while (iVar1 < param_3);
        } while ((iVar1 <= param_3) && (uVar2 <= param_2));
        uVar2 = *(uint *)(param_1 + 0x1b0);
        *(uint *)(param_1 + 0x1b0) = uVar2 + *(uint *)(param_1 + 0x118);
        *(uint *)(param_1 + 0x1b4) =
             *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x11c) +
             (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x118));
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) + 1;
        LeaveCriticalSection(lpCriticalSection);
        return;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}


