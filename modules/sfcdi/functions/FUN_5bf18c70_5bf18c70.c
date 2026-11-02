/* Module: sfcdi.dll
   Function: FUN_5bf18c70
   Address: 5bf18c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18c70(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 8;
  puVar2 = (undefined4 *)(param_1 + 0x70);
  do {
    FUN_5bf189f0((int)(puVar2 + -9),param_2);
    *puVar2 = 0;
    puVar2 = puVar2 + 10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x68) = param_3;
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  return 0;
}


