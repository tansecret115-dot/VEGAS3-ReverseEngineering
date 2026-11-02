/* Module: vegas30k.dll
   Function: FUN_01042e70
   Address: 01042e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01042e70(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = param_1;
  iVar5 = 0;
  puVar1 = (undefined4 *)(param_1 + 4);
  local_8 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01042770(puVar1);
    _SfList_Destroy_4(*puVar1);
  }
  *(uint *)(iVar4 + 8) = param_2;
  _SfList_CreateExZ_32(puVar1,4,0xffffffff,0xffffffff,0x80000000,0,0,0);
  param_1 = 0;
  FUN_0113ea20(&param_1);
  piVar3 = param_9;
  param_2 = param_3 & 1;
  if (0 < *param_9) {
    do {
      uVar2 = *(uint *)(piVar3[2] + iVar5 * 4);
      if ((uVar2 != 0) &&
         (((*(undefined4 *)(uVar2 + 0x2a4) = 2, *(int *)(uVar2 + 0x340) != 2 ||
           (param_3 = (uint)(*(uint *)(uVar2 + 0x240) < param_1), param_3 == 0)) &&
          ((*(byte *)(uVar2 + 0x238) & 0x20) != 0)))) {
        iVar4 = FUN_010427b0(uVar2 + 4,param_4,param_5,param_2);
        if (((iVar4 != 0) &&
            (iVar4 = FUN_01042c60(0x20,*(undefined4 *)(uVar2 + 0x23c),param_6), iVar4 != 0)) &&
           (iVar4 = FUN_01042c90(piVar3,iVar5,uVar2 + 4,0x20,1), iVar4 == 0)) {
          *(int *)(uVar2 + 0x29c) = local_8;
          local_8 = local_8 + 1;
          *(undefined4 *)(uVar2 + 0x2a4) = 0;
          param_3 = uVar2;
          _SfList_InsertList_16(*puVar1,0xffffffff,&param_3,1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar3);
  }
  return 0;
}


