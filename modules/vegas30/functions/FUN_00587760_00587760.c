/* Module: vegas30.exe
   Function: FUN_00587760
   Address: 00587760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00587760(int param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  FUN_005877a0();
  hMem = GlobalAlloc(0x42,param_2);
  pvVar1 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 8) = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *(SIZE_T *)(param_1 + 0xc) = param_2;
    return 0;
  }
  return 0x8007000e;
}


