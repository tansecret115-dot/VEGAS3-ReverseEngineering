/* Module: 14_43260.dll
   Function: FUN_100020e0
   Address: 100020e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_100020e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  while (0xfff < iVar1) {
    iVar2 = iVar2 + 2;
    iVar1 = param_1 >> ((byte)iVar2 & 0x1f);
  }
  return ((uint)*(ushort *)(&DAT_1000ec20 + iVar1 * 2) << ((byte)(iVar2 >> 1) & 0x1f)) << 2;
}


