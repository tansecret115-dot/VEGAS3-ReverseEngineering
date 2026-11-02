/* Module: sfcdi.dll
   Function: FUN_5bf420c0
   Address: 5bf420c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf420c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5bf42030(param_1 + 0x5f,(uint)*(byte *)(param_1 + 0xe3),(ushort *)(param_2 + 0x5f),
                       (uint)*(byte *)(param_2 + 0xe3),0x40);
  if (iVar1 == 0) {
    FUN_5bf42030(param_1 + 0x61 + (uint)*(byte *)(param_1 + 0xe3) * 2,
                 (uint)*(byte *)(param_1 + 0xe4),
                 (ushort *)(param_2 + 0x61 + (uint)*(byte *)(param_2 + 0xe3) * 2),
                 (uint)*(byte *)(param_2 + 0xe4),0x40);
  }
  return;
}


