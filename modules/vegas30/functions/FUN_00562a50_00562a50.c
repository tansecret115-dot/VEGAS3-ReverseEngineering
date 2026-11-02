/* Module: vegas30.exe
   Function: FUN_00562a50
   Address: 00562a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00562a50(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_3;
  iVar4 = 1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  puVar3 = (uint *)FUN_005624d0(param_1);
  if (puVar3 != (uint *)0x0) {
    piVar2 = (int *)puVar3[0x46];
    if (piVar2 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2,param_3,param_4);
      if (iVar4 == 0) {
        *puVar3 = *puVar3 | 0x100;
      }
      else {
        FUN_00562280(puVar3);
      }
      puVar3[0x5d] = puVar3[0x5d] + 1;
    }
    FUN_00562540(param_1,puVar3);
  }
  return iVar4;
}


