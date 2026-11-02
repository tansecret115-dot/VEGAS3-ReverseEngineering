/* Module: mp3rw.dll
   Function: FUN_00485a70
   Address: 00485a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00485a70(int *param_1,short *param_2,uint param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (int)*param_2 - param_3;
  uVar1 = uVar6;
  if ((int)uVar6 < 0) {
    uVar1 = -uVar6;
    uVar6 = uVar6 - 1;
  }
  iVar5 = 0;
  for (; uVar1 != 0; uVar1 = (int)uVar1 >> 1) {
    iVar5 = iVar5 + 1;
  }
  uVar2 = FUN_00485bc0(param_1,param_4[iVar5],(int)*(char *)(iVar5 + 0x400 + (int)param_4));
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if ((iVar5 != 0) && (uVar2 = FUN_00485bc0(param_1,uVar6,iVar5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  iVar5 = 0;
  param_4 = &DAT_004a187c;
  do {
    param_3 = (uint)param_2[*param_4];
    if (param_3 == 0) {
      iVar5 = iVar5 + 1;
    }
    else {
      for (; 0xf < iVar5; iVar5 = iVar5 + -0x10) {
        piVar3 = (int *)FUN_00485bc0(param_1,param_5[0xf0],(int)(char)param_5[0x13c]);
        if ((char)piVar3 == '\0') goto LAB_00485ba3;
      }
      uVar1 = param_3;
      if ((int)param_3 < 0) {
        uVar1 = -param_3;
        param_3 = param_3 - 1;
      }
      iVar4 = 1;
      while (uVar1 = (int)uVar1 >> 1, uVar1 != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 * 0x10 + iVar4;
      piVar3 = (int *)FUN_00485bc0(param_1,param_5[iVar5],
                                   (int)*(char *)(iVar5 + 0x400 + (int)param_5));
      if (((char)piVar3 == '\0') ||
         (piVar3 = (int *)FUN_00485bc0(param_1,param_3,iVar4), (char)piVar3 == '\0'))
      goto LAB_00485ba3;
      iVar5 = 0;
    }
    piVar3 = param_4 + 1;
    param_4 = piVar3;
  } while ((int)piVar3 < 0x4a1978);
  if ((iVar5 < 1) ||
     (piVar3 = (int *)FUN_00485bc0(param_1,*param_5,(int)(char)param_5[0x100]), (char)piVar3 != '\0'
     )) {
    return CONCAT31((int3)((uint)piVar3 >> 8),1);
  }
LAB_00485ba3:
  return (uint)piVar3 & 0xffffff00;
}


