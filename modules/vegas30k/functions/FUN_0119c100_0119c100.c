/* Module: vegas30k.dll
   Function: FUN_0119c100
   Address: 0119c100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0119c100(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x61c) + -1;
  *(int *)(param_1 + 0x61c) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar3 = FUN_0119c050(0);
    }
    else {
      *(undefined4 *)(param_1 + 0x620) = 0;
    }
    *(undefined4 *)(param_1 + 0x8bc) = 0;
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffffef);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x7fffffef;
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  *(undefined4 *)(param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  return uVar3;
}


