/* Module: erv13260.dll
   Function: FUN_635ffe60
   Address: 635ffe60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635ffe60(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar6 = (undefined4 *)&DAT_63617828;
  iVar1 = param_3 * 3 + -3;
  if (param_4 != 0) {
    puVar6 = &DAT_63606e28;
  }
  iVar5 = 0;
  uVar4 = *param_2;
  uVar7 = 0;
  do {
    if ((int)puVar6[iVar1 * 0x80 + uVar7] < (int)uVar4) {
      if ((uint)puVar6[iVar1 * 0x80 + uVar7 + 0x80] < uVar4) {
        puVar2 = param_2 + iVar5;
        iVar5 = (&DAT_63606a6c)[uVar7];
        uVar4 = param_2[iVar5];
        *(int *)(param_1 + -4 + (uVar7 + 1) * 4) =
             (int)ROUND((float)(int)*puVar2 * (float)puVar6[iVar1 * 0x80 + uVar7 + 0x100] +
                        (float)puVar6[iVar1 * 0x80 + uVar7 + 0x140]);
      }
      else {
        *(undefined4 *)(param_1 + uVar7 * 4) = *(undefined4 *)(&DAT_63606d28 + uVar7 * 4);
        iVar5 = (&DAT_63606a6c)[uVar7];
        uVar4 = param_2[iVar5];
      }
    }
    else if ((int)puVar6[iVar1 * 0x80 + uVar7 + 0x40] < (int)uVar4) {
      *(undefined4 *)(param_1 + uVar7 * 4) = 0;
      iVar5 = (&DAT_63606a6c)[uVar7];
      uVar4 = param_2[iVar5];
    }
    else if ((int)uVar4 < (int)puVar6[iVar1 * 0x80 + uVar7 + 0xc0]) {
      puVar2 = param_2 + iVar5;
      iVar5 = (&DAT_63606a6c)[uVar7];
      uVar4 = param_2[iVar5];
      *(int *)(param_1 + -4 + (uVar7 + 1) * 4) =
           (int)ROUND((float)(int)*puVar2 * (float)puVar6[iVar1 * 0x80 + uVar7 + 0x100] -
                      (float)puVar6[iVar1 * 0x80 + uVar7 + 0x140]);
    }
    else {
      *(undefined4 *)(param_1 + uVar7 * 4) = (&DAT_63623228)[uVar7];
      iVar5 = (&DAT_63606a6c)[uVar7];
      uVar4 = param_2[iVar5];
    }
    bVar3 = uVar7 < 0x3f;
    uVar7 = uVar7 + 1;
  } while (bVar3);
  return;
}


