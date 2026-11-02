/* Module: rmme3260.dll
   Function: FUN_66212ae0
   Address: 66212ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66212ae0(int param_1,undefined1 *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  iVar1 = 0;
  uVar4 = *(int *)(param_1 + 0x52) + 0xc;
  local_8 = 0;
  if (param_3 < uVar4) {
    iVar1 = -0x7ffbfff3;
    local_8 = -0x7ffbfff3;
  }
  if (-1 < iVar1) {
    *(short *)(param_1 + 0x5c) = (short)uVar4;
    *param_2 = *(undefined1 *)(param_1 + 0x5b);
    param_2[1] = *(undefined1 *)(param_1 + 0x5a);
    if (*(short *)(param_1 + 0x5a) == 0) {
      param_2[2] = *(undefined1 *)(param_1 + 0x5d);
      param_2[3] = *(undefined1 *)(param_1 + 0x5c);
      param_2[4] = *(undefined1 *)(param_1 + 0x5f);
      param_2[5] = *(undefined1 *)(param_1 + 0x5e);
      param_2[6] = (char)((uint)*(undefined4 *)(param_1 + 0x60) >> 0x18);
      param_2[7] = (char)((uint)*(undefined4 *)(param_1 + 0x60) >> 0x10);
      param_2[8] = (char)((uint)*(undefined4 *)(param_1 + 0x60) >> 8);
      param_2[9] = *(undefined1 *)(param_1 + 0x60);
      param_2[10] = *(undefined1 *)(param_1 + 0x65);
      param_2[0xb] = *(undefined1 *)(param_1 + 100);
    }
    uVar3 = *(uint *)(param_1 + 0x52);
    puVar5 = *(undefined4 **)(param_1 + 0x4e);
    puVar6 = (undefined4 *)(param_2 + 0xc);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *param_4 = uVar4;
    return local_8;
  }
  *param_4 = 0;
  return iVar1;
}


