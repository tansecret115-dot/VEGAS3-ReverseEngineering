/* Module: vegas30.exe
   Function: FUN_005b50e0
   Address: 005b50e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b50e0(uint *param_1,DWORD param_2,int param_3)

{
  HANDLE pvVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  pvVar1 = CreateFileA((LPCSTR)(param_1 + 4),param_2,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                      );
  param_1[0x46] = (uint)pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    param_1[0x46] = 0;
    FUN_005b5180();
    return 0x8004e007;
  }
  if (param_3 != 0) {
    hMem = GlobalAlloc(0x40,0x28);
    pvVar2 = GlobalLock(hMem);
    if (pvVar2 == (LPVOID)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005da260(param_1[0x46]);
    }
    param_1[0x45] = uVar3;
    if (uVar3 != 0) {
      *param_1 = *param_1 | 1;
      return 0;
    }
    uVar4 = 0x8007000e;
    FUN_005b5180();
  }
  return uVar4;
}


