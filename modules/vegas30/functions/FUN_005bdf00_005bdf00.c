/* Module: vegas30.exe
   Function: FUN_005bdf00
   Address: 005bdf00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005bdf00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, 0 < iVar2)) {
    puVar5 = local_30;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_30[1] = *(undefined4 *)(param_1 + 0xc);
    local_30[2] = *(undefined4 *)(param_1 + 0x10);
    local_30[3] = *(undefined4 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x24);
    local_1c = *(undefined4 *)(param_1 + 0x28);
    local_30[0] = 0x30;
    puVar5 = (undefined4 *)piVar1[2];
    local_10 = *puVar5;
    local_c = puVar5[1];
    local_8 = puVar5[2];
    local_4 = puVar5[3];
    local_18 = iVar2;
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_30,0x30,0);
    if ((-1 < iVar3) && (iVar4 = 1, 1 < iVar2)) {
      do {
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2,&stack0xffffffb0,0x10,0);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    return iVar3;
  }
  return -0x7fff0001;
}


