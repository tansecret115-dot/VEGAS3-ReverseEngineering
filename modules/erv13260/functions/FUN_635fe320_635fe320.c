/* Module: erv13260.dll
   Function: FUN_635fe320
   Address: 635fe320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635fe320(byte *param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  local_8 = 0;
  iVar1 = *param_4;
  iVar2 = param_4[1];
  if (*param_1 != 0) {
    puVar5 = (undefined4 *)(param_2[*param_1 + 1] + iVar1);
    puVar6 = puVar5;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar4 = 0;
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined1 *)puVar5 = 0xf;
    param_2[*param_1 + 1] = iVar2;
    do {
      iVar2 = param_2[1] - *param_2;
      if (local_8 < iVar2) {
        local_8 = iVar2;
      }
      FUN_635fe3e0((byte *)((int)puVar5 + 1),(byte *)(iVar1 + 1 + *param_2),iVar2 + -1);
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
    } while (iVar4 <= (int)(uint)*param_1);
    *param_1 = *param_1 + 1;
    param_4[1] = param_4[1] + local_8;
    return 0;
  }
  return 0xff;
}


