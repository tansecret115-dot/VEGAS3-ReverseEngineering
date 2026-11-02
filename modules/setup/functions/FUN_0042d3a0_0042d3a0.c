/* Module: Setup.exe
   Function: FUN_0042d3a0
   Address: 0042d3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042d3a0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  iVar1 = 0x10;
  uVar3 = 0xffff0000;
  do {
    if ((uVar3 & param_1) != 0) {
      iVar2 = iVar2 + iVar1;
      param_1 = uVar3 & param_1;
    }
    iVar1 = iVar1 / 2;
    uVar3 = uVar3 ^ uVar3 >> ((byte)iVar1 & 0x1f);
  } while (iVar1 != 0);
  return iVar2;
}


