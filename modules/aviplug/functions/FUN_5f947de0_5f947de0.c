/* Module: aviplug.dll
   Function: FUN_5f947de0
   Address: 5f947de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f947de0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int *param_6,int *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_retaddr;
  
  piVar2 = param_7;
  piVar1 = param_6;
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if ((int)param_2 < 0) {
    return -0x7ffbbf96;
  }
  iVar3 = (int)param_2 >> 0x1f;
  if ((param_1[0x2b] <= iVar3) && ((param_1[0x2b] < iVar3 || ((uint)param_1[0x2a] <= param_2)))) {
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x74))(param_1,param_2,iVar3,param_3,param_4,&param_6);
  if (iVar3 == 0) goto LAB_5f947ea8;
  if (iVar3 < -0x7ff8fff1) {
    if (iVar3 == -0x7ff8fff2) {
      iVar3 = -0x7ffbbf99;
      goto LAB_5f947ea8;
    }
    if (iVar3 < -0x7ffb1ff5) {
      if (iVar3 == -0x7ffb1ff6) goto LAB_5f947e9f;
      if (iVar3 == -0x7fff0001) {
        iVar3 = -0x7ffbbf98;
        goto LAB_5f947ea8;
      }
      if (iVar3 != -0x7ffb1ff8) goto LAB_5f947ea8;
    }
    else if (iVar3 != -0x7ffb1fc8) goto LAB_5f947ea8;
    iVar3 = -0x7ffbbf93;
  }
  else {
    if (iVar3 == -0x7ff8ffa9) {
      iVar3 = -0x7ffbbf96;
      goto LAB_5f947ea8;
    }
    if ((iVar3 != 1) && (iVar3 != 0x4e00c)) goto LAB_5f947ea8;
LAB_5f947e9f:
    iVar3 = 0;
  }
LAB_5f947ea8:
  if (piVar2 != (int *)0x0) {
    *piVar2 = unaff_retaddr;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = (uint)*(ushort *)(param_1[0x68] + 0xc) * unaff_retaddr;
  }
  return iVar3;
}


