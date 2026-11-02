/* Module: mp3plug.dll
   Function: FUN_5f6e6740
   Address: 5f6e6740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6e6740(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  
  uVar7 = (uint)(param_1[0xe] >> 2) >> 0x1d;
  param_1[3] = param_1[0x10] + ((int)(param_1[0xe] + uVar7) >> 3);
  iVar3 = FUN_5f6e65e0(uVar7,param_1[7]);
  param_1[1] = iVar3;
  iVar4 = FUN_5f6e65a0(2,param_1[7]);
  iVar6 = param_1[0xc];
  iVar1 = param_1[1];
  if (iVar6 == 2) {
    piVar2 = (int *)param_1[10];
    iVar9 = param_1[7];
    unaff_EBX = 1;
    if (piVar2[1] != -1) {
      iVar6 = piVar2[1];
      do {
        if (iVar9 <= iVar6) break;
        iVar6 = piVar2[unaff_EBX + 1];
        unaff_EBX = unaff_EBX + 1;
      } while (iVar6 != -1);
    }
    if (unaff_EBX != 0xf) {
      if (iVar9 < *piVar2) {
        unaff_EBX = 0xf;
      }
      else {
        unaff_EBX = 0;
      }
    }
  }
  else if (iVar6 == 1) {
    unaff_EBX = FUN_5f6e6640(extraout_ECX,param_1[7]);
    iVar9 = *(int *)(param_1[10] + unaff_EBX * 4);
  }
  else {
    iVar9 = extraout_EDX;
    if (iVar6 == 0) {
      iVar6 = param_1[10];
      iVar9 = param_1[7];
      unaff_EBX = 1;
      if (*(int *)(iVar6 + 4) != -1) {
        iVar8 = *(int *)(iVar6 + 4);
        iVar5 = 1;
        while (unaff_EBX = iVar5, iVar8 < iVar9) {
          iVar8 = *(int *)(iVar6 + 4 + iVar5 * 4);
          unaff_EBX = iVar5 + 1;
          if ((iVar8 == -1) || (iVar9 <= iVar8)) break;
          unaff_EBX = iVar5 + 2;
          iVar8 = *(int *)(iVar6 + unaff_EBX * 4);
          iVar5 = unaff_EBX;
          if (iVar8 == -1) break;
        }
      }
      if ((unaff_EBX != 0xf) && (iVar9 != *(int *)(iVar6 + unaff_EBX * 4))) {
        unaff_EBX = 0xf;
      }
      iVar9 = *(int *)(iVar6 + unaff_EBX * 4);
    }
  }
  iVar6 = FUN_5f6e65a0(2,iVar9);
  *param_1 = iVar3 + iVar6;
  param_1[2] = unaff_EBX;
  iVar6 = ((iVar3 + iVar6) - (iVar4 + iVar1)) + param_1[0x10];
  param_1[0x10] = iVar6;
  iVar6 = param_1[6] + iVar6 * -8;
  param_1[0xf] = iVar6;
  if (iVar6 < 0) {
    param_1[0xf] = 0;
  }
  param_1[5] = param_1[0xf];
  param_1[4] = param_1[0xe];
  return (iVar4 + iVar1) * 8;
}


