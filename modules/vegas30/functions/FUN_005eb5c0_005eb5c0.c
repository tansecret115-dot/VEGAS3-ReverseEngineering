/* Module: vegas30.exe
   Function: FUN_005eb5c0
   Address: 005eb5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005eb5c0(int param_1,ushort param_2,uint param_3,int param_4,ushort *param_5,
                 ushort *param_6)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar3 = (uint)param_2;
  puVar1 = (ushort *)
           (param_4 +
           ((int)((((uint)*(byte *)(uVar3 + param_1) << 4 ^ (uint)*(byte *)(uVar3 + 1 + param_1)) <<
                   4 ^ (uint)*(byte *)(uVar3 + 2 + param_1)) * 0x9e5f) >> 4 & 0xfffU) * 2);
  *param_6 = *puVar1;
  *puVar1 = param_2;
  uVar4 = *param_6;
  uVar2 = CONCAT22((short)((uint)puVar1 >> 0x10),uVar4);
  if ((uVar4 != 0xffff) && (uVar2 = (uint)(short)uVar4, (int)(uVar3 - uVar2) < 0x1000)) {
    *param_5 = 0;
    while( true ) {
      uVar4 = *param_5;
      uVar2 = uVar4 + uVar3;
      if ((*(char *)(uVar2 + param_1) != *(char *)((int)(short)*param_6 + (uint)uVar4 + param_1)) ||
         ((param_3 & 0xffff) <= uVar2)) break;
      uVar4 = uVar4 + 1;
      *param_5 = uVar4;
      if (0x11 < uVar4) {
        return (uint)(2 < uVar4);
      }
    }
    return (uint)(2 < *param_5);
  }
  return uVar2 & 0xffff0000;
}


