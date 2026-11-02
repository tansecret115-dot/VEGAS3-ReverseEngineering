/* Module: rnco3260.dll
   Function: FUN_636f6330
   Address: 636f6330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6330(uint *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = param_4 >> 1;
  puVar4 = param_3;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = *puVar4;
    param_3._2_1_ = (undefined1)(uVar1 >> 0x10);
    *param_1 = (uint)CONCAT11((char)(uVar1 >> 8),param_3._2_1_) | (uVar1 & 0xff) << 0x10;
    param_1 = param_1 + 1;
    do {
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
  }
  return;
}


