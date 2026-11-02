/* Module: sftrans1.dll
   Function: FUN_0047fa40
   Address: 0047fa40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047fa40(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_3 == 0x649) {
    if (*(int *)(param_4 + 8) == 0x837) {
      iVar2 = *(int *)(param_1 + 0x30);
      *(undefined4 *)(iVar2 + 0x1b8) = 0;
      *(undefined4 *)(iVar2 + 0x1bc) = 0;
      iVar2 = *(int *)(param_1 + 0x30);
      *(undefined4 *)(iVar2 + 0x1c0) = 0;
      *(undefined4 *)(iVar2 + 0x1c4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a0) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a4) = 0;
      piVar1 = *(int **)(param_1 + 0x34);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
      }
    }
    else if (*(int *)(param_4 + 8) == 0x838) {
      hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x649);
      local_14c = 1;
      local_10 = 1;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_160 = 0;
      uStack_15c = 0x3fe00000;
      local_158 = 0;
      uStack_154 = 0x3fe00000;
      local_150 = 2;
      local_148 = 0xffffffff;
      local_144 = 0x3f800000;
      local_140 = 0x3f000000;
      local_13c = 0x3f000000;
      local_138 = 0;
      local_134 = 0;
      local_30 = 0;
      local_2c = 0xffffff;
      local_28 = 0;
      local_24 = 0x3f800000;
      local_14 = 0;
      local_c = 0;
      SendMessageA(hWnd,0x805,0,(LPARAM)&local_160);
      *(double *)(*(int *)(param_1 + 0x30) + 0x1b8) =
           ((double)CONCAT44(uStack_15c,local_160) - _DAT_00557838) *
           *(double *)(*(int *)(param_1 + 0x34) + 0x438);
      *(double *)(*(int *)(param_1 + 0x30) + 0x1c0) =
           ((double)CONCAT44(uStack_154,local_158) - _DAT_00557838) *
           *(double *)(*(int *)(param_1 + 0x34) + 0x440);
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a0) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a4) = 0;
      piVar1 = *(int **)(param_1 + 0x34);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
        return 0;
      }
    }
  }
  return 0;
}


