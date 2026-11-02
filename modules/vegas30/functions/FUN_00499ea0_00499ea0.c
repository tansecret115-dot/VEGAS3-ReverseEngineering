/* Module: vegas30.exe
   Function: FUN_00499ea0
   Address: 00499ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00499ea0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  FUN_00499dc0(param_1,param_3,param_4,param_2 & 4);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 5) {
    if (iVar1 == 4) {
      uVar2 = (~*(uint *)(param_1 + 0x18) & 0x8000000 | 0x97ffffff) >> 0x1a;
      puVar3 = &DAT_00613208;
    }
    else {
      if (iVar1 == 0) goto LAB_00499f0c;
      uVar2 = 0x25;
      puVar3 = &DAT_00613218;
    }
    FUN_00454f60(param_1,param_3,param_4,param_1 + 0xac0,puVar3,uVar2);
  }
LAB_00499f0c:
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  *(undefined4 *)(param_1 + 0xac) = param_4;
  return;
}


