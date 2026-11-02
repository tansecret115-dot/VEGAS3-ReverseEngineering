/* Module: vidcap30.exe
   Function: FUN_0044e350
   Address: 0044e350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x38) & 4) == 0) {
    iVar1 = 0xc508 - (uint)((*(uint *)(param_1 + 0x38) & 2) != 0);
  }
  else {
    iVar1 = 0xc509;
  }
  _SfLoadString_16(DAT_005ba2a0,iVar1,param_2,param_3);
  return;
}


