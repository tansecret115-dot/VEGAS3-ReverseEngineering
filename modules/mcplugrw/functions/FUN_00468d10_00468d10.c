/* Module: mcplugrw.dll
   Function: FUN_00468d10
   Address: 00468d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468d10(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = *(byte **)(param_1 + 100);
  bVar3 = 6 - (char)*(int *)(param_1 + 0x68);
  uVar1 = *(int *)(param_1 + 0x68) + 2;
  *pbVar2 = (char)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                         (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xe) << (bVar3 & 0x1f) |
            ~('\x03' << (bVar3 & 0x1f)) & *pbVar2;
  *(uint *)(param_1 + 0x68) = uVar1;
  if (7 < uVar1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte **)(param_1 + 100) = pbVar2 + 1;
  }
  return;
}


