/* Module: encn3260.dll
   Function: FUN_664d20b0
   Address: 664d20b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664d215a) */

void FUN_664d20b0(uint *param_1)

{
  uint uVar1;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  FUN_664d08d0(&local_1c);
  FUN_664d2010(local_1c,10000000,&local_c);
  FUN_664d2010(local_18 / 1000,10000,&local_14);
  if (((local_14 ^ local_c) & 0x80000000) == 0) {
    if ((local_14 & 0x80000000) == 0) {
      local_10 = local_8 + local_10;
    }
    else {
      local_10 = local_8 + 1 + local_10;
    }
  }
  else {
    local_10 = local_8 + local_10;
    if ((local_c + local_14 & 0x80000000) != 0) goto LAB_664d217a;
    local_10 = local_10 + 1;
  }
  if ((local_c + local_14 & 0x80000000) == 0) {
    *param_1 = local_c + local_14 + 0x13814000;
    param_1[1] = local_10 + 0x1b21dd2;
    return;
  }
LAB_664d217a:
  uVar1 = local_c + local_14 + 0x13814000;
  *param_1 = uVar1;
  param_1[1] = local_10 + 0x1b21dd2;
  if ((uVar1 & 0x80000000) == 0) {
    param_1[1] = local_10 + 0x1b21dd3;
  }
  return;
}


