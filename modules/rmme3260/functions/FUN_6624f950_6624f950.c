/* Module: rmme3260.dll
   Function: FUN_6624f950
   Address: 6624f950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624f950(int param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_1 == 0) {
    return 0xb;
  }
  if ((((-1 < param_2) && (param_2 < 0x15)) && (((&DAT_6627c0d0)[param_2 * 0x10] & 1) != 0)) &&
     (pbVar1 = (&PTR_DAT_6627c0d4)[param_2 * 4], pbVar1 != (byte *)0x0)) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(pbVar1 + 4);
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(pbVar1 + 8);
    if ((*pbVar1 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(pbVar1 + 0xc);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(pbVar1 + 0x10);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(pbVar1 + 0x14);
    }
    return 0;
  }
  return 0xffffffff;
}


