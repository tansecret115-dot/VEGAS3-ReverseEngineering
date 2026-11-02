/* Module: vegas30k.dll
   Function: FUN_011222e0
   Address: 011222e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011222e0(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 8) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    *param_4 = (uint)*(ushort *)(param_2 + 0x14);
    return 8;
  }
  return 0;
}


