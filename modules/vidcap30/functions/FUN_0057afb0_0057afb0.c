/* Module: vidcap30.exe
   Function: FUN_0057afb0
   Address: 0057afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID __thiscall FUN_0057afb0(int param_1,uint param_2)

{
  LPVOID pvVar1;
  
  if (*(uint *)(param_1 + 0x40) == param_2) {
    return *(LPVOID *)(param_1 + 0x44);
  }
  pvVar1 = CoTaskMemAlloc(param_2);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_2 <= *(uint *)(param_1 + 0x40)) {
      return *(LPVOID *)(param_1 + 0x44);
    }
    return (LPVOID)0x0;
  }
  if (*(uint *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
  }
  *(LPVOID *)(param_1 + 0x44) = pvVar1;
  *(uint *)(param_1 + 0x40) = param_2;
  return pvVar1;
}


