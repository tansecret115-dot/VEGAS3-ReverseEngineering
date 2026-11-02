/* Module: 50comupd.exe
   Function: FUN_01006397
   Address: 01006397
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006397(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  param_1[0xc] = param_1[0xc] + (uint)*(ushort *)(param_1[0x12] + 6);
  if ((*(short *)(param_1 + 0x2c) != 0) || (iVar2 = FUN_01006438(param_1), iVar2 != 0)) {
    *(short *)(puVar1 + 0x2c) = *(short *)(puVar1 + 0x2c) + -1;
    iVar2 = FUN_01006798(puVar1,0);
    if (iVar2 != 0) {
      if (*(short *)(puVar1[0x12] + 6) == 0) {
        iVar2 = FUN_01006438(puVar1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_01006798(puVar1,(uint)*(ushort *)(puVar1[0x12] + 4));
        if (iVar2 == 0) {
          return 0;
        }
        *(short *)(puVar1 + 0x2c) = *(short *)(puVar1 + 0x2c) + -1;
      }
      param_1 = (undefined4 *)
                CONCAT22((short)((uint)puVar1[0x12] >> 0x10),*(undefined2 *)(puVar1[0x12] + 6));
      iVar2 = FUN_01006cd4(puVar1,(ushort *)&param_1);
      if (iVar2 != 0) {
        if ((short)param_1 == *(short *)(puVar1[0x12] + 6)) {
          return 1;
        }
        FUN_01006dcb((undefined4 *)*puVar1,7,0);
      }
    }
  }
  return 0;
}


