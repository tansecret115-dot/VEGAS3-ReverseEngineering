/* Module: sftrans1.dll
   Function: FUN_00550b00
   Address: 00550b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00550b00(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((*(int *)(param_1 + 0x95e) != param_2) || (*(int *)(param_1 + 0x960) != param_3)) {
    *(undefined4 *)(param_1 + 0x95e) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x960) = 0x7fffffff;
    iVar8 = 3;
    puVar6 = param_1;
    do {
      iVar10 = 3;
      puVar1 = puVar6;
      do {
        *puVar1 = 0;
        puVar1 = puVar1 + 3;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      puVar6 = puVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x95c) = param_7;
  *(int *)(param_1 + 0x952) = param_2;
  iVar10 = param_4 - param_2;
  *(int *)(param_1 + 0x954) = param_3;
  iVar2 = param_5 - param_3;
  *(int *)(param_1 + 0x95e) = param_4;
  uVar3 = (param_4 >> 0xe) - (param_2 >> 0xe);
  *(int *)(param_1 + 0x960) = param_5;
  uVar5 = (int)uVar3 >> 0x1f;
  uVar4 = (param_5 >> 0xe) - (param_3 >> 0xe);
  iVar8 = (uVar3 ^ uVar5) - uVar5;
  *(undefined4 *)(param_1 + 0x95a) = 0xffff;
  uVar3 = (int)uVar4 >> 0x1f;
  iVar11 = (uVar4 ^ uVar3) - uVar3;
  uVar3 = (((param_4 >> 7) << 4) >> 7) - (((param_2 >> 7) << 4) >> 7);
  uVar4 = (int)uVar3 >> 0x1f;
  iVar7 = (uVar3 ^ uVar4) - uVar4;
  uVar3 = (((param_5 >> 7) << 4) >> 7) - (((param_3 >> 7) << 4) >> 7);
  uVar4 = (int)uVar3 >> 0x1f;
  *(int *)(param_1 + 0x90e) = param_6;
  iVar9 = (uVar3 ^ uVar4) - uVar4;
  if (param_6 == 0) {
    if ((iVar8 == 0) && (iVar11 == 0)) {
LAB_00550c51:
      if ((param_2 == param_4) && (param_3 == param_5)) {
        *(undefined4 *)(param_1 + 0x90e) = 0;
        *(undefined4 *)(param_1 + 0x950) = 1;
        *(undefined4 *)(param_1 + 0x94c) = 0;
        *(undefined4 *)(param_1 + 0x94e) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x950) = 2;
        *(int *)(param_1 + 0x94c) = iVar10;
        *(int *)(param_1 + 0x94e) = iVar2;
        *(int *)(param_1 + 0x952) = param_2 - iVar10;
        *(int *)(param_1 + 0x954) = param_3 - iVar2;
      }
      *(int *)(param_1 + 0x910) =
           (int)(*(int *)(param_1 + 0x94c) + (*(int *)(param_1 + 0x94c) >> 0x1f & 0xfU)) >> 4;
      *(int *)(param_1 + 0x912) =
           (int)(*(int *)(param_1 + 0x94e) + (*(int *)(param_1 + 0x94e) >> 0x1f & 0xfU)) >> 4;
      return;
    }
    if (iVar11 < iVar8) {
      *(int *)(param_1 + 0x950) = iVar8 + 1;
      *(int *)(param_1 + 0x94c) = iVar10 / iVar8;
      *(int *)(param_1 + 0x910) = iVar10 / iVar8;
    }
    else {
      *(int *)(param_1 + 0x950) = iVar11 + 1;
      *(int *)(param_1 + 0x94c) = iVar10 / iVar11;
      *(int *)(param_1 + 0x910) = iVar10 / iVar11;
      iVar8 = iVar11;
    }
    iVar2 = iVar2 / iVar8;
    *(int *)(param_1 + 0x94e) = iVar2;
  }
  else {
    if ((iVar7 == 0) && (iVar9 == 0)) goto LAB_00550c51;
    if (iVar9 < iVar7) {
      *(int *)(param_1 + 0x950) = iVar7 + 1;
      *(int *)(param_1 + 0x910) = iVar10 / iVar7;
      iVar2 = iVar2 / iVar7;
    }
    else {
      *(int *)(param_1 + 0x950) = iVar9 + 1;
      *(int *)(param_1 + 0x910) = iVar10 / iVar9;
      iVar2 = iVar2 / iVar9;
    }
  }
  *(int *)(param_1 + 0x912) = iVar2;
  *(int *)(param_1 + 0x952) = param_2 - *(int *)(param_1 + 0x910);
  *(int *)(param_1 + 0x954) = param_3 - *(int *)(param_1 + 0x912);
  *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + 1;
  return;
}


