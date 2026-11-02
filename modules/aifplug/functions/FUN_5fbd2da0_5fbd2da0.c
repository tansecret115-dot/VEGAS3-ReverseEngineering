/* Module: aifplug.dll
   Function: FUN_5fbd2da0
   Address: 5fbd2da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5fbd2da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  HANDLE pvVar1;
  HGLOBAL pvVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x10) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      return 0x8007000e;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(LPCVOID *)(param_1 + 0x54) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x54));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x54));
    GlobalFree(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_5fbd2d20(param_1);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x38) = param_8;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  return 0;
}


