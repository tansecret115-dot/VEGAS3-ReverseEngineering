/* Module: vidcap30.exe
   Function: FUN_005134f0
   Address: 005134f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005134f0(int param_1,uint param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 < 2) {
    uVar3 = 2;
  }
  else {
    if (param_2 < 0x1000) goto LAB_0051351d;
    uVar3 = 0xfff;
  }
  bVar4 = uVar3 != param_2;
  param_2 = uVar3;
  if (bVar4) {
    return 0;
  }
LAB_0051351d:
  if ((*(int *)(param_1 + 0xb4) == 0) || (param_2 != *(uint *)(param_1 + 0x9c))) {
    pvVar1 = GlobalAlloc(0x42,param_2 * 8);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      return 0;
    }
    if (*(LPCVOID *)(param_1 + 0xb4) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb4));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb4));
      GlobalFree(pvVar1);
    }
    *(LPVOID *)(param_1 + 0xb4) = pvVar2;
    *(uint *)(param_1 + 0x9c) = param_2;
  }
  FUN_005133b0(param_1,param_3);
  return *(undefined4 *)(param_1 + 0x9c);
}


