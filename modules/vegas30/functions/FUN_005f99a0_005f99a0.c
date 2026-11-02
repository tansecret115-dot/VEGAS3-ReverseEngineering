/* Module: vegas30.exe
   Function: FUN_005f99a0
   Address: 005f99a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f99a0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  
  if (*param_2 != 2) {
    return 0x80070057;
  }
  hMem = GlobalAlloc(0x40,0x130);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_005f9830();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      FUN_005f9a20(unaff_retaddr,param_2[0x44]);
      *param_2 = (int)piVar2;
      *param_3 = 0;
      return 0;
    }
  }
  return 0x8007000e;
}


