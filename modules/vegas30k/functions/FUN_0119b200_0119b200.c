/* Module: vegas30k.dll
   Function: FUN_0119b200
   Address: 0119b200
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119b200(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x640);
  if (*(int *)(param_1 + 0x62c) != 0) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
  }
  if (*(int *)(param_1 + 0x624) != 0) {
    *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + -1;
  }
  if ((*(int *)(param_1 + 0x62c) != 0) || (*(int *)(param_1 + 0x624) != 0)) {
    return 0;
  }
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_0119b286:
      *(undefined4 *)(param_1 + 0x4ec) = 0;
      *(undefined4 *)(param_1 + 0x4e8) = 0;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      return iVar3;
    }
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x16c))(param_1);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
      goto LAB_0119b286;
    }
    puVar1 = (undefined4 *)puVar1[0xd];
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffff9f);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff9f;
  } while( true );
}


