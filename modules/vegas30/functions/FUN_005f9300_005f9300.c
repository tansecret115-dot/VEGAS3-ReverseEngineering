/* Module: vegas30.exe
   Function: FUN_005f9300
   Address: 005f9300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f9300(int param_1,undefined4 *param_2,uchar *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_15c;
  undefined4 local_158 [4];
  uchar local_148 [260];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = local_158;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    local_158[0] = *param_2;
    local_158[1] = param_2[1];
    local_158[2] = param_2[2];
    local_158[3] = param_2[3];
  }
  if (param_3 != (uchar *)0x0) {
    _mbscpy(local_148,param_3);
  }
  local_44 = param_4;
  local_38 = param_6;
  local_34 = param_7;
  local_40 = param_5;
  local_30 = param_8;
  local_15c = 0;
  iVar1 = FUN_005f88f0(local_158,&local_15c);
  if ((iVar1 == 0) && (iVar1 = FUN_005f9290(local_15c,local_158), -1 < iVar1)) {
    if (*(int *)(param_1 + 0xc) == -1) {
      *(undefined4 *)(param_1 + 0xc) = local_28;
    }
    if ((_DAT_00610fd8 != (double)CONCAT44(uStack_1c,local_20)) &&
       ((_DAT_00610fd8 == *(double *)(param_1 + 0x18) ||
        ((*(int *)(param_1 + 0x18) == 0 && (*(int *)(param_1 + 0x1c) == 0x3ff00000)))))) {
      *(undefined4 *)(param_1 + 0x18) = local_20;
      *(undefined4 *)(param_1 + 0x1c) = uStack_1c;
    }
    if (_DAT_00610fd8 == *(double *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x3ff00000;
    }
    if (*(int *)(param_1 + 0x28) == -1) {
      *(undefined4 *)(param_1 + 0x28) = local_18;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = local_10;
    *(undefined4 *)(param_1 + 0x24) = local_c;
  }
  return iVar1;
}


