/* Module: vidcap30.exe
   Function: FUN_0042b720
   Address: 0042b720
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042b720(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = 0;
  if (*param_1 == 7) {
    uVar1 = param_1[0x52];
    iVar2 = param_1[0x53];
    uVar3 = __aullshr();
    if ((uVar3 & 1) == param_2) {
      return 1;
    }
    if (param_2 == 0) {
      if ((uVar1 & 0x800) != 0) {
        param_1[0x52] = uVar1 & 0xfffff7ff;
        param_1[0x53] = iVar2;
        param_1[0x52] = param_1[0x52] & 0xffffffdf;
        param_1[0x53] = param_1[0x53];
      }
    }
    else {
      iVar2 = FUN_0042b6a0(param_1);
      if (iVar2 == 0) {
        param_1[0x52] = param_1[0x52] | 0x800;
        param_1[0x53] = param_1[0x53];
        iVar2 = FUN_0042b6d0(param_1,1);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    uVar4 = __allshl();
    param_1[0x52] = (uint)uVar4 | param_1[0x52] & 0xffffff7fU;
    param_1[0x53] = (uint)((ulonglong)uVar4 >> 0x20) | param_1[0x53];
    iVar2 = FUN_0042b3f0(param_1,param_2,0);
  }
  return iVar2;
}


