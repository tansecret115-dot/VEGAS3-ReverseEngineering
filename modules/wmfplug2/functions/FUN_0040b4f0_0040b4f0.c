/* Module: wmfplug2.dll
   Function: FUN_0040b4f0
   Address: 0040b4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040b4f0(int param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  int *unaff_EBP;
  undefined4 *puVar9;
  int *piVar10;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar4 = FUN_0040c890(param_1);
    *(undefined4 **)(iVar3 + 0x2c) = puVar4;
  }
  if (*(int *)(iVar3 + 0x2c) == 0) {
    return -0x7ff8fff2;
  }
  iVar5 = FUN_0040c840(iVar3);
  *(undefined4 *)(*(int *)(iVar3 + 0x2c) + 4) = DAT_0048876c;
  puVar1 = *(undefined2 **)(*(int *)(iVar3 + 0x2c) + 0x424);
  uVar2 = *(uint *)(puVar1 + 2);
  if (uVar2 < 0x5623) {
    if (((uVar2 == 0x5622) || (uVar2 == 8000)) || ((uVar2 == 0x2b11 || (uVar2 == 16000))))
    goto LAB_0040b5ea;
  }
  else if (((uVar2 == 32000) || (uVar2 == 0xac44)) || (uVar2 == 48000)) goto LAB_0040b5ea;
  uVar8 = puVar1[1];
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  else if (2 < uVar8) {
    uVar8 = 2;
  }
  puVar1[1] = uVar8;
  puVar1[6] = uVar8 * 2;
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 2) = 0xac44;
  puVar1[7] = 0x10;
  puVar1[8] = 0;
  *(uint *)(puVar1 + 4) = (uint)(ushort)(uVar8 * 2) * 0xac44;
LAB_0040b5ea:
  if (*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x424) + 0x3e) == 0) {
    piVar10 = *(int **)(iVar3 + 0x1c);
    param_1 = 0;
    iVar6 = (**(code **)*piVar10)(piVar10,&DAT_0047acc0,&param_1);
    if (-1 < iVar6) {
      uVar7 = (**(code **)(*unaff_EBP + 0x20))(unaff_EBP,0x42,0x7c);
      *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x424) + 0x3e) = uVar7;
      iVar6 = *(int *)(*(int *)(iVar3 + 0x2c) + 0x424);
      if (*(int *)(iVar6 + 0x3e) != 0) {
        *(undefined4 *)(iVar6 + 0x3a) = 0x7c;
      }
      iVar6 = 0x1f;
      puVar4 = *(undefined4 **)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x424) + 0x3e);
      puVar9 = &DAT_004883d8;
      if (*(int *)(iVar3 + 0x38) == 0) {
        puVar9 = &DAT_00488038;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar4 = puVar4 + 1;
      }
      (**(code **)(*piVar10 + 8))(piVar10);
    }
  }
  return iVar5;
}


