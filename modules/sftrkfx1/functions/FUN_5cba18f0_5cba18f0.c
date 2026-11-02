/* Module: sftrkfx1.dll
   Function: FUN_5cba18f0
   Address: 5cba18f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cba18f0(int param_1)

{
  int *this;
  int iVar1;
  uint uVar2;
  uchar local_1c [28];
  
  this = DAT_5cc11484;
  if (param_1 == 1) {
    return DAT_5cc11488;
  }
  DAT_5cc11488 = 0;
  iVar1 = FUN_5cbf91f0(DAT_5cc11484,(LPSTR)local_1c,0x19);
  if (-1 < iVar1) {
    iVar1 = FUN_5cbf6d60(this,local_1c);
    if (-1 < iVar1) {
      uVar2 = FUN_5cbf6f90(this);
      DAT_5cc11488 = uVar2 & 0xff;
      return uVar2 & 0xff;
    }
  }
  return DAT_5cc11488;
}


