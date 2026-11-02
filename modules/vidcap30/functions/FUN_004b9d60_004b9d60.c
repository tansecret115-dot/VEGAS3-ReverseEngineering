/* Module: vidcap30.exe
   Function: FUN_004b9d60
   Address: 004b9d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b9d60(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_48 [32];
  undefined4 local_28 [10];
  
  if (*(double *)(*(int *)(param_3 + 0x10) + 0x10) != _DAT_00589f10) {
    local_48[0] = 0;
    puVar3 = local_28;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28[0] = 1;
    uVar6 = 2;
    uVar4 = ftol(2);
    _SfNanoTimeToTextEx_20(local_48,local_28,uVar4,uVar6);
    param_2 = param_2 + 1;
    uVar6 = _SfGetString2_8(DAT_005c16d8,0x1128);
    SfMEditPrintF(param_1,uVar6,param_2);
    uVar6 = *(undefined4 *)(*(int *)(param_3 + 0x10) + 0x14);
    uVar5 = *(undefined4 *)(*(int *)(param_3 + 0x10) + 0x10);
    uVar1 = _SfGetString2_8(DAT_005c16d8,0x1129);
    SfMEditPrintF(param_1,uVar1,uVar5,uVar6);
    SfMEditPrintF(param_1,&DAT_00599fb0,local_48);
    return 1;
  }
  param_2 = param_2 + 1;
  uVar6 = _SfGetString2_8(DAT_005c16d8,0x112a);
  SfMEditPrintF(param_1,uVar6,param_2);
  return 1;
}


