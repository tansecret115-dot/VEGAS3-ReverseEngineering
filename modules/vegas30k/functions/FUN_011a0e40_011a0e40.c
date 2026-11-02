/* Module: vegas30k.dll
   Function: FUN_011a0e40
   Address: 011a0e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_011a0e40(int *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  int *local_4;
  
  local_4 = param_1;
  hMem = GlobalAlloc(0x40,0xc88);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_011b0ec0(param_1[0x8a],param_1);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_011b2270(param_1 + 0xb7,0);
      if (-1 < iVar3) {
        local_4 = piVar2;
        iVar3 = _SfList_InsertList_16(param_1[0x10e],0xffffffff,&local_4,1);
        if (-1 < iVar3) {
          FUN_011b51f0(0);
          (**(code **)(*piVar2 + 4))(piVar2);
          return piVar2;
        }
      }
      (**(code **)(*piVar2 + 0x2c))(1);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


