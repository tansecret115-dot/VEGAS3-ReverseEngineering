/* Module: vegas30.exe
   Function: FUN_005f7050
   Address: 005f7050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005f714b) */
/* WARNING: Removing unreachable block (ram,0x005f7153) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __thiscall FUN_005f7050(int param_1,int *param_2,undefined2 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint unaff_EBP;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  undefined4 *puVar7;
  int local_8;
  undefined4 uStack_4;
  
  local_8 = 0;
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x14))();
  if (-1 < (int)puVar2) {
    *(uint *)(param_1 + 0x8c) = (unaff_EBP & 3) << 5 | *(uint *)(param_1 + 0x8c) & 0xffffff9f;
    puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x1c))(param_2);
    if (-1 < (int)puVar2) {
      puVar7 = &DAT_0060ef58;
      puVar2 = (undefined4 *)(**(code **)*param_2)(param_2,&DAT_0060ef58,&stack0xfffffff4);
      if (-1 < (int)puVar2) {
        iVar3 = (**(code **)(local_8 + 0x2c))(&local_8,param_1 + 0x50);
        puVar2 = puVar7;
        if (-1 < iVar3) {
          *(int **)(param_1 + 0x2c) = (int *)(param_1 + 0x98);
          *(int *)(param_1 + 0x98) = local_8;
          *(undefined4 *)(param_1 + 0x9c) = uStack_4;
          *(undefined4 *)(param_1 + 0xa0) = unaff_retaddr;
          *(int **)(param_1 + 0xa4) = param_2;
          *(undefined2 *)(param_1 + 0xa8) = param_3;
          piVar4 = (int *)param_2[4];
          if ((piVar4 == (int *)0x0) || (*piVar4 != 0x20)) {
            puVar6 = (undefined4 *)(param_1 + 0x30);
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined4 *)(param_1 + 0x30) = 0x20;
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
          }
          else {
            piVar5 = (int *)(param_1 + 0x30);
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar5 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            }
            *(int *)(param_1 + 0x30) = 0x20;
          }
          uVar1 = *(uint *)(param_1 + 0x8c);
          if ((((uVar1 & 4) != 0) || ((uVar1 & 0x60) == 0)) ||
             (((uVar1 & 0x40) != 0 && ((uVar1 & 0x10) != 0)))) {
            *(uint *)(param_1 + 0x8c) = uVar1 & 0xfffffffc;
          }
          if (*(int *)(param_1 + 0x88) == 0) {
            *(int **)(param_1 + 0x88) = param_2;
            (**(code **)(*param_2 + 4))(param_2);
            puVar2 = puVar7;
          }
        }
        (**(code **)(*(int *)(param_1 + 0x20) + 8))((int *)(param_1 + 0x20));
      }
    }
  }
  return puVar2;
}


