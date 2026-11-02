/* Module: vidpcore.dll
   Function: FUN_5df08950
   Address: 5df08950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df08950(int *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  bool bVar4;
  int *apiStack_1c [3];
  undefined1 local_10 [12];
  undefined4 *puStack_4;
  
  apiStack_1c[1] = (int *)local_10;
  apiStack_1c[2] = (int *)&param_1;
  apiStack_1c[0] = param_1;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (-1 < iVar1) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_5df34890;
    ppiVar3 = apiStack_1c;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = (int *)*piVar2 == *ppiVar3;
      piVar2 = piVar2 + 1;
      ppiVar3 = ppiVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      *puStack_4 = DAT_5df34890;
      puStack_4[1] = DAT_5df34894;
      puStack_4[2] = DAT_5df34898;
      puStack_4[3] = DAT_5df3489c;
      return;
    }
    *puStack_4 = DAT_5df17980;
    puStack_4[1] = DAT_5df17984;
    puStack_4[2] = DAT_5df17988;
    puStack_4[3] = DAT_5df1798c;
  }
  return;
}


