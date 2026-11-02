/* Module: vegas30k.dll
   Function: FUN_01189ac0
   Address: 01189ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_01189ac0(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x664),0xffffffff);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  for (iVar1 = *(int *)(param_1 + 0x638); iVar1 != 0; iVar1 = *(int *)(iVar1 + 100)) {
    if (*(int *)(iVar1 + 4) == *(int *)(param_2 + 4)) {
      *(uint *)(iVar1 + 0x58) = param_3;
      *(uint *)(iVar1 + 0x38) = param_5 - param_3;
      *(uint *)(iVar1 + 0x50) = param_5;
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(int *)(iVar1 + 0x5c) = param_4;
      *(int *)(iVar1 + 0x54) = param_6;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(uint *)(iVar1 + 0x3c) = (param_6 - param_4) - (uint)(param_5 < param_3);
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x60));
      if (iVar1 == param_2) {
        *(undefined4 *)(iVar1 + 8) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 0;
}


