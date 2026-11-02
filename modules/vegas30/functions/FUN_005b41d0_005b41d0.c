/* Module: vegas30.exe
   Function: FUN_005b41d0
   Address: 005b41d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_005b41d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x3f0);
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_005bad50(*(int *)(param_1 + 0x3f0));
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x3fc) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x400) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x404) = 0;
  }
  *(int *)(param_1 + 0x3f8) = param_2;
  iVar3 = FUN_005bad30(0,1,puVar1);
  uVar2 = param_4;
  if (-1 < iVar3) {
    if (param_2 == -1) {
      iVar3 = FUN_005e9e80(*puVar1,param_5,param_4,&param_4);
      *(undefined4 *)(param_1 + 0x400) = uVar2;
      *(undefined4 *)(param_1 + 0x404) = param_5;
    }
    else {
      iVar3 = FUN_005eaac0(*puVar1,*(undefined4 *)(param_1 + 0x3b4),param_2,param_3,param_4,0,
                           &param_4);
      *(undefined4 *)(param_1 + 0x400) = uVar2;
      *(undefined4 *)(param_1 + 0x3fc) = param_3;
    }
    if (iVar3 < 0) {
      FUN_005bad50(*puVar1);
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0xfffffffe;
      *(undefined4 *)(param_1 + 0x3fc) = 0xfffffffe;
      *(undefined4 *)(param_1 + 0x400) = 0xfffffffe;
    }
  }
  return iVar3;
}


