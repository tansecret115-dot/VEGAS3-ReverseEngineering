/* Module: rnco3260.dll
   Function: FUN_636f7a20
   Address: 636f7a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7a20(uint *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 >> 1;
  puVar2 = param_1;
  iVar4 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_1._2_1_ = (undefined1)(uVar1 >> 0x10);
    param_3 = param_3 + 1;
    do {
      *puVar2 = (uVar1 & 0xff) << 0x10 | (uint)CONCAT11((char)(uVar1 >> 8),param_1._2_1_);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        return;
      }
      iVar3 = iVar3 - param_4;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_2;
  } while( true );
}


