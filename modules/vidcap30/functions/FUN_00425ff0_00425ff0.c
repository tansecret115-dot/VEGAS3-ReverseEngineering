/* Module: vidcap30.exe
   Function: FUN_00425ff0
   Address: 00425ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425ff0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if (*param_1 != 8) {
    return uVar2;
  }
  iVar1 = param_1[0x146];
  if (iVar1 == param_2) {
    return 1;
  }
  if (iVar1 == 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_00426087;
  }
  else {
    if (iVar1 == 1) {
      if (param_2 == 0) {
LAB_00426037:
        param_1[0x146] = param_2;
        param_1[0x52] = param_1[0x52] & 0xfff7ffff;
        param_1[0x53] = param_1[0x53];
        return uVar2;
      }
      bVar3 = param_2 == 2;
    }
    else {
      if (iVar1 != 2) goto LAB_00426087;
      if (param_2 == 0) goto LAB_00426037;
      bVar3 = param_2 == 1;
    }
    if (!bVar3) goto LAB_00426087;
  }
  param_1[0x52] = param_1[0x52] | 0x80000;
  param_1[0x53] = param_1[0x53];
LAB_00426087:
  param_1[0x146] = param_2;
  return uVar2;
}


