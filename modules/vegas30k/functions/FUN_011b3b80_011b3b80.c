/* Module: vegas30k.dll
   Function: FUN_011b3b80
   Address: 011b3b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b3b80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a0) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x1a0));
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  iVar1 = _SfList_CreateExZ_32((undefined4 *)(param_1 + 0x1a0),0x18,2,2,0x40000004,0,0,0);
  if (-1 < iVar1) {
    iVar1 = ftol();
    *(uint *)(param_1 + 0x1a4) = iVar1 * (uint)*(ushort *)(param_1 + 0x182);
    FUN_011b3a80(0);
  }
  return;
}


