/* Module: vidcap30.exe
   Function: FUN_00471210
   Address: 00471210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00471210(uchar *param_1,int *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x388);
  pvVar1 = GlobalLock(hMem);
  if ((pvVar1 != (LPVOID)0x0) && (iVar2 = FUN_00470cb0(), iVar2 != 0)) {
    _mbscpy((uchar *)(iVar2 + 0x158),param_1);
    iVar3 = FUN_00471100();
    if (-1 < iVar3) {
      iVar3 = FUN_004719b0();
      if (-1 < iVar3) {
        if (iVar3 != 0) {
          FUN_00472c40(iVar3,0);
        }
        *param_2 = iVar2;
        return iVar3;
      }
    }
    if (iVar3 == -0x7ffb1ff6) {
      uVar4 = 0xc567;
      iVar5 = -0x7ffb1ff6;
    }
    else if (iVar3 == -0x7ffb1ff5) {
      uVar4 = 0xc568;
      iVar5 = -0x7ffb1ff9;
    }
    else {
      uVar4 = 0xc569;
      iVar5 = -0x7ffb1ff9;
    }
    uVar4 = _SfGetString_8(DAT_005ba2a0,uVar4);
    FUN_00472c40(iVar3,uVar4);
    *(uint *)(iVar2 + 0x124) = *(uint *)(iVar2 + 0x124) | 0x20;
    *param_2 = iVar2;
    return iVar5;
  }
  return -0x7ff8fff2;
}


