/* Module: vidcap30.exe
   Function: FUN_0046dc00
   Address: 0046dc00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046dc00(undefined4 param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  
  hMem = GlobalAlloc(0x40,0xf8);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    *param_2 = 0x8007000e;
    return 0;
  }
  iVar2 = FUN_0046e0c0("sfinout",param_1,param_2);
  if (iVar2 == 0) {
    *param_2 = 0x8007000e;
    return 0;
  }
  *param_2 = 0;
  return iVar2;
}


