/* Module: mp3plug.dll
   Function: FUN_5f6f6f30
   Address: 5f6f6f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6f6f30(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int aiStack_2c [4];
  int local_1c [3];
  
  local_1c[0] = param_2;
  FUN_5f6d5b90((undefined4 *)(&DAT_5f741e28 + (uint)(param_1 == 2) * 0x10),param_3,4);
  iVar7 = -4;
  iVar8 = 0;
  do {
    iVar6 = -0x80000000;
    piVar3 = (int *)(local_1c[0] + iVar8 * 4);
    if (param_3[iVar7 + 4] < 1) {
LAB_5f6f70d0:
      iVar6 = 0;
    }
    else {
      piVar1 = piVar3 + param_3[iVar7 + 4];
      do {
        iVar2 = *piVar3;
        if ((iVar2 != -9999) && (iVar6 < iVar2)) {
          iVar6 = iVar2;
        }
        piVar3 = piVar3 + 1;
      } while ((int)piVar3 < (int)piVar1);
      if (iVar6 == -0x80000000) goto LAB_5f6f70d0;
    }
    local_1c[iVar7] = (&DAT_5f741c10)[iVar6];
    iVar8 = iVar8 + param_3[iVar7 + 4];
    iVar7 = iVar7 + 1;
    if (iVar7 == 0) {
      local_1c[1] = 0x7fffffff;
      iVar7 = 0;
      local_1c[0] = -1;
      do {
        uVar4 = 0;
        do {
          if ((int)(&DAT_5f741b90)[iVar7 * 2 + ((int)(uVar4 + (0x7fffffff < uVar4)) >> 1)] <
              aiStack_2c[uVar4]) goto LAB_5f6f704a;
          uVar5 = uVar4 + 1;
          if (3 < (int)uVar5) break;
          if ((int)(&DAT_5f741b90)[iVar7 * 2 + ((int)(uVar5 + (0x7fffffff < uVar5)) >> 1)] <
              aiStack_2c[uVar5]) goto LAB_5f6f704a;
          uVar4 = uVar4 + 2;
          uVar5 = uVar4;
        } while ((int)uVar4 < 4);
        if ((uVar5 == 4) &&
           (iVar8 = *param_3 * *param_4 + param_3[1] * param_4[1] + param_3[2] * param_4[2] +
                    param_3[3] * param_4[3], iVar8 < local_1c[1])) {
          local_1c[0] = iVar7;
          local_1c[1] = iVar8;
        }
LAB_5f6f704a:
        iVar7 = iVar7 + 1;
        if (0xf < iVar7) {
          iVar7 = (&DAT_5f741b90)[local_1c[0] * 2];
          *param_4 = iVar7;
          param_4[1] = iVar7;
          iVar7 = (&DAT_5f741b94)[local_1c[0] * 2];
          param_4[3] = iVar7;
          param_4[2] = iVar7;
          return;
        }
      } while( true );
    }
  } while( true );
}


