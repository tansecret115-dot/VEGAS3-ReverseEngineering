/* Module: vegas30k.dll
   Function: FUN_0112a6a0
   Address: 0112a6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0112a6a0(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *_Dst;
  undefined4 *puVar7;
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar1;
  }
  if ((iVar5 < 0) || (iVar6 + -1 < iVar5)) {
    local_8 = 0;
  }
  else {
    local_8 = piVar1[1] * iVar5 + piVar1[2];
  }
  uVar4 = param_3 / 0x930;
  uVar3 = *(int *)(local_8 + 4) - *(int *)(param_1 + 0x40);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar4;
  if (uVar4 != 0) {
    _Dst = param_2 + 4;
    uVar3 = uVar4;
    do {
      puVar7 = param_2;
      for (iVar5 = 0x24c; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      memmove(_Dst,(void *)(local_8 + 0xc),8);
      param_2 = param_2 + 0x24c;
      _Dst = _Dst + 0x24c;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar2 = *(uint *)(local_8 + 4);
  *param_4 = uVar4 * 0x930;
  return uVar3 < uVar2;
}


