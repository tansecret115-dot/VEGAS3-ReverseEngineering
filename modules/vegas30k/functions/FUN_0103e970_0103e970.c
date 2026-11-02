/* Module: vegas30k.dll
   Function: FUN_0103e970
   Address: 0103e970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103e970(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x36c) == 0) || (*(int *)(param_1 + 0x368) != *(int *)(param_1 + 0x36c)))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(int *)(param_1 + 0x368) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x368) + 0x44);
    if (((iVar2 != 0) && (iVar2 = _SfAudio_IsEqualFormat_8(iVar2,param_2), iVar2 != 0)) &&
       (*(int *)(param_1 + 0x3b8) == param_3)) {
      return 0;
    }
    FUN_01040210(*(undefined4 *)(param_1 + 0x368));
  }
  *(int *)(param_1 + 0x3b8) = param_3;
  uVar3 = FUN_010400e0(param_2);
  uVar3 = FUN_010401b0(uVar3);
  *(undefined4 *)(param_1 + 0x368) = uVar3;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x36c) = uVar3;
  }
  FUN_0103cbe0();
  return 0;
}


