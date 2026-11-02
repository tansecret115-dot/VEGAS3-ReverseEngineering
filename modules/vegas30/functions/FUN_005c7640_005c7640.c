/* Module: vegas30.exe
   Function: FUN_005c7640
   Address: 005c7640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c7640(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(*(int *)(iVar1 + 8) + 8);
  FUN_005b83b0(puVar2,1);
  iVar3 = FUN_005f1460(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_1 + 0x1c));
  if (iVar3 == 0) {
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar3 = FUN_005f1460(*(undefined4 *)(iVar1 + 4),0);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        goto LAB_005c769d;
      }
    }
    uVar4 = FUN_005c6b30(puVar2,iVar1,param_1);
  }
  else {
LAB_005c769d:
    FUN_005bad20(puVar2);
    FUN_005ed410(*(undefined4 *)(param_1 + 0x18),0,0);
    FUN_005ed3f0(param_2);
    *(undefined4 *)(param_1 + 0x18) = param_2;
    local_8 = *(undefined4 *)(iVar3 + 0x20);
    local_4 = *(undefined4 *)(iVar3 + 0x24);
    uVar4 = FUN_005c7320(iVar1,param_1,0,&local_8);
    if (*(int *)(iVar1 + 0x50) == param_1) {
      if ((code *)**(undefined4 **)(iVar1 + 0x218) != (code *)0x0) {
        (*(code *)**(undefined4 **)(iVar1 + 0x218))(iVar1);
      }
      if (*(int *)(iVar1 + 4) == 3) {
        FUN_0043d090(iVar1);
      }
      *(uint *)(*(int *)(iVar1 + 8) + 0x10) = *(uint *)(*(int *)(iVar1 + 8) + 0x10) | 0x200000;
      *(uint *)*puVar2 = *(uint *)*puVar2 | 0x2000;
    }
  }
  DAT_0064767c = DAT_0064767c | 0x200;
  FUN_005b84d0(puVar2,1);
  return uVar4;
}


