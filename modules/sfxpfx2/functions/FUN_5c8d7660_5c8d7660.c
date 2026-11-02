/* Module: sfxpfx2.dll
   Function: FUN_5c8d7660
   Address: 5c8d7660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8d7660(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined2 local_24 [2];
  undefined2 local_20 [2];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_1c._0_2_ = local_1c._1_2_;
  iVar1 = sscanf(param_1,"%08x-%04x-%04x-%04x-%02x%02x%02x%02x%02x%02x",&local_28,local_24,local_20,
                 local_1c,local_18,local_14,local_10,local_c,local_8,local_4);
  if (iVar1 != 10) {
    return 0x80004005;
  }
  *param_2 = local_28;
  *(undefined2 *)(param_2 + 1) = local_24[0];
  *(undefined2 *)((int)param_2 + 6) = local_20[0];
  *(char *)((int)param_2 + 9) = (char)local_1c._0_2_;
  *(char *)(param_2 + 2) = SUB21(local_1c._0_2_,1);
  *(undefined1 *)((int)param_2 + 10) = local_18[0];
  *(undefined1 *)((int)param_2 + 0xb) = local_14[0];
  *(undefined1 *)(param_2 + 3) = local_10[0];
  *(undefined1 *)((int)param_2 + 0xd) = local_c[0];
  *(undefined1 *)((int)param_2 + 0xe) = local_8[0];
  *(undefined1 *)((int)param_2 + 0xf) = local_4[0];
  return 0;
}


