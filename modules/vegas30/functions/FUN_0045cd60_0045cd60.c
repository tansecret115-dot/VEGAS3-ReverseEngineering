/* Module: vegas30.exe
   Function: FUN_0045cd60
   Address: 0045cd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045cd60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0x30000;
  iVar5 = 5;
  if ((*(byte *)(param_1 + 0x654) & 0x80) != 0) {
    iVar5 = 0;
  }
  if ((*(int *)(param_1 + 0x65c) <= param_3) &&
     (param_3 < *(int *)(param_1 + 0x66c) + *(int *)(param_1 + 0x65c))) {
    if (param_3 < *(int *)(param_1 + 0x688)) {
      return 0x30001;
    }
    if (*(int *)(param_1 + 0x69c) <= param_3) {
      return 0x30008;
    }
    if (*(int *)(param_1 + 0x698) <= param_3) {
      return 0x30007;
    }
    if (*(int *)(param_1 + 0x694) <= param_3) {
      return 0x30006;
    }
    if (*(int *)(param_1 + 0x690) <= param_3) {
      return 0x30005;
    }
    if (*(int *)(param_1 + 0x68c) <= param_3) {
      return 0x30004;
    }
    iVar1 = *(int *)(param_1 + 0x6a4);
    if (param_3 < iVar1 - iVar5) {
      return 0x30002;
    }
    iVar2 = *(int *)(param_1 + 0x6ac);
    if (iVar2 + iVar5 <= param_3) {
      return 0x30003;
    }
    iVar4 = ((iVar2 - iVar1) + -2) / 2;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
    uVar3 = 0x3000a;
    if (param_3 < iVar1 + iVar5) {
      return 0x30009;
    }
    if (iVar2 - iVar5 <= param_3) {
      uVar3 = 0x3000b;
    }
  }
  return uVar3;
}


