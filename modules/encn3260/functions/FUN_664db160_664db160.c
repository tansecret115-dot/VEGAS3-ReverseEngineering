/* Module: encn3260.dll
   Function: FUN_664db160
   Address: 664db160
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_664db160(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  pbVar4 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
  pbVar1 = pbVar4 + iVar3;
  do {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + (uint)CONCAT11(pbVar4[2],pbVar4[3]) * 4 + 4;
    if (pbVar1 <= pbVar4) break;
  } while (bVar2 >> 6 == 2);
  return -(uint)(pbVar4 != pbVar1) & 0x80004005;
}


