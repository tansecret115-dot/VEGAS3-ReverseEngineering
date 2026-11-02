/* Module: mp3rw.dll
   Function: FUN_00440060
   Address: 00440060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00440060(undefined4 *param_1,int param_2,int param_3,int param_4,uint *param_5,uint param_6,
            int *param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_0043fc90(param_2,&param_2,(uint *)0x0,0,&local_c);
  if ((uVar1 == 0) || (param_1 == (undefined4 *)0x0)) {
    return 0x80070057;
  }
  iVar2 = (uVar1 * param_3 + 0x1f >> 3 & 0x1ffffffc) * param_4;
  if ((int)param_6 < 0) {
    param_6 = 0;
  }
  if (param_2 != 3) {
    if (((param_5 == (uint *)0x0) && (param_6 == 0)) && (uVar1 < 9)) {
      param_6 = (1 << ((byte)uVar1 & 0x1f)) - 1;
    }
  }
  else {
    param_5 = (uint *)0x0;
    param_6 = 0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar2;
  }
  param_1[5] = iVar2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = 0x28;
  *(undefined2 *)(param_1 + 3) = 1;
  *(short *)((int)param_1 + 0xe) = (short)uVar1;
  param_1[4] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_6;
  param_1[9] = 0;
  if (param_2 == 3) {
    param_1[10] = local_c;
    param_1[0xb] = local_8;
    param_1[0xc] = local_4;
    return 0;
  }
  if ((param_5 != (uint *)0x0) && ((param_6 & 0x3fffffff) != 0)) {
    puVar3 = param_1 + 10;
    for (uVar1 = param_6 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_5;
      param_5 = param_5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)puVar3 = (char)*param_5;
      param_5 = (uint *)((int)param_5 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
  }
  return 0;
}


