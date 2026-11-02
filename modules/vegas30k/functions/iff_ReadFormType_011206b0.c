/* Module: vegas30k.dll
   Function: iff_ReadFormType
   Address: 011206b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_ReadFormType,12 */

int iff_ReadFormType(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
                    /* 0x1206b0  1375  _iff_ReadFormType@12 */
  iVar1 = iff_ReadChunkHdr(param_1,param_2);
  if (-1 < iVar1) {
    if (*param_2 != 0x464f524d) {
      return -0x7ffb1ff5;
    }
    iVar1 = iff_ReadDWORD(param_1,param_3);
  }
  return iVar1;
}


