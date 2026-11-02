/* Module: wmfdist2.exe
   Function: FUN_010041f1
   Address: 010041f1
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE FUN_010041f1(LPCSTR param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  HANDLE pvVar3;
  DWORD dwCreationDisposition;
  
  uVar2 = param_2;
  if ((param_2 & 8) == 0) {
    uVar1 = param_2 & 3;
    param_2 = 0x80000000;
    if (uVar1 != 0) {
      param_2 = 0x40000000;
    }
    if ((uVar2 & 0x100) == 0) {
      dwCreationDisposition = (-(uint)((uVar2 & 0x200) != 0) & 2) + 3;
    }
    else if ((uVar2 & 0x400) == 0) {
      dwCreationDisposition = (-(uint)((uVar2 & 0x200) != 0) & 0xfffffffe) + 4;
    }
    else {
      dwCreationDisposition = 1;
    }
    pvVar3 = CreateFileA(param_1,param_2,0,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,0x80,
                         (HANDLE)0x0);
    if ((pvVar3 == (HANDLE)0xffffffff) && (dwCreationDisposition != 3)) {
      FUN_0100428b(param_1);
      pvVar3 = CreateFileA(param_1,param_2,0,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,0x80,
                           (HANDLE)0x0);
    }
  }
  else {
    pvVar3 = (HANDLE)0xffffffff;
  }
  return pvVar3;
}


