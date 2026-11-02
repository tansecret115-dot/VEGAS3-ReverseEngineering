/* Module: vidcap30.exe
   Function: FUN_0042b1d0
   Address: 0042b1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042b1d0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = 0;
  if (*param_1 == 8) {
    uVar2 = __aullshr();
    if ((uVar2 & 1) == param_2) {
      return 1;
    }
    iVar1 = FUN_00428e50(param_1,param_2,0);
    if (-1 < iVar1) {
      uVar3 = __allshl();
      param_1[0x52] = (uint)uVar3 | param_1[0x52] & 0xfbffffffU;
      param_1[0x53] = (uint)((ulonglong)uVar3 >> 0x20) | param_1[0x53];
      if ((param_1[0x52] & 0x4000000U) == 0) {
        iVar1 = FUN_00428e50(param_1,1,1);
        return iVar1;
      }
    }
  }
  return iVar1;
}


