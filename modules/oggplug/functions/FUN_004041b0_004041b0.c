/* Module: oggplug.dll
   Function: FUN_004041b0
   Address: 004041b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004041b0(int *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int *piVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int *unaff_EDI;
  
  piVar3 = param_1;
  if (param_1[6] == 0) {
    puVar5 = FUN_00404b60((int)param_1);
    piVar3[6] = (int)puVar5;
  }
  iVar6 = param_2;
  if (piVar3[6] == 0) {
    return -0x7ff8fff2;
  }
  param_2 = FUN_00404ac0((int)piVar3);
  if (param_2 < 0) {
    return param_2;
  }
  psVar2 = *(short **)(iVar6 + 0x424);
  iVar6 = *(int *)(psVar2 + 2);
  if ((iVar6 != 0xac44) && (iVar6 != 48000)) {
    iVar6 = ((iVar6 < 0xbb81) - 1 & 0xf3c) + 0xac44;
  }
  sVar8 = *psVar2;
  if ((sVar8 != 1) && (sVar8 != 3)) {
    sVar8 = 1;
  }
  uVar4 = psVar2[7];
  switch(uVar4) {
  case 8:
  case 0x10:
  case 0x18:
    if (sVar8 == 1) goto LAB_00404277;
    break;
  default:
    uVar4 = 0x10;
    break;
  case 0x20:
  case 0x40:
    if (sVar8 != 3) {
      sVar8 = 3;
    }
    goto LAB_00404277;
  }
  sVar8 = 1;
LAB_00404277:
  sVar1 = psVar2[1];
  psVar2 = *(short **)(piVar3[6] + 0x424);
  psVar2[7] = uVar4;
  *psVar2 = sVar8;
  uVar4 = (uVar4 >> 3) * sVar1;
  psVar2[6] = uVar4;
  psVar2[1] = sVar1;
  *(int *)(psVar2 + 2) = iVar6;
  *(uint *)(psVar2 + 4) = (uint)uVar4 * iVar6;
  psVar2[8] = 0;
  *(undefined4 *)(piVar3[6] + 4) = DAT_004500bc;
  if (*(int *)(*(int *)(piVar3[6] + 0x424) + 0x3e) == 0) {
    param_1 = (int *)0x0;
    iVar6 = (*(code *)**(undefined4 **)piVar3[8])((undefined4 *)piVar3[8],&DAT_00446be0,&param_1);
    if (-1 < iVar6) {
      uVar7 = (**(code **)(*param_1 + 0x20))(param_1,0x42,0xc);
      *(undefined4 *)(*(int *)(piVar3[6] + 0x424) + 0x3e) = uVar7;
      if (*(int *)(*(int *)(piVar3[6] + 0x424) + 0x3e) != 0) {
        *(undefined4 *)(*(int *)(piVar3[6] + 0x424) + 0x3a) = 0xc;
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  return param_2;
}


