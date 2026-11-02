/* Module: sftrans1.dll
   Function: FUN_0053b140
   Address: 0053b140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053b140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  byte bVar1;
  LPCSTR lpString1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 1;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if (((undefined4 *)*param_1 == (undefined4 *)0x0) || ((undefined4 *)*param_2 == (undefined4 *)0x0)
     ) {
    lpString1 = *(LPCSTR *)param_1[1];
    if ((lpString1 == (LPCSTR)0x0) || (*(LPCSTR *)param_2[1] == (LPCSTR)0x0)) {
      iVar4 = wcscmp((wchar_t *)((undefined4 *)param_1[1])[1],*(wchar_t **)(param_2[1] + 4));
      if (iVar4 != 0) {
        return;
      }
    }
    else {
      iVar4 = lstrcmpA(lpString1,*(LPCSTR *)param_2[1]);
      if (iVar4 == 0) {
        return;
      }
    }
    iVar4 = lstrcmpA((LPCSTR)(param_1[1] + 8),(LPCSTR)(param_2[1] + 8));
    if (iVar4 != 0) {
      return;
    }
    iVar4 = param_1[1];
    iVar2 = param_2[1];
    if (*(int *)(iVar4 + 0x28) != *(int *)(iVar2 + 0x28)) {
      return;
    }
    if (*(int *)(iVar4 + 0x2c) != *(int *)(iVar2 + 0x2c)) {
      return;
    }
    if (*(int *)(iVar4 + 0x30) != *(int *)(iVar2 + 0x30)) {
      return;
    }
  }
  else {
    pbVar5 = *(byte **)*param_2;
    pbVar3 = *(byte **)*param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0053b1af:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0053b1b4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0053b1af;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0053b1b4:
    if (iVar4 != 0) {
      return;
    }
    *param_5 = 0;
  }
  if ((((((param_1[0x32] == param_2[0x32]) && (*(double *)(param_1 + 4) == *(double *)(param_2 + 4))
         ) && (*(double *)(param_1 + 6) == *(double *)(param_2 + 6))) &&
       ((*(double *)(param_1 + 8) == *(double *)(param_2 + 8) &&
        (*(double *)(param_1 + 10) == *(double *)(param_2 + 10))))) &&
      ((*(double *)(param_1 + 0xc) == *(double *)(param_2 + 0xc) &&
       ((param_1[0xe] == param_2[0xe] && (param_1[0xf] == param_2[0xf])))))) &&
     (param_1[0x16] == param_2[0x16])) {
    *param_3 = 1;
  }
  if (*(double *)(param_1 + 10) == *(double *)(param_2 + 10)) {
    *param_4 = 1;
  }
  return;
}


