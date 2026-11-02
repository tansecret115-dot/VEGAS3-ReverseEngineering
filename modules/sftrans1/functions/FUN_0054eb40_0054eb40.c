/* Module: sftrans1.dll
   Function: FUN_0054eb40
   Address: 0054eb40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0054eb40(int param_1,double param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_74 [4];
  undefined4 local_70 [4];
  undefined1 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    if (*(double *)(param_1 + 200) <= param_2) {
      if (*(double *)(param_1 + 0xd0) < param_2) {
        param_2 = *(double *)(param_1 + 0xd0);
      }
    }
    else {
      param_2 = *(double *)(param_1 + 200);
    }
    if (*(double *)(param_1 + 0xd8) <= (double)CONCAT44(param_4,param_3)) {
      if (*(double *)(param_1 + 0xe0) < (double)CONCAT44(param_4,param_3)) {
        param_3 = *(undefined4 *)(param_1 + 0xe0);
        param_4 = *(undefined4 *)(param_1 + 0xe4);
      }
    }
    else {
      param_3 = *(undefined4 *)(param_1 + 0xd8);
      param_4 = *(undefined4 *)(param_1 + 0xdc);
    }
  }
  iVar4 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  iVar2 = *piVar1;
  if (0 < iVar2) {
    puVar3 = (undefined4 *)piVar1[2];
    do {
      if (param_2 == *(double *)*puVar3) {
        param_2 = param_2 + *(double *)(param_1 + 0x110);
      }
      else if (param_2 < *(double *)*puVar3) break;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_0054de90(0);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_37 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_f = 0;
  puVar3 = local_70;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_5e = 1;
  local_5d = 1;
  local_5c = 1;
  local_5b = 1;
  local_60 = 1;
  local_70[0] = param_2._0_4_;
  local_70[1] = param_2._4_4_;
  local_70[2] = param_3;
  local_70[3] = param_4;
  local_30 = 0x9999999a;
  local_2c = 0x3fc99999;
  local_58 = 0x9999999a;
  local_54 = 0x3fc99999;
  local_28 = 0;
  local_24 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_004dd410(*(undefined4 *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8),local_70,
               0x68,iVar4,local_74);
  FUN_0054da10(iVar4);
  FUN_0054ddf0();
  *(int *)(param_1 + 0x158) = iVar4;
  *(int *)(param_1 + 0x15c) = iVar4;
  FUN_0054f0c0();
  return iVar4;
}


