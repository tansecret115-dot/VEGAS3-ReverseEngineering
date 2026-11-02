/* Module: vidcap30.exe
   Function: FUN_0042cf40
   Address: 0042cf40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042cf40(int param_1,SIZE_T param_2)

{
  undefined4 uVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x24) == 0) {
    hMem = GlobalAlloc(0x40,param_2);
    pvVar2 = GlobalLock(hMem);
    *(LPVOID *)(param_1 + 0x24) = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      *(SIZE_T *)(param_1 + 0x20) = param_2;
      return 0;
    }
    uVar1 = 0x80004003;
  }
  return uVar1;
}


