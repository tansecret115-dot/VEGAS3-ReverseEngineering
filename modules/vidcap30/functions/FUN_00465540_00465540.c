/* Module: vidcap30.exe
   Function: FUN_00465540
   Address: 00465540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00465540(undefined4 param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  
  hMem = GlobalAlloc(0x40,0x108);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    *param_2 = 0x8007000e;
    return 0;
  }
  iVar2 = FUN_00467030("sfstrmon",param_1,param_2);
  if (iVar2 == 0) {
    *param_2 = 0x8007000e;
    return 0;
  }
  *param_2 = 0;
  return iVar2;
}


