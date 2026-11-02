/* Module: pncrt.dll
   Function: FUN_780271a0
   Address: 780271a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780271a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if (((param_1[3] & 0x83U) != 0) && (((param_3 == 0 || (param_3 == 1)) || (param_3 == 2)))) {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_78027290(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_7800e5c0(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    lVar3 = _lseek(param_1[4],param_2,param_3);
    return (lVar3 != -1) - 1;
  }
  piVar4 = _errno();
  *piVar4 = 0x16;
  return -1;
}


