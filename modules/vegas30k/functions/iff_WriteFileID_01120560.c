/* Module: vegas30k.dll
   Function: iff_WriteFileID
   Address: 01120560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_WriteFileID,12 */

uint iff_WriteFileID(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x120560  1381  _iff_WriteFileID@12 */
  local_8 = 0x464f524d;
  local_4 = param_3;
  iVar1 = iff_WriteChunk(param_1,&local_8);
  if (iVar1 < 0) {
    return 0x8004e009;
  }
  iVar1 = iff_WriteDWORD(param_1,param_2);
  return (-1 < iVar1) - 1 & 0x8004e009;
}


