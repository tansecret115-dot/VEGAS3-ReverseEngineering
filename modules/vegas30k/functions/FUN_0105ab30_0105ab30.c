/* Module: vegas30k.dll
   Function: FUN_0105ab30
   Address: 0105ab30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0105ab30(int param_1)

{
  HANDLE pvVar1;
  
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (*(short *)(param_1 + 0x108) != 0) {
    pvVar1 = CreateFileA((LPCSTR)(param_1 + 4),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,
                         (HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x130) = pvVar1;
    if (pvVar1 != (HANDLE)0xffffffff) {
      return 0;
    }
  }
  return 0x8004e007;
}


