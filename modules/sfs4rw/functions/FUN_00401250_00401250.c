/* Module: sfs4rw.dll
   Function: FUN_00401250
   Address: 00401250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00401250(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 1;
  *param_1 = &PTR_LAB_004907dc;
  InterlockedIncrement((LONG *)&DAT_004a8120);
  param_1[2] = 0;
  DAT_004a8128 = 0;
  param_1[0x51] = 0;
  DAT_004a8134 = 0;
  param_1[0x15b] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  _mbscpy((uchar *)((int)param_1 + 0x3e),(uchar *)"DEFAULT");
  param_1[0x15f] = 3;
  param_1[0x161] = 3;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 5;
  param_1[0x160] = 5;
  param_1[0x162] = 0xffffffff;
  param_1[0x163] = 0xffffffff;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x164] = 0;
  param_1[0x156] = 0x12d;
  param_1[0x15a] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  DAT_004a84e0 = calloc(1,0x448);
  if (DAT_004a84e0 != (undefined4 *)0x0) {
    puVar2 = DAT_004a84e0;
    for (iVar1 = 0x112; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return param_1;
}


