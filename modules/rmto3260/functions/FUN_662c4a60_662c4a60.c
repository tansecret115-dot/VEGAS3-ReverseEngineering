/* Module: rmto3260.dll
   Function: FUN_662c4a60
   Address: 662c4a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_662c4a60(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *this;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  int local_30 [3];
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  piVar5 = (int *)0x0;
  local_8 = (int *)0x0;
  FUN_662ef160(local_30,"ASMRuleBook");
  piVar1 = param_1;
  if ((param_1[0x14] == 0) || (param_1[0x15] == 0)) {
    FUN_662ef0f0(local_30);
    return (int *)0x0;
  }
  FUN_662eeff0(&uStack_50,local_30);
  FUN_662dfd50(param_2);
  piVar2 = operator_new((local_c & 0xffff) + 1);
  if (piVar2 == (int *)0x0) {
    piVar5 = (int *)0x8007000e;
  }
  piVar3 = piVar2;
  local_24 = piVar2;
  if (-1 < (int)piVar5) {
    piStack_48 = local_14;
    FUN_662eeff0(&stack0xffffffac,local_30);
    piVar5 = (int *)FUN_662dfdb0(param_2);
    *(char *)((int)piVar2 + (local_c & 0xffff)) = '\0';
    piVar3 = piVar5;
    if (-1 < (int)piVar5) {
      this = operator_new(10);
      if (this == (void *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = FUN_662f28e0(this,(char *)piVar2);
      }
      piVar3 = local_8;
      if (local_8 == (int *)0x0) {
        piVar5 = (int *)0x8007000e;
      }
    }
  }
  if (-1 < (int)piVar5) {
    param_1 = (int *)0x0;
    param_2 = (int *)0x0;
    local_10 = 0;
    local_20 = CONCAT22((short)((uint)piVar3 >> 0x10),(short)local_8[1]);
    if ((short)local_8[1] != 0) {
      do {
        piVar2 = local_24;
        if (piVar5 != (int *)0x0) break;
        piStack_48 = (int *)0x662c4b76;
        piVar5 = (int *)FUN_662f2b80(local_8,local_10,&param_1);
        if (-1 < (int)piVar5) {
          piStack_48 = param_1;
          piStack_4c = (int *)0x662c4b91;
          piVar5 = (int *)(**(code **)(*param_1 + 0x30))();
          piStack_4c = param_2;
          uStack_50 = 0x662c4b9c;
          pcVar4 = (char *)(**(code **)(*param_2 + 0x1c))();
          local_1c = atoi(pcVar4);
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))();
            param_2 = (int *)0x0;
          }
          if (-1 < (int)piVar5) {
            piStack_48 = param_1;
            piStack_4c = (int *)0x662c4bce;
            piVar5 = (int *)(**(code **)(*param_1 + 0x30))();
            piStack_4c = param_2;
            uStack_50 = 0x662c4bd9;
            pcVar4 = (char *)(**(code **)(*param_2 + 0x1c))();
            local_18 = atoi(pcVar4);
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))();
              param_2 = (int *)0x0;
            }
            if (-1 < (int)piVar5) {
              piStack_48 = piVar1;
              piStack_4c = (int *)0x662c4c08;
              piVar5 = (int *)(**(code **)(*piVar1 + 100))();
            }
          }
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))();
          param_1 = (int *)0x0;
        }
        local_10 = local_10 + 1;
        piVar2 = local_24;
      } while ((ushort)local_10 < (ushort)local_20);
    }
  }
  if (piVar2 != (int *)0x0) {
    operator_delete(piVar2);
  }
  if (local_8 != (int *)0x0) {
    FUN_662f2b40(local_8);
    operator_delete(local_8);
  }
  FUN_662ef0f0(local_30);
  return piVar5;
}


