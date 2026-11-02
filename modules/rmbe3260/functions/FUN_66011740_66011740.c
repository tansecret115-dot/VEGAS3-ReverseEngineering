/* Module: rmbe3260.dll
   Function: FUN_66011740
   Address: 66011740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66011740(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&local_10,&local_c,&local_8,&local_14);
  *(undefined4 *)(param_1 + 0x2c) = local_8;
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x30) = local_8;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x84) = local_8;
  }
  if (-1 < iVar2) {
    uVar4 = 0;
    uVar3 = (ushort)*(undefined4 *)(param_1 + 0x94);
    if (uVar3 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x90) + (uint)uVar4 * 4);
        iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,local_10,local_c,local_8);
        if (iVar2 < 0) {
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return;
}


