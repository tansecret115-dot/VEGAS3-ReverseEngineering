/* Module: pncrt.dll
   Function: FUN_7802a420
   Address: 7802a420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7802a420(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int unaff_EDI;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_3,param_2);
  if (((param_1[3] & 0x83U) == 0) || (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    piVar2 = _errno();
    *piVar2 = 0x16;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_4 == 1) {
      uVar3 = FUN_780291c0(param_1);
      lVar4 = uVar3 + lVar4;
      param_4 = 0;
    }
    param_3 = (undefined4)((ulonglong)lVar4 >> 0x20);
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
    lVar4 = _lseeki64(param_1[4],CONCAT44(param_4,param_3),unaff_EDI);
    if (lVar4 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}


