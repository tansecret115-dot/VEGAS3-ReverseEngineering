/* Module: mp3plug.dll
   Function: FUN_5f6ebcb0
   Address: 5f6ebcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_5f6ebcb0(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *param_4 = *param_3;
  if ((((param_1 == 0) || (param_1 == 1)) || (param_1 == 3)) || ((param_1 == 4 || (param_1 == 6))))
  {
    param_4[1] = param_3[5];
    param_4[2] = param_3[1];
    param_4[9] = param_3[9];
    param_4[10] = param_3[10];
    param_4[0xb] = param_3[0xb];
    param_4[0xc] = param_3[0xc];
    param_4[0xd] = param_3[0xd];
    param_4[0xe] = param_3[0xe];
    param_4[0xf] = param_3[0xf];
    param_4[0x10] = param_3[0x10];
    param_4[0x11] = param_3[0x11];
    param_4[0x12] = param_3[0x12];
    param_4[0x13] = param_3[0x13];
    param_4[0x14] = param_3[0x14];
    param_4[0x15] = param_3[0x15];
    param_4[0x16] = param_3[0x16];
    param_4[0x17] = param_3[0x17];
    param_4[0x18] = param_3[0x18];
    param_4[0x19] = param_3[0x19];
    param_4[0x1a] = param_3[0x1a];
    param_4[0x1b] = param_3[0x1b];
    param_4[0x1c] = param_3[0x1c];
    param_4[0x1d] = param_3[0x1d];
    param_4[0x1e] = param_3[0x1e];
    param_1 = 0;
  }
  else if (param_1 == 2) {
    iVar3 = 0;
    iVar6 = 0;
    do {
      iVar5 = (int)param_3 + iVar6;
      param_4[iVar3 + 3] = param_3[iVar3 + 6];
      param_4[iVar3 + 6] = param_3[iVar3 + 2] * 3 + iVar3;
      param_1 = 0;
      do {
        iVar2 = param_1 + iVar3 * 4;
        param_1 = param_1 + 0xc;
        *(undefined4 *)((int)param_4 + iVar2 + 0x24) = *(undefined4 *)(iVar5 + 0x7c);
        iVar5 = iVar5 + 4;
      } while ((int)param_1 < 0x9c);
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 0x34;
    } while (iVar3 < 3);
  }
  else if (param_1 == 5) {
    iVar3 = 0;
    if (0 < (int)param_2) {
      if (0 < (int)(param_2 & 0xfffffffe)) {
        do {
          param_4[iVar3 + 9] = param_3[iVar3 + 9];
          param_4[iVar3 + 10] = param_3[iVar3 + 10];
          iVar3 = iVar3 + 2;
        } while (iVar3 < (int)(param_2 & 0xfffffffe));
      }
      for (; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
        param_4[iVar3 + 9] = param_3[iVar3 + 9];
      }
    }
    iVar6 = 0;
    param_4[1] = param_3[5];
    iVar3 = 0;
    param_4[2] = param_3[1];
    do {
      param_4[iVar6 + 3] = param_3[iVar6 + 6];
      iVar5 = (int)param_3 + iVar3 + 0xc;
      param_4[iVar6 + 6] = param_3[iVar6 + 2] * 3 + -9 + iVar6 + param_2;
      uVar4 = param_2;
      do {
        puVar1 = (undefined4 *)(iVar5 + 0x7c);
        param_1 = uVar4 + 3;
        iVar5 = iVar5 + 4;
        param_4[iVar6 + uVar4 + 9] = *puVar1;
        uVar4 = param_1;
      } while ((int)param_1 < (int)(param_2 + 0x1e));
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar6 < 3);
  }
  return param_1;
}


