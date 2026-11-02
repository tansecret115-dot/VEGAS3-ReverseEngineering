/* Module: vegas30k.dll
   Function: FUN_0103fd60
   Address: 0103fd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103fd60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x3c8);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[0x45] = *(undefined4 *)(*(int *)(param_1 + 0x3c8) + 0x114);
    _mbscpy((uchar *)(param_2 + 4),(uchar *)(*(int *)(param_1 + 0x3c8) + 0x10));
    param_2[0x46] = *(undefined4 *)(*(int *)(param_1 + 0x3c8) + 0x118);
    return 0;
  }
  *param_2 = DAT_011dab90;
  param_2[1] = DAT_011dab94;
  param_2[2] = DAT_011dab98;
  param_2[3] = DAT_011dab9c;
  return 0;
}


