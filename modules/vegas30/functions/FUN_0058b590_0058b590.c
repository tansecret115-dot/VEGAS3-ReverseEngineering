/* Module: vegas30.exe
   Function: FUN_0058b590
   Address: 0058b590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058b590(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = CreateFileA((LPCSTR)(param_1 + 8),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                       (HANDLE)0x0);
  *(undefined4 *)(param_1 + 0x148) = 0x200;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(HANDLE *)(param_1 + 0x124) = pvVar1;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (pvVar1 == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  FUN_0058b230(param_1,param_2);
  iVar2 = FUN_0058ada0(param_1);
  if (-1 < iVar2) {
    CloseHandle(*(HANDLE *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    iVar2 = 0;
  }
  return iVar2;
}


