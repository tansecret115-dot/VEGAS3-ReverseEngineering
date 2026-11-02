/* Module: sftrans1.dll
   Function: FUN_00544750
   Address: 00544750
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00544750(HDC param_1,undefined2 *param_2,int param_3)

{
  DWORD DVar1;
  
  DVar1 = GetFontData(param_1,DAT_005771e0,param_3 * 8 + 4,param_2,8);
  *param_2 = CONCAT11(*(undefined1 *)param_2,*(undefined1 *)((int)param_2 + 1));
  param_2[1] = CONCAT11(*(undefined1 *)(param_2 + 1),*(undefined1 *)((int)param_2 + 3));
  *(uint *)(param_2 + 2) =
       (uint)CONCAT11(*(undefined1 *)(param_2 + 2),*(undefined1 *)((int)param_2 + 5)) << 0x10 |
       *(uint *)(param_2 + 2) >> 0x18 | (*(uint *)(param_2 + 2) >> 0x10 & 0xff) << 8;
  return DVar1 == 8;
}


