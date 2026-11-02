/* Module: rmme3260.dll
   Function: FUN_6624f9c0
   Address: 6624f9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624f9c0(uint *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != (uint *)0x0) && (0x1f < *param_1)) && (-1 < param_2)) &&
     (((param_2 < 0x15 && (((&DAT_6627c0d0)[param_2 * 0x10] & 2) != 0)) &&
      (iVar1 = (&DAT_6627c0d8)[param_2 * 4], iVar1 != 0)))) {
    param_1[2] = *(uint *)(iVar1 + 4);
    param_1[3] = *(uint *)(iVar1 + 8);
    param_1[4] = *(uint *)(iVar1 + 0xc);
    param_1[5] = *(uint *)(iVar1 + 0x10);
    param_1[6] = *(uint *)(iVar1 + 0x14);
    param_1[1] = (-(uint)(param_1[2] != 0) & 0xffffffc4) + 0x40;
    return 0;
  }
  return 0xffffffff;
}


