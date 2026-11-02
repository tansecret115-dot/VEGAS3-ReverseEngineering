/* Module: wavplug.dll
   Function: FUN_5f38d8b0
   Address: 5f38d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f38d8b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0xb8) = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      return 0x8007000e;
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(LPCVOID *)(param_1 + 0xd4) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0xd4));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0xd4));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  FUN_5f395370(param_1);
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0xc0) = param_3;
  *(undefined4 *)(param_1 + 0xc4) = param_4;
  iVar1 = *(int *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 200) = param_5;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xcc) = param_6;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x238);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x23c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x238);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x23c);
  *(undefined4 *)(param_1 + 0x10) = param_7;
  *(undefined4 *)(param_1 + 0x18) = param_9;
  *(undefined4 *)(param_1 + 0x14) = param_8;
  *(undefined4 *)(param_1 + 0x1c) = param_10;
  return 0;
}


