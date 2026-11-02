/* Module: sfpagepeel.dll
   Function: FUN_00454c20
   Address: 00454c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454c20(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = *(byte **)(param_1 + 100);
  bVar3 = 4 - (char)*(int *)(param_1 + 0x68);
  uVar1 = *(int *)(param_1 + 0x68) + 4;
  *pbVar2 = (char)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                         (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xc) << (bVar3 & 0x1f) |
            ~('\x0f' << (bVar3 & 0x1f)) & *pbVar2;
  *(uint *)(param_1 + 0x68) = uVar1;
  if (7 < uVar1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte **)(param_1 + 100) = pbVar2 + 1;
  }
  return;
}


