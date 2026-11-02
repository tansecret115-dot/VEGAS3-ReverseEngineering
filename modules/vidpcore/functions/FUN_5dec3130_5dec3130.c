/* Module: vidpcore.dll
   Function: FUN_5dec3130
   Address: 5dec3130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dec3130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = param_2;
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar11 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar10 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 100);
  iVar6 = FUN_5dec9ca0(*(undefined4 *)(param_1 + 0x44));
  iVar7 = FUN_5dec9ca0(*(undefined4 *)(param_1 + 0x14));
  if ((((iVar6 == 0x1d) || (iVar6 == 0x1c)) && (iVar7 == 0x20)) &&
     (((iVar4 == *(int *)(param_1 + 0x34) && (iVar3 == *(int *)(param_1 + 0x38))) && (param_2 != 0))
     )) {
    param_1 = iVar11;
    param_2 = iVar3;
    if (0 < iVar3) {
      do {
        if (0 < iVar4) {
          pbVar8 = (byte *)(param_1 + 2);
          puVar9 = (undefined4 *)(iVar10 + 8);
          iVar11 = iVar4;
          do {
            puVar9[-2] = *(undefined4 *)(iVar5 + (uint)pbVar8[-2] * 4);
            puVar9[-1] = *(undefined4 *)(iVar5 + (uint)pbVar8[-1] * 4);
            *puVar9 = *(undefined4 *)(iVar5 + (uint)*pbVar8 * 4);
            iVar11 = iVar11 + -1;
            puVar9[1] = *(undefined4 *)(iVar5 + (uint)pbVar8[1] * 4);
            pbVar8 = pbVar8 + 4;
            puVar9 = puVar9 + 4;
          } while (iVar11 != 0);
        }
        iVar10 = iVar10 + iVar2;
        param_2 = param_2 + -1;
        param_1 = param_1 + iVar1;
      } while (param_2 != 0);
    }
    return 0;
  }
  return 0x80070057;
}


