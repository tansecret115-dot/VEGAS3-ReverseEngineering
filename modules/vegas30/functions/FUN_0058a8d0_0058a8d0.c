/* Module: vegas30.exe
   Function: FUN_0058a8d0
   Address: 0058a8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0058a8d0(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateFileA((LPCSTR)(param_1 + 8),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x20000080,
                       (HANDLE)0x0);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(HANDLE *)(param_1 + 0x124) = pvVar1;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  return (pvVar1 != (HANDLE)0xffffffff) - 1 & 0x8004e007;
}


