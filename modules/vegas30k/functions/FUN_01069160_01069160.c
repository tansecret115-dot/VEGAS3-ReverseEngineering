/* Module: vegas30k.dll
   Function: FUN_01069160
   Address: 01069160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_01069160(int param_1,LPCSTR param_2)

{
  int iVar1;
  HANDLE pvVar2;
  
  iVar1 = _SfDoesFileExist_4(param_2);
  if (iVar1 == 0) {
    FUN_01070600(0xaaaaaaae,"open read",0);
    return -0x7ffb1fce;
  }
  pvVar2 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (pvVar2 != (HANDLE)0xffffffff) {
    iVar1 = FUN_01069ef0(pvVar2);
    if (-1 < iVar1) {
      *(HANDLE *)(param_1 + 0xc) = pvVar2;
      *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x40);
      return iVar1;
    }
    FUN_01070600(0xaaaaaaa5,"open read",0);
    return -0x7ffb1f50;
  }
  FUN_01070600(0xaaaaaaa2,"open read",0);
  return -0x7ffb1ffa;
}


