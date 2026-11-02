/* Module: sftrans1.dll
   Function: FUN_0052ea70
   Address: 0052ea70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ea70(int *param_1)

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
    piVar2 = &DAT_0056b200;
    ppiVar3 = apiStack_1c;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = (int *)*piVar2 == *ppiVar3;
      piVar2 = piVar2 + 1;
      ppiVar3 = ppiVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      *puStack_4 = DAT_0056b200;
      puStack_4[1] = DAT_0056b204;
      puStack_4[2] = DAT_0056b208;
      puStack_4[3] = DAT_0056b20c;
      return;
    }
    *puStack_4 = DAT_00554aa0;
    puStack_4[1] = DAT_00554aa4;
    puStack_4[2] = DAT_00554aa8;
    puStack_4[3] = DAT_00554aac;
  }
  return;
}


