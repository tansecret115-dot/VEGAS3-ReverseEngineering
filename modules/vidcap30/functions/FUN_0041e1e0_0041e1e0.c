/* Module: vidcap30.exe
   Function: FUN_0041e1e0
   Address: 0041e1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e1e0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort local_7d0 [1000];
  
  iVar2 = _SfDoesMetricExist_12(DAT_005ba29c,param_1,3);
  if (iVar2 == 0) {
    uVar3 = _SfGetMetricBinary_16(DAT_005ba29c,param_1,local_7d0,2000);
    uVar3 = uVar3 / 10;
    if (uVar3 != 0) {
      puVar4 = local_7d0;
      do {
        uVar1 = *puVar4;
        uVar3 = uVar3 - 1;
        *(undefined4 *)(param_2 + 10 + (uint)uVar1 * 0x14) = *(undefined4 *)(puVar4 + 1);
        *(undefined4 *)(param_2 + 0xe + (uint)uVar1 * 0x14) = *(undefined4 *)(puVar4 + 3);
        puVar4 = puVar4 + 5;
      } while (uVar3 != 0);
    }
    return 1;
  }
  return 0;
}


