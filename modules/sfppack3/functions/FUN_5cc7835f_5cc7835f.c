/* Module: sfppack3.dll
   Function: FUN_5cc7835f
   Address: 5cc7835f
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc7835f(ushort *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_2 = DAT_5cc8e978;
  param_2[1] = DAT_5cc8e97c;
  param_2[2] = DAT_5cc8e980;
  param_2[3] = DAT_5cc8e984;
  param_2[4] = (uint)*param_1;
  param_2[5] = 0x100000;
  param_2[6] = 0xaa000080;
  param_2[7] = 0x719b3800;
  param_2[0xb] = DAT_5cc8f018;
  param_2[0xc] = DAT_5cc8f01c;
  param_2[0xd] = DAT_5cc8f020;
  param_2[0xe] = DAT_5cc8f024;
  param_2[8] = 1;
  param_2[9] = 0;
  param_2[10] = (uint)param_1[6];
  param_2[0xf] = 0;
  if (param_3 != 0) {
    if (*param_1 == 1) {
      param_2[0x10] = 0x12;
    }
    else {
      param_2[0x10] = param_1[8] + 0x12;
    }
    puVar1 = CoTaskMemAlloc(param_2[0x10]);
    param_2[0x11] = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    if (*param_1 == 1) {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 2);
      puVar1[2] = *(undefined4 *)(param_1 + 4);
      puVar1[3] = *(undefined4 *)(param_1 + 6);
      *(undefined2 *)(param_2[0x11] + 0x10) = 0;
    }
    else {
      uVar3 = param_2[0x10];
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        puVar1 = puVar1 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar1 = (char)*param_1;
        param_1 = (ushort *)((int)param_1 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
  }
  return 0;
}


