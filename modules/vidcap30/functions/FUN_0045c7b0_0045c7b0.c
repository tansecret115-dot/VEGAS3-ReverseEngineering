/* Module: vidcap30.exe
   Function: FUN_0045c7b0
   Address: 0045c7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0045c7b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar3 = 0;
  uVar1 = _SfGetDiskFreeSpace_8(param_1 + 0x138,0x100000);
  if (*(int *)(param_1 + 0x130) != 0) {
    uVar2 = *(uint *)(param_1 + 0x134);
    if (uVar1 < uVar2) {
      uVar2 = uVar2 - uVar1;
    }
    else {
      uVar2 = uVar1 - uVar2;
    }
    if (0xff5 < uVar2) {
      uVar3 = 1;
    }
  }
  if (DAT_005bb0f4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x134);
    if (uVar1 < uVar2) {
      uVar2 = uVar2 - uVar1;
    }
    else {
      uVar2 = uVar1 - uVar2;
    }
    if (DAT_005bb0f8 <= uVar2) {
      uVar3 = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return uVar3;
}


