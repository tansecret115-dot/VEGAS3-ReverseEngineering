/* Module: vidcap30.exe
   Function: FUN_004516f0
   Address: 004516f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004516f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x130);
  if (iVar1 < 0) {
    if (iVar1 == -0x7ffb1ff4) {
      **(uint **)(iVar2 + 4) = **(uint **)(iVar2 + 4) | 0x40000;
    }
  }
  else {
    _mbscpy((uchar *)(iVar2 + 0xbc),(uchar *)(param_1 + 0x2c));
    *(undefined4 *)(iVar2 + 0x1c8) = 0;
    *(undefined4 *)(iVar2 + 0x638) = 0;
    FUN_0042f760(iVar2);
    FUN_00417ac0(DAT_005ba4bc,(uchar *)(iVar2 + 0xbc),&DAT_005bb848);
    if (*(int *)(param_1 + 0x13c) != 0) {
      PostMessageA(DAT_005ba4bc,0x10,0,0);
      return iVar1;
    }
  }
  return iVar1;
}


