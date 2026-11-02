/* Module: sfs4rw.dll
   Function: FUN_00405f60
   Address: 00405f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405f60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  DAT_004a82d5 = 0;
  DAT_004a812c = 0;
  if (((DAT_004a8134 != (int *)0x0) && (iVar1 = *DAT_004a8134, iVar1 != 0)) &&
     (iVar4 = 0, 0 < iVar1)) {
    piVar3 = (int *)DAT_004a8134[2];
    do {
      iVar2 = *piVar3;
      if ((param_1 == *(int *)(iVar2 + 0x20c)) && (param_2 == *(int *)(iVar2 + 0x210))) {
        lstrcpynA(&DAT_004a82d5,(LPCSTR)(iVar2 + 4),0x80);
        DAT_004a8354 = 0;
        DAT_004a812c = param_1;
        DAT_004a8130 = *(undefined4 *)(iVar2 + 0x210);
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


