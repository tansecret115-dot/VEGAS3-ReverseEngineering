/* Module: aviplug.dll
   Function: FUN_5f933d50
   Address: 5f933d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f933d50(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar3 = 0;
  *param_2 = 0;
  param_2 = (undefined4 *)0x0;
  if (param_3 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (param_3 == 0x73646976) {
    uVar3 = 2;
  }
  else if (param_3 == 0x73647561) {
    uVar3 = 1;
  }
  puVar5 = (undefined4 *)0x1;
  ppuVar4 = &param_2;
  iVar2 = (**(code **)(*(int *)(param_1 + -4) + 0x50))(param_1 + -4,ppuVar4,uVar3,param_4,1,0,0);
  if (-1 < iVar2) {
    uVar3 = (**(code **)*puVar5)(puVar5,&DAT_5f9da4c0,puVar1);
    (*(code *)(*ppuVar4)[2])(ppuVar4);
    return uVar3;
  }
  return 0x80044073;
}


