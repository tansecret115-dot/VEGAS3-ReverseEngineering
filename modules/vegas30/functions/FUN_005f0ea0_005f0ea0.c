/* Module: vegas30.exe
   Function: FUN_005f0ea0
   Address: 005f0ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f0ea0(uchar *param_1,int *param_2)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_2 = 0;
  iVar1 = FUN_005f03a0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_005f0a00(param_1,param_2);
    return iVar1;
  }
  hMem = GlobalAlloc(0x40,0x4d8);
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 != (LPVOID)0x0) {
    iVar1 = FUN_005efda0();
    if (iVar1 != 0) {
      _mbscpy((uchar *)(iVar1 + 0x170),param_1);
      iVar3 = FUN_005f0290();
      if (-1 < iVar3) {
        iVar3 = FUN_005f1800();
        if (-1 < iVar3) {
          if (iVar3 != 0) {
            FUN_005f3030(iVar3,0);
          }
          *param_2 = iVar1;
          return iVar3;
        }
      }
      if (iVar3 == -0x7ffb1ff6) {
        uVar4 = 0x50fb;
        iVar5 = -0x7ffb1ff6;
      }
      else if (iVar3 == -0x7ffb1ff5) {
        uVar4 = 0x5107;
        iVar5 = -0x7ffb1ff9;
      }
      else {
        uVar4 = 0x50f9;
        iVar5 = -0x7ffb1ff9;
      }
      uVar4 = _SfGetString_8(DAT_00647204,uVar4);
      FUN_005f3030(iVar3,uVar4);
      *(uint *)(iVar1 + 0x134) = *(uint *)(iVar1 + 0x134) | 0x20;
      *param_2 = iVar1;
      return iVar5;
    }
  }
  return -0x7ff8fff2;
}


