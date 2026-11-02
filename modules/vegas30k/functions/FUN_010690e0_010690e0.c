/* Module: vegas30k.dll
   Function: FUN_010690e0
   Address: 010690e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_010690e0(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  
  pvVar1 = CreateFileA(param_2,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *(HANDLE *)(param_1 + 0xc) = pvVar1;
    *(HANDLE *)(param_1 + 8) = pvVar1;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    *(undefined4 *)(param_1 + 0x898) = 1;
    *(undefined4 *)(param_1 + 0x8a8) = 1;
    uVar2 = _SfList_CreateExZ_32(param_1 + 0x10,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
    return uVar2;
  }
  FUN_01070600(0xaaaaaaa2,param_2,0);
  return 0x8004e006;
}


