/* Module: vidcap30.exe
   Function: FUN_004621b0
   Address: 004621b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004621b0(undefined4 *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  hMem = GlobalAlloc(0x40,0xc08);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    iVar2 = FUN_0056dcd0(*param_1,param_1[1],param_1[2],param_1 + 3,param_1 + 10,param_1[0x10],
                         param_1[0x11],param_1[0x12],param_1[0x13],0,0,param_1[0x15]);
    if ((iVar2 != 0) && (param_1[0x16] != 0)) {
      FUN_0056e600(param_1[0x16]);
    }
    return iVar2;
  }
  return 0;
}


