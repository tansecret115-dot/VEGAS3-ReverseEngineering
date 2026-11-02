/* Module: sfpagepeel.dll
   Function: DllEnumObjects
   Address: 00401af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
DllEnumObjects(int param_1,undefined4 *param_2,undefined4 *param_3,LPSTR param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LPCSTR lpString2;
  int iVar3;
  int *piVar4;
  
                    /* 0x1af0  5  DllEnumObjects */
  if (param_1 < 0) {
    return 0x80070057;
  }
  iVar3 = 0;
  uVar2 = 1;
  piVar4 = DAT_0047d4b0;
  if (*DAT_0047d4b0 != 0) {
    while (iVar3 != param_1) {
      if (DAT_0047d4a0 == 100) {
        piVar4 = piVar4 + 7;
      }
      else {
        piVar4 = piVar4 + 9;
      }
      iVar3 = iVar3 + 1;
      if (*piVar4 == 0) {
        return uVar2;
      }
    }
    puVar1 = (undefined4 *)*piVar4;
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    param_3[3] = puVar1[3];
    if (param_4 != (LPSTR)0x0) {
      lpString2 = (LPCSTR)(*(code *)piVar4[6])();
      if (lpString2 == (LPCSTR)0x0) {
        *param_4 = '\0';
      }
      else {
        lstrcpynA(param_4,lpString2,param_5);
        param_4[param_5 + -1] = '\0';
      }
    }
    iVar3 = (*(code *)piVar4[7])();
    if (iVar3 != 0) {
      puVar1 = *(undefined4 **)(iVar3 + 4);
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      param_2[2] = puVar1[2];
      param_2[3] = puVar1[3];
      return 0;
    }
    *param_2 = DAT_004797a8;
    param_2[1] = DAT_004797ac;
    param_2[2] = DAT_004797b0;
    uVar2 = 0;
    param_2[3] = DAT_004797b4;
  }
  return uVar2;
}


