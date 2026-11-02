/* Module: sdpp3260.dll
   Function: FUN_10001970
   Address: 10001970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10001970(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_3 = *(undefined4 *)(&DAT_10008754 + param_2 * 0x16);
  *param_4 = *(undefined4 *)(&DAT_10008758 + param_2 * 0x16);
  return 0;
}


