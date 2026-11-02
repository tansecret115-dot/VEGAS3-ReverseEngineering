/* Module: vegas30k.dll
   Function: FUN_01043d20
   Address: 01043d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_01043d20(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  int *local_4;
  
  piVar1 = (int *)(param_1 + 0x48);
  iVar4 = 0;
  local_8 = 0;
  local_4 = piVar1;
  if ((*(int *)(param_1 + 0x48) == 0) &&
     (_SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x80000000,0,0,0), *piVar1 == 0)) {
    return 0x80004005;
  }
  local_c = 0;
  FUN_0113ea20(&local_c);
  piVar1 = param_8;
  if (0 < *param_8) {
    do {
      piVar2 = *(int **)(piVar1[2] + iVar4 * 4);
      if ((piVar2 != (int *)0x0) &&
         (((piVar2[199] = 2, piVar2[0xd0] != 2 ||
           (param_8 = (int *)(uint)((uint)piVar2[0x90] < local_c), param_8 == (int *)0x0)) &&
          ((piVar2[0x8e] & 0x100U) != 0)))) {
        iVar3 = FUN_010427b0(piVar2 + 1,param_3,param_4,param_2 & 1);
        if (((iVar3 != 0) && (iVar3 = FUN_01042c60(0x100,piVar2[0x8f],param_5), iVar3 != 0)) &&
           ((piVar2[0x93] != 0 ||
            (iVar3 = FUN_01042c90(piVar1,iVar4,piVar2 + 1,0x100,0), iVar3 == 0)))) {
          piVar2[199] = 0;
          param_8 = piVar2;
          _SfList_InsertList_16(*local_4,0xffffffff,&param_8,1);
          piVar2[0xc5] = local_8;
          local_8 = local_8 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar1);
  }
  return 0;
}


