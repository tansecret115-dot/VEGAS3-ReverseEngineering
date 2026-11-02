/* Module: sfcd.cdd
   Function: FUN_0041b420
   Address: 0041b420
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041b420(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_2) {
    pbVar2 = (byte *)(param_1 + 0x30);
    bVar1 = *pbVar2;
    if (3 < param_2) {
      iVar3 = param_2 - 3;
      do {
        if (((*pbVar2 & 0xdc) != (bVar1 & 0xdc)) || (0x74 < pbVar2[9])) {
          iVar4 = iVar4 + 1;
        }
        pbVar2 = pbVar2 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    return (bool)('\x01' - (0x18 < (uint)(iVar4 * 100) / (param_2 - 3)));
  }
  return true;
}


