/* Module: mp3plug.dll
   Function: FUN_5f7192a0
   Address: 5f7192a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5f7192a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*param_2 < 0) || (*(int *)(param_1 + 0x62e8) == 0)) {
    *(undefined4 *)(param_1 + 0x62e8) = 1;
    iVar1 = *param_2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar3 = 0x15;
    iVar2 = (0x9a4ec86 - iVar1) % 1000000000;
    *(int *)(param_1 + 0x62e4) = iVar2;
    iVar1 = 1;
    do {
      iVar4 = iVar1;
      iVar1 = iVar2 - iVar4;
      *(int *)(param_1 + 0x6208 + (iVar3 % 0x37) * 4) = iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1000000000;
      }
      iVar3 = iVar3 + 0x15;
      iVar2 = iVar4;
    } while (iVar3 < 0x46f);
    iVar1 = -4;
    do {
      iVar2 = param_1 + 4;
      iVar3 = 0x1f;
      do {
        iVar4 = *(int *)(iVar2 + 0x6208) - *(int *)(param_1 + 0x620c + (iVar3 % 0x37) * 4);
        *(int *)(iVar2 + 0x6208) = iVar4;
        if (iVar4 < 0) {
          *(int *)(iVar2 + 0x6208) = iVar4 + 1000000000;
        }
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar2 <= param_1 + 0xdc);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
    *(undefined4 *)(param_1 + 0x6200) = 0;
    *(undefined4 *)(param_1 + 0x6204) = 0x1f;
    *param_2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x6200) + 1;
  *(int *)(param_1 + 0x6200) = iVar1;
  if (iVar1 == 0x38) {
    *(undefined4 *)(param_1 + 0x6200) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x6204) + 1;
  *(int *)(param_1 + 0x6204) = iVar1;
  if (iVar1 == 0x38) {
    *(undefined4 *)(param_1 + 0x6204) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x6208 + *(int *)(param_1 + 0x6200) * 4) -
          *(int *)(param_1 + 0x6208 + *(int *)(param_1 + 0x6204) * 4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1000000000;
  }
  *(int *)(param_1 + 0x6208 + *(int *)(param_1 + 0x6200) * 4) = iVar1;
  return (float10)iVar1 * (float10)_DAT_5f766390;
}


