/* Module: vidcap30.exe
   Function: FUN_0057fd20
   Address: 0057fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0057fd20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            undefined4 param_6)

{
  HANDLE pvVar1;
  
  FUN_0057b480(param_2,param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_5 != 0) {
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x30) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      *param_4 = 0x8007000e;
    }
  }
  return param_1;
}


