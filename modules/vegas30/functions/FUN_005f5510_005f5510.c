/* Module: vegas30.exe
   Function: FUN_005f5510
   Address: 005f5510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f5510(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  
  hMem = GlobalAlloc(0x40,0x338);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    iVar2 = FUN_005f53e0();
    if (iVar2 != 0) {
      FUN_005f5460(param_1,param_2 + 4,*(undefined4 *)(param_2 + 0x108),
                   *(undefined4 *)(param_2 + 0x10c));
      *param_3 = iVar2;
      *param_4 = 0;
      return 0;
    }
  }
  return 0x8007000e;
}


