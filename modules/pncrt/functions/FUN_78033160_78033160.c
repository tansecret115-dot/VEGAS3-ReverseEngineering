/* Module: pncrt.dll
   Function: FUN_78033160
   Address: 78033160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78033160(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(uint *)(param_1 + 4) >> 0xb & 7) + param_2;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    iVar2 = param_1 + iVar1 * -10;
    *(int *)(iVar2 + 0x62) = *param_3;
    *(int *)(iVar2 + 0x66) = param_3[1];
    *(short *)(iVar2 + 0x6a) = (short)param_3[2];
    if ((*(ushort *)(param_3 + 2) & 0x7fff) != 0) {
      FUN_78033200((uint *)(param_1 + 8),(char)iVar1,
                   (-(uint)((*(ushort *)(param_3 + 2) & 0x7fff) != 0x7fff) & 0xfffffffe) + 2);
      return;
    }
    if ((*param_3 != 0) || (iVar2 = 1, param_3[1] != 0)) {
      iVar2 = 2;
    }
    FUN_78033200((uint *)(param_1 + 8),(char)iVar1,iVar2);
  }
  return;
}


