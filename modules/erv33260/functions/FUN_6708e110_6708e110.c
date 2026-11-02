/* Module: erv33260.dll
   Function: FUN_6708e110
   Address: 6708e110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708e110(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_18 = 4;
  do {
    local_14 = 4;
    local_10 = param_4;
    iVar2 = param_1;
    iVar4 = param_2;
    do {
      local_8 = iVar4;
      local_c = iVar2;
      iVar3 = 0;
      param_4 = (int *)0x4;
      iVar2 = local_c;
      iVar4 = local_8;
      do {
        uVar1 = 0;
        do {
          iVar3 = iVar3 + ((uint)*(byte *)(uVar1 + iVar4) - (uint)*(byte *)(uVar1 + iVar2));
          uVar1 = uVar1 + 1;
        } while (uVar1 < 4);
        iVar4 = iVar4 + param_3;
        iVar2 = iVar2 + 0x10;
        param_4 = (int *)((int)param_4 + -1);
      } while (param_4 != (int *)0x0);
      param_4 = local_10 + 1;
      *local_10 = iVar3 * 0x2059 >> 0xf;
      local_14 = local_14 + -1;
      local_10 = param_4;
      iVar2 = local_c + 4;
      iVar4 = local_8 + 4;
    } while (local_14 != 0);
    param_2 = local_8 + -0xc + param_3 * 4;
    param_1 = local_c + 0x34;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  return;
}


